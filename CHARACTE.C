//input a character

void main()
{
	char c;
	clrscr();
	printf("enter a character:");
	scanf("%c",&c);
	if(c>='A' && c<='Z')
	     printf("%c is upper case latter",c);
	else if( c>='a' && c<='z')
	     printf("%c is lower case latter",c);
	else if(c>='0' && c<='9')
	     printf("%c is digit",c);
	else if(c==' ')
	     printf("%c is white space",c);
	else
	     printf("%c is symbol",c);
	getch();
}