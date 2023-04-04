#include<stdio.h>
#include<conio.h>
struct a{
int roll;
char name[20];
float marks;
};
typedef struct a student;
void main()
{
int i;
student st1[4];
clrscr();
for(i=0;i<=3;i++)
{
printf("\nEnter Roll no");
scanf("%d",&st1[i].roll);
printf("\nEnter Name");
scanf("%s",&st1[i].name);
printf("Enter marks of student");
scanf("%f",&st1[i].marks);
}
for(i=0;i<=3;i++)
{
printf("\nThe details of the student are");
printf("\n%d",st1[i].roll);
printf("\n%s",st1[i].name);
printf("\n%f",st1[i].marks);
}
getch();
}