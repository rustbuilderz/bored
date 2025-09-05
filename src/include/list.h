#include <iostream>
#include <vector>
using namespace std;

class List{
    private:

    protected:

    public:
        List() {
            //constructer
        }

        vector<string> list;
        string name;

        void delete_item();
        void add_item();
        void print_list();
        void print_menu();
};