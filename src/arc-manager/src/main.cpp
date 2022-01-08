// Copyright 2022
// Licensed under GPLv3
// SEE the LICENSE file included.

// File created by Tim Joyce 2022/01/08

#include "../include/mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
