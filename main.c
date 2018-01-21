#include<stdio.h>
#include <stdlib.h>
void main()
{
    int n,m,s=0;
    printf("\nEnter the values");
    scanf("%d%d",&n,&m);
    while(m!=0)
    {
        s=s+n;
        m--;
    }
    printf("Result = %d",s);
}
