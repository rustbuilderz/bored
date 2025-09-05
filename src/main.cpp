#include "include/list.h"

int main(int arg_count, char *args[]) {
    
    if(arg_count > 1) {
        List mainprogram;
        mainprogram.name = string(args[1]);
        mainprogram.print_menu();
    }
    else {
        cout << "Username not supplied." << endl;
    }

    return 0;
}
