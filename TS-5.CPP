#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int n,r,sum=0,temp;
	printf("enter number=");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n/=10;
	}
	if(temp==sum)
	{
		printf("this is palidrome number");
	}
	else
	{
		printf("this is not palidrome number");
	}
	getch();
}