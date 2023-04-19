#include<stdio.h>
int main (){
    unsigned int a= 28;
    unsigned int b= 48;
    int c=0;
    c=a&b;
    printf("%d & %d= %d\n", a,b,c);
     c=a|b;
    printf("%d & %d= %d\n", a,b,c);
     c=a^b;
    printf("%d & %d= %d\n", a,b,c);
     
     c=a<<2;
    printf("%d & %d= %d\n", a,b,c);
    c=a>>2;
   printf("%d & %d= %d\n", a,b,c);
    
}
