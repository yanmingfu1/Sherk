#ifndef CLIENT_MODULE_UI_H
#define CLIENT_MODULE_UI_H

// 暴露给外界的接口

#include "../../include/object/User.h"

extern User ui_print_login_dialog();
extern void ui_print_welcome();
extern void ui_print_illegal_input();

#endif
