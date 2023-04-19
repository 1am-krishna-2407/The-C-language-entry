#include<stdio.h>
int main() {
    int L,W,H,N,i;
    scanf("%d\n",&L);
    scanf("%d\n",&N);
    
    for (i=1;i<=N;i++){
        scanf("%d %d \n",&W,&H);    
         
    
            if (W==L || H==L){
                printf("ACCEPTED\n");
            }
            else if(W>L){
                printf("CROP IT\n");
            }
            
            else{
                printf("UPLOAD ANOTHER\n");
            }
    }
    
    return 0;
}