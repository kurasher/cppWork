#include <stdio.h>

void main(){
    int a;
    int b = 6;
    int add, sub;
    double ave;
    a = 8;
    add = a+b;
    sub = a-b;
    ave = a+b / 2.0;
    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("a and b average = %d\n", ave);
}