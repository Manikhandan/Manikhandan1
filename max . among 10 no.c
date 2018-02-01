include<stdio.h>
int main()
{
    int a[10],i,n;
    scanf("%d",&n);
    printf("\n the array value is");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
}
int temp,j;
for(i=0;i<n;i++)
{
    for(j=0+i;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
 for(i=0;i<n;i++)
    {
    printf("%d",&a[i]);
}

printf("\n %d",a[n-1]);
return 0;
}
