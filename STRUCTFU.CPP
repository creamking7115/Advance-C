#include <stdio.h>
#include<conio.h>

struct person {
    char name[50];
    int age;
};

void print_person(struct person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}

int main() {
    clrscr();
    struct person my_person = {"Amruta Rajale", 19};
    print_person(my_person);
    getch();
}