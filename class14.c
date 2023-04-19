#include<stdio.h>
#include<conio.h>
int semester();
int main(){
    printf("Calculate the percentage of your first semester\n");
    semester();
    return 0;

}
int semester(){
    int a,b,c,d,e,f,g;
    scanf("Enter your CSE111 score: %d\n",&a);
    scanf("Enter your CSE111 score: %d\n",&b);
    scanf("Enter your CSE111 score: %d\n",&c);
    scanf("Enter your CSE111 score: %d\n",&d);
    scanf("Enter your CSE111 score: %d\n",&e);
    scanf("Enter your CSE111 score: %d\n",&f);
    scanf("Enter your CSE111 score: %d\n",&g);
    int z;
    z= (a+b+c+d+e+f+g)/7;
    printf("%d",z);
    return 0;

}