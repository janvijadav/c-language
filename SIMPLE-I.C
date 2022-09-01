//simple if

#include<stdio.h>
#include<conio.h>

void main()
{
    int age;
    clrscr();
    printf("enter sge");
    scanf("%d",&age);
    if(age>=18)
    {
	printf("you are eligible for voting");
    }
    printf("\n end");
    getch();
}