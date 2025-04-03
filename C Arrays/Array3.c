#include <stdio.h>
int main(){
//Assign variables to the two dimensional array
    int row,column;
    int i,j;
    printf("Enter the row:");
    scanf("%d",&row);
    printf("Enter the column:");
    scanf("%d",&column);
    int arr[row][column];
    printf("Enter the variables:\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%5d",arr[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}