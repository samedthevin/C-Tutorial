//Multiplying 2 matrixes
#include <stdio.h>
int main(){
    int arows,acolumns,brows,bcolumns;
    int i,j,k;
    printf("Enter the size of first matrix:");
    scanf("%d %d",&arows,&acolumns);
    printf("Enter the size of second matrix:");
    scanf("%d %d",&brows,&bcolumns);
    if(acolumns!=brows){
        printf("Invalid sizes. It doesn't fit matrix rules.");
        return 0;
    }
    int mat1[arows][brows],mat2[brows][bcolumns],result[arows][bcolumns]; 

    printf("Enter the elements of first matrix:");
    for(i=0;i<arows;i++){
        for(j=0;j<acolumns;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of second matrix:");
    for(i=0;i<brows;i++){
        for(j=0;j<bcolumns;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    for(i=0;i<arows;i++){
        for(j=0;j<bcolumns;j++){
            result[i][j]=0;
            for(k=0;k<brows;k++){ //we can use acolumns instead of brows.    acolumns=brows. Thats rule of matrix.
                result[i][j]+=mat1[i][k]*mat2[k][j];
            }

        }
    }

    printf("The product of 2 matrixes:\n");
    for(i=0;i<arows;i++){
        for(j=0;j<bcolumns;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;

}