//third numbering program..

// 1 4 7 10 13....

void main()
{
	int i=1, n, b=1;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(;i<=n;)
	{
		printf("%d\t",b);
		b=b+3;
		i++;
	}
	getch();
}