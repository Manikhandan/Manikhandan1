#include <stdio.h>
int main()
{
long long m;
int count = 0;
printf("Enter a integer: ");
scanf("%lld", &m);
while(m != 0)
{
++count;
}
printf("Number of digits is : %d", count);
return 0;
}
