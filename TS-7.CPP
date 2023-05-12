#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int n,k=0,r=1,i;
	printf("enter number=");
	scanf("%d",&n);
	while(n>k)
	{
		printf("%d,",k);
		i=k+r;
		k=r;
		r=i;
	}
	getch();
}