//Wap to check two numbers are equal using bitwise operator.
#include <stdio.h>

int equals (int x, int y){
    return !(x ^ y);
}

void main ()
{
    int x, y;
    printf("enter numbers 1 will be printed if equals else 0 ");
    scanf("%d %d", &x, &y);
    printf("%d",equals(x,y));
}
