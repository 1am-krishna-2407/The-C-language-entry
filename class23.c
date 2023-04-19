#include<stdio.h>
int main(){
        int a[5],n,i,sum=0;
        printf("\n Enter the no. of elements: ");
        scanf("%d",&n);
        for ( i=0; i<n;i++){
                scanf("%d", &a[n]);

        }
        for ( i=0; i<n; i++)
        {
                sum=sum+a[i];
        }
        printf("/n%d", sum);
        return 0;
}