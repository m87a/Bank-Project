#include "mainwindow.h"
#include "ui_mainwindow.h"
#define Path_to_DB "C:/Users/user/Documents/DatabaseLoginForm/Accounts.sqlite"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    myDB = QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName(Path_to_DB);
    QFileInfo checkFile(Path_to_DB);

    if(checkFile.isFile())
    {
        if(myDB.open())
        {
            ui->lblResult->setText("[+]Connected to Database File :)");
        }
    }
    else
    {
        ui -> lblResult -> setText("[!]Database file does not exits :(");
    }

}

MainWindow::~MainWindow()
{

    delete ui;
    qDebug() <<"Closing the connection to Database file on exit" ;
    myDB.close();
}

void MainWindow::on_btnClear_clicked()
{
    ui -> txtPass -> setText("");
    ui -> txtUser -> setText("");
}

void MainWindow::on_pushButton_clicked()
{
    QString Username, Password;
    Username = ui->txtUser->text();
    Password = ui->txtPass->text();

    if(!myDB.isOpen())
    {
        qDebug()<< "No connection to db :(";
        return;
    }

    QSqlQuery qry;
    if(qry.exec("SELECT username, password, role from Users where username =\'" + Username + "'AND password =\'" + Password + "\'"))
    {
        if(qry.next())
        {
            ui->lblResult->setText("[+]Valid Username and Password");
            QString msg = "Username = " + qry.value(0).toString() +"\n" + "Password = " + qry.value(1).toString()
                    + "\n" + "Role = " + qry.value(2).toString();

            QMessageBox::warning(this, "Login was successfull", msg);
            this->hide();
            if(qry.value(2).toString() == "employee")
            {
                BankEmployee bankemployee;
                bankemployee.setModal(true);
                bankemployee.exec();
            }
            else if (qry.value(2).toString() == "admin")
            {
                Administrator administrator;
                administrator.setModal(true);
                administrator.exec();

            }

         }
        else
        {
            ui->lblResult->setText("[-]Wrong Username or Password.:(");
        }
    }


}
