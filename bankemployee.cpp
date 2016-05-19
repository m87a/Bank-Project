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

void BankEmployee::on_btnAddNewCustomer_clicked()
{
    QDialog dlg;
    QGroupBox *groupBox = new QGroupBox("Groupbox");
    QLabel *label = new QLabel("SuckingDick");
    QHBoxLayout *hLayout = new QHBoxLayout (groupBox);
    hLayout ->addWidget(label);
}

void BankEmployee::on_frame_destroyed()
{

}
