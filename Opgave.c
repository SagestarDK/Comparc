
#include <stdio.h>

int main(void){
    int a = 0b01001110;
    int b = 0b11100001;


    printf("~a = %d\n", ~a);
    printf("~b = %d\n", ~b);    
    printf("a | b = %d\n", a | b);
    printf("a & b = %d\n", a & b);
    printf("a ^ b = %d\n", a ^ b);
    //kunne også bruge 'bin(~a)'

    exercise02();
    return 0;
}
//Suppose that a and b have byte values 0x55 and 0x46, respectively.
//Fill in the following table indicating the byte values of the different C expressions

int exercise02(void) {
    int a = 0x55;
    int b = 0x46;

}

// Exercise 3:
int exercise3() {
    short a = -1337;
    short b = 42;
    short c = 3007;
    short d = -8008;

    printf("Signed a: ")
}
