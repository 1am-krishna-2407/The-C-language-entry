#include<stdio.h>
void avg();
void main(){
    printf("Hello World\n");
    avg();
    
}
void  avg(){
    int a, b,c,d;
    scanf("%d%d%d", &a,&b,&c);

    d= (a+b+c)/3;
    printf("Average: %d", d);
    
}