//denomination

#include<stdio.h>
#include<conio.h>

void main()
{
     int rs, rs2000, rs500, rs200, rs100, rs50, rs20, rs10, rs5, rs2, rs1;
     clrscr();
     printf("enter total rs.:");
     scanf("%d",&rs);
     rs2000=rs/2000;
     rs=rs%2000;
     rs500=rs/500;
     rs=rs%500;
     rs200=rs/200;
     rs=rs%200;
     rs100=rs/100;
     rs=rs%100;
     rs50=rs/50;
     rs=rs%50;
     rs20=rs/20;
     rs=rs%20;
     rs10=rs/10;
     rs=rs%10;
     rs5=rs/5;
     rs=rs%5;
     rs2=rs/2;
     rs=rs%2;
     rs=rs;
     printf("\n 2000 =%d",rs2000);
     printf("\n 500 =%d",rs500);
     printf("\n 200 =%d",rs200);
     printf("\n 100 =%d",rs100);
     printf("\n 50 =%d",rs50);
     printf("\n 20 =%d",rs20);
     printf("\n 10 =%d",rs10);
     printf("\n 5 =%d",rs5);
     printf("\n 2 =%d",rs2);
     printf("\n 1 =%d",rs1);
     getch();
}