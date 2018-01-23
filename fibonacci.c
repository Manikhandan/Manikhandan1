#include <stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, i, m;
    /* Input number from user */
    printf("Enter number of terms: ");
    scanf("%d", &m);
    a = 0;
    b = 1;
    c = 0;
    printf("Fibonacci terms: \n");
    for(i=1; i<=m; i++)
    {
        printf("%d, ", c);
        a = b;     // Copy n-1 to n-2
        b = c;     // Copy current to n-1
        c = a + b; // New term
    }
    return 0;
}
