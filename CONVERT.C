//input a character wap that convert upper case letter into lower case and lower case latter into upeer case.

void main()
{
     char a,c;
     clrscr();
     printf("enter a charcter :");
     scanf("%c",&c);
     if(c>=65 && c<=90)
	a = c + 32;
     else if(c>97 && c<=122)
	a = c - 32;
     else
	a = c;
     printf("%c is now %c",c,a);
     getch();
}


