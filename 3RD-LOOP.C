//3rd
//1 2 6 24 120

void main()
{
   long int i=1,n,a=1;
   clrscr();
   printf("Enter n");
   scanf("%ld",&n);
   for(;i<=n;)
   {
       printf("%ld\t",a);
       a=a*(i+1);
       i++;
   }
   getch();
}