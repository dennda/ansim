#ifndef ANSIM_H
#define ANSIM_H

#include <QMainWindow>

namespace Ui {
    class AnSim;
}

class AnSim : public QMainWindow
{
    Q_OBJECT

public:
    explicit AnSim(QWidget *parent = 0);
    ~AnSim();

private:
    Ui::AnSim *ui;
};

#endif // ANSIM_H
