#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MiniBrowser.h"

class MiniBrowser : public QMainWindow
{
    Q_OBJECT

public:
    MiniBrowser(QWidget *parent = nullptr);
    ~MiniBrowser();

private:
    Ui::MiniBrowserClass ui;
};
