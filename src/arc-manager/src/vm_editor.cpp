// Copyright 2022
// Licensed under GPLv3
// SEE the LICENSE file included.

// File created by Tim Joyce 2022/01/08

#include "../include/vm_editor.h"
#include "../ui/ui_vm_editor.h"

vm_editor::vm_editor(QWidget *parent) :
    QWidget(parent,Qt::Window),
    ui(new Ui::vm_editor)
{
    ui->setupUi(this);
}

vm_editor::~vm_editor()
{
    delete ui;
}
