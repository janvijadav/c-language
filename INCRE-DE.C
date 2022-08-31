//increace & decrement operators

#include<stdio.h>
#include<conio.h>

void main()
{
     int a,b;
     clrscr();
     a=5;
     b=a++;
     printf("\n a=%d \t b=%d",a,b);
     a=5;
     b=++a;
     printf("\n a=%d \t b=%d",a,b);
     a=5;
     b=a++ + ++a;
     printf("\n a=%d \t b=%d",a,b);
     a=5;
     b=a++ + a++ + ++a;
     printf("\n a=%d \t b=%d",a,b);
     a=5;
     b=++a + a++ + a++ + ++a;
     printf("\n a=%d \t b=%d",a,b);
     a=5;
     b=++a + a++ + a++;
     printf("\n a=%d \t b=%d",a,b);
     a=5;
     b=a++ + ++a + a++ + ++a;
     printf("\n a=%d \t b=%d",a,b);
     a=5;
     b=a++ + a++ + a++ + a++;
     printf("\n a=%d \t b=%d",a,b);
     getch();
}