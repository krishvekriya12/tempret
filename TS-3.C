#include<stdio.h>
#include<conio.h>

main()
{
   int a=0,n;
   clrscr();
   printf("enter number=");
   scanf("%d",&n);

   do
   {
	n/=10;
	a++;
   }while(n!=0);
   printf("number of digest=%d",a);
   getch();
}