#include<stdio.h>
int main(){
    int array[100], position, value, c,n;
    printf("Define the size of an array\n");
    scanf("%d", &n);
    printf(" Enter no. of elements is your array\n" );
    for (c=0; c<n;c++){
        scanf("%d", &array[c]);
    }
    printf("Enter the position where you want to add the new no. ");
    scanf("%d", &position);
    printf("Enter the value \n");
    scanf("%d", &value);
    for (c=n-1; c>=position-1; c++){
        array[c+1]=array[c];
    }
    array[position-1]=value;
    printf("Result\n");
    for (c=0; c<=n; c++){
        printf("%d\n ", array[c]);
    }
    return 0;
}