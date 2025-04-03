//Addition of rows  and Addition of columns
#include <stdio.h>
int main(){
    int i,j,sum=0;
    int matrix[5][5]={
        {2,3,4,1,4},
        {5,4,1,0,8},
        {1,0,9,6,5},
        {4,2,1,5,7},
        {4,2,1,6,7}
    };
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%4d",matrix[i][j]);
        }
        printf("\n\n");
    }
    for(i=0;i<5;i++){
        printf("%d.row=",i+1);
        for(j=0;j<5;j++){
            sum+=matrix[i][j];
        }
        printf("%d\n",sum);
        sum=0;
    }
    printf("\n\n\n");
    for(i=0;i<5;i++){
        printf("%d.column=",i+1);
        for(j=0;j<5;j++){
            sum+=matrix[j][i];
        }
        printf("%d\n",sum);
        sum=0;
    }
}