#include <stdio.h>

int main()
{
	int i,j,n,num[10],temp,k;
	printf("\nEnter the number");
	scanf("%d",&n);
	printf("\nValues");
	for(k=0;k<n;k++)
	{
	    scanf("\n %d",&num[k]);
	}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(num[i]>num[j])
		{
		temp=num[i];
		num[i]=num[j];
		num[j]=temp;
		
		}
	}
		printf("%d\t",num[i]);
}
	return 0;
}
