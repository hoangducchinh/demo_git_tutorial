#include <stdio.h>
#include "mylib.h"

int main(){

    float f;
    printf("Hello world!");
    printf("Enter temperature in Fareinheit: ");
    scanf("%f", &f);

    printf("Enter temperature in Celsius: %f", f_c_conv(f));

    return 0;
}