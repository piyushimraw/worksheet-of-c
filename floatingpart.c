
#include <stdio.h>

int main (){
    float f;
    printf("Enter No =");
    scanf("%f", &f);
    f =  f-(long)f;
    printf("%f\n", f);
    return 0;
}
