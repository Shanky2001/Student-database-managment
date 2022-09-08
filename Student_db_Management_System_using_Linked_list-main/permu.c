#include<stdio.h>
void main ()
{
    int n, r, per, fact1, fact2,number,i,a=1;
    for(i=1;i<=3;i++)
    {
    printf("\n enter n & r value of %d number: ",a);
    scanf("%d %d",&n,&r);
    fact1 = n;
    for (int i = n - 1; i >= 1; i--)
    {
        fact1 = fact1 * i;
    }
    number = n - r;
    fact2 = number;
    for (i = number - 1; i >= 1; i--)
    {
        fact2 = fact2 * i;
    }
    per = fact1 / fact2;
    printf("Permutation = %d",per);
    }
    a++;
}
