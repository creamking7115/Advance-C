#include <stdio.h>
#include<conio.h>

void main() {
 clrscr();
    int *arr[3]; 
    int a = 10, b = 20, c = 30;

    arr[0] = &a; 
    arr[1] = &b;
    arr[2] = &c; 

    printf("Value of a: %d\n", *arr[0]);
    printf("Value of b: %d\n", *arr[1]);
    printf("Value of c: %d\n", *arr[2]);

    getch();
}
