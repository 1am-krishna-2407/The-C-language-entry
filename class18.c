#include<stdio.h>
int main(){
    int x=10;
    float y=2.0;
    float *px;
    px=&y;
    int *ptr;
    ptr=&x;
    printf("value of y=%f",*px);
    printf("\n value of x=%d", *ptr);
}