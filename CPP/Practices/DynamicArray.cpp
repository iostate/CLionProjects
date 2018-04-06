#include "DynamicArray.h"

void check_contents(DynamicArray src, int target);

int main() {

    DynamicArray an_array(2);
    an_array.populate();
    an_array.print_contents();

    DynamicArray an_arraytwo(2);
    an_array.populate();
    an_array.print_contents();
    return 0;
}

/**
 * Check the contents for a target value.
 * If the target value is found, free the memory allocated for the DynamicArray object.
 *
 * @param src DynamicArray The object whose array will be checked.
 * @param target int The target term that is going to be searched for.
 */
void check_contents(DynamicArray src, int target) {
    int i = 0;

    while (i < src.get_length()) {
        if (src.array[i] == target) {
            src.~DynamicArray();
            break;

        }
        i++;
    }
}
