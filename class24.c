#include<stdio.h>
void Function(int n){
    int i=1, s=1;
    while (s<=n){
        i++;
        s=s+i;
        printf("*");
        }
}
void main(){
    Function(24);
}
