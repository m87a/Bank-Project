#ifndef BANKEMPLOYEE_H
#define BANKEMPLOYEE_H

#include <QDialog>
#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QSqlDatabase>
#include <QMessageBox>

namespace Ui {
class BankEmployee;
}

class BankEmployee : public QDialog
{
    Q_OBJECT

public:
    explicit BankEmployee(QWidget *parent = 0);
    ~BankEmployee();

private:
    Ui::BankEmployee *ui;
};

#endif // BANKEMPLOYEE_H
