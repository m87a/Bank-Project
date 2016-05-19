#ifndef BANKEMPLOYEE_H
#define BANKEMPLOYEE_H

#include <QDialog>
#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QGroupBox>
#include <QLabel>

namespace Ui {
class BankEmployee;
}

class BankEmployee : public QDialog
{
    Q_OBJECT

public:
    explicit BankEmployee(QWidget *parent = 0);
    ~BankEmployee();

private slots:
    void on_btnAddNewCustomer_clicked();

    void on_frame_destroyed();

private:
    Ui::BankEmployee *ui;

};

#endif // BANKEMPLOYEE_H
