//nested if example
//input an integer numbers write a program that check whether the number is +ve ,-ve or zero.

void main()
{
     int n;
     clrscr();
     printf("enter a no.");
     scanf("%d",&n);
     if(n!=0)
     {
	  if(n>0)
	     printf("%d is +ve",n);
	  else
	     printf("%d is -ve",n);
     }
     else
	 printf("%d is zero",n);
     getch();
}