
#include <stdio.h>
 void swap (int *x, int *y){
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
 }

 int main ()
 {
    int x, y;
    printf("Enter Numbers x and Y resectively ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("After Swap x=%d y=%d",x ,y);
    return 0;
 }
