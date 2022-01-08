#include "../include/vm_editor.h"
#include "../ui/ui_vm_editor.h"

vm_editor::vm_editor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vm_editor)
{
    ui->setupUi(this);
}

vm_editor::~vm_editor()
{
    delete ui;
}
