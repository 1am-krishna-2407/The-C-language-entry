#include<stdio.h>
int main(){
    int a[50];
    int i,loc=-1,key,n;
    printf("\n Enter value of n: ");
    scanf("%d", &n);
    printf("Enter");
    for (i=0;i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter integer value to search in array: ");
    scanf("%d",&key);
    for (i=0; i<n;i++){
        {
            if (a[i]==key){
                loc=i;
                break;
            }
        }
        if(loc!=-1){
            printf("Element found at %d", loc+1);
        }
        else
        {
            printf("Elements not found. ");
        }
        return 0;
    }
}


