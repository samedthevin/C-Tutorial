//Matrislerde minör ve majör köşegen örneği
#include <stdio.h>
int main(){
    int size,i,j;
    printf("Enter the size of square matrix:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(i==j|| i+j==size-1){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n\n");
    }
    return 0;
}



/*
The output will be like this:
1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1
*/