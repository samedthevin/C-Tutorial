#include <stdio.h>
int main(){
    int i,j,size;
    printf("Enter the size :");
    scanf("%d",&size);
    for(i=1;i<=size;i++){
        for(j=1;j<=size;j++){
            if(j==1||j==size||i==1||i==size||i+j==size||i==j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}