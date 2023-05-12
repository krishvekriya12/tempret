#include<stdio.h>
#include<conio.h>

main()
{
   int n,sum=0,lastdiget,firstdiget;
   clrscr();
   printf("enter any number");
   scanf("%d",&n);
   lastdiget=n%10;

   while(n>=10)
   {
	n=n/10;
   }
   firstdiget=n;
   sum=firstdiget+lastdiget;
   printf("sum is =%d",sum);
   getch();
}