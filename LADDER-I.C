//else if ladder

void main()
{
     int n;
     clrscr();
     printf("enter a no.");
     scanf("%d",&n);
     if(n==0)
	printf("%d is zero",n);
     else if(n>0)
	printf("%d is +ve",n);
     else
	printf("%d is -ve",n);
     getch();
}