#include <stdio.h>
#include<conio.h>
int main() 
{
    int m= 65;
    int n= 12;
    printf(" value of i=%d k=%d before swapping", m, n);
    m= m ^ n; 
    n = m ^ n;
    printf("value of i=%d k=%d after swapping", m, n);
    return 0;
}
