#include "bankemployee.h"
#include "ui_bankemployee.h"

BankEmployee::BankEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BankEmployee)
{
    ui->setupUi(this);
}

BankEmployee::~BankEmployee()
{
    delete ui;
}
