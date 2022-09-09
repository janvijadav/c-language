//exa. 1

void main()
{
      int n,i,j;
      clrscr();
      printf("Enter n:");
      scanf("%d", &n);
      for(i=1;i<=n;i++)
      {
	for
	   (j=1;j<=i;j++)
		printf("%5d",j);
	   printf("\n");
      }
      getch();
}