//input a character 2nd method

void main()
{
    char c;
    clrscr();
    printf("enter a character:");
    scanf("%c",&c);
    if(c>=65&&c<=90)
	printf("%c is upper case latter",c);
    else if(c>=97&&c<=122)
	printf("%c is lower case latter",c);
    else if(c>=48&&c<=57)
	printf("%c is digit",c);
    else if(c==32)
	printf("%c is white space",c);
    else
	printf("%c is symbol",c);
    getch();
}