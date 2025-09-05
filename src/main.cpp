#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[]) {
    List mainprogram;
    Database data;

    if(arg_count > 1) {
        mainprogram.name = string(args[1]);
        mainprogram.print_menu();
        data.write(mainprogram.list);
        data.read();
    }
    else {
        cout << "Username not supplied." << endl;
    }
    return 0;
}
