//4th trainal...


void main()
{
    int n,i,j,sp=-1;
    clrscr();
    printf("Enter n:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
	  for(j=1;j<=i;j++)
	      printf("%2d",j);
	  for(j=n;j<=sp;j++);
	      printf("  ");
	  sp+=2;

	  if(i==1)
		j=2;
	  else
		j=1;
	  for(;j<=n;j++)
	     printf("%2d",j);
	  printf("\n");
    }
    getch();
}