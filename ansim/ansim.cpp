#include "ansim.h"
#include "ui_ansim.h"

AnSim::AnSim(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AnSim)
{
    ui->setupUi(this);
}

AnSim::~AnSim()
{
    delete ui;
}
