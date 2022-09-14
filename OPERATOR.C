//wap menu driven program the perform arithmatic opration: +,-,/,*,%.....

void main()
{
     char c;
     int x,y;
     clrscr();
     printf("\n enter the choise : \n 'a' or 'A' for addition.");
     printf("\n 's' or 'S'for subtraction.");
     printf("\n 'm'or 'M' for multiplication.");
     printf("\n 'd'or 'D'for division.");
     printf("\n 'r'or 'R'for rmainder.\n");
     scanf("%c", &c);
     printf("\n Enter first no.:");
     scanf("%d",&x);
     printf("\n Enter second no.:");
     scanf("%d",&y);
     switch(c)
     {
	 case'a':
	 case'A':
	     printf("\nAddition is %d",x+y);
	     break;
	 case's':
	 case'S':
	     printf("\nSubtraction is %d",x-y);
	     break;
	 case'm':
	 case'M':
	     printf("\nMultiplication is %d",x*y);
	     break;
	 case'd':
	 case'D':
	     printf("\nDivision is %d",x/y);
	     break;
	 case'r':
	 case'R':
	     printf("\dRemainder is %d",x%y);
	     break;
	 default:
	     printf("\nInvalid");
	     break;
	 }
	 getch();
}

