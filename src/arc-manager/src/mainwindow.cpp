#include "../include/mainwindow.h"
#include "../ui/ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //EXAMPLE VMS POPULATED
    ui->vm_list->addItem("VM 1");
    ui->vm_list->addItem("VM 2");

    connect(ui->action_edit_vm, &QAction::triggered, this, &MainWindow::openVmEditor);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::populateVmList(){

}

void MainWindow::openVmEditor(){

    if (getSelectedVm().isNull()){
        //return;
    }
    editor = new vm_editor(this);  //this is a memory leak. Made for testing popup widget
    editor->show();
}

QUuid MainWindow::getSelectedVm(){



    return QUuid();
}

