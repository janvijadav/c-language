//memory allocation exa...

void main()
{
	float a[5];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n subscript \t value \t Memory address");
	for(i=0;i<5;i++)
		printf("\n %d \t \t %2f \t %u",i+1,a[i],&a[i]);
	getch();
}