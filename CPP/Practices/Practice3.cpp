
#include "Practice3.h"
int main() {


    NumberList a;
    a.allocate_memory(4); // max number of integers allowed
    a.receive_numbers();
    a.print_list();

    NumberList b;
    b.allocate_memory(5);
    b.receive_numbers();
    b.print_list();




    return 0;
}
