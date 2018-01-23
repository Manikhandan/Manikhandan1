#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[10],great;
	printf("enter the ten numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",a[i]);
	}
	great=a[0];
	for(i=0;i<10;i++)
	{
	if(a[i]>great)
	{
		great=a[i];
	}
	}
	printf("the greatest number is=%d",greatest);
	return 0;
}
