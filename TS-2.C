#include<stdio.h>
#include<conio.h>

main()
{
   int num,count=1;
   clrscr();
   printf("enter a number \n");
   scanf("%d",&num);
   printf("\nmultiplication tabel for %d is :\n\n",num);
   while(count<=10)
   {
	printf("%d*%d=%d\n",num,count,(num*count));
	count++;
   }
   getch();

}