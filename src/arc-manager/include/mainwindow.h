#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUuid>
#include <QDialog>
#include <QDebug>
#include <QAction>
#include <QPointer>
#include <iostream>
#include "../include/vm_editor.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QUuid getSelectedVm();

public slots:
    void populateVmList();

private slots:
    void openVmEditor();

signals:

private:
    Ui::MainWindow *ui;
    QPointer<vm_editor> editor;
};
#endif // MAINWINDOW_H
