// Copyright 2022
// Licensed under GPLv3
// SEE the LICENSE file included.

// File created by Tim Joyce 2022/01/08

#ifndef VM_EDITOR_H
#define VM_EDITOR_H

#include <QWidget>

namespace Ui {
class vm_editor;
}

class vm_editor : public QWidget
{
    Q_OBJECT

public:
    explicit vm_editor(QWidget *parent = nullptr);
    ~vm_editor();

private:
    Ui::vm_editor *ui;
};

#endif // VM_EDITOR_H
