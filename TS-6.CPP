#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int a=1,n,fect=1;
	printf("enter number=");
	scanf("%d",&n);
	do
	{
		fect=fect*n;
		n--;
	}while(n>=1);
	printf("fectorial value=%d",fect);
	getch();
}