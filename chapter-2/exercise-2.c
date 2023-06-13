// Declare an array of three pointers to functions and invoke the appropriate function based on an index value passed in as an argument
#include <stdio.h>

int f1(void) {
    return 1;
}

int f2(void) {
    return 2;
}

int f3(void) {
    return 3;
}

int (*array[3])(void) = {
    &f1,
    &f2,
    &f3
};

int main(void) {
    int output = (*array[0])();
    printf("%d\n", output);
    return 0;
}