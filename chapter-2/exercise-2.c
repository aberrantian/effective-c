// Declare an array of three pointers to functions and invoke the appropriate function based on an index value passed in as an argument
#include <stdio.h>

// array of 3 elements of pointers to integers
int (*array[3])(void);

// create functions
int f1(void) {
    return 1;
}

int f2(void) {
    return 2;
}

int f3(void) {
    return 3;
}

int main(void) {
    array[0] = &f1;
    array[1] = &f2;
    array[2] = &f3;

    int output = (*array[0])();
    printf("%d\n", output);
    
    return 0;
}