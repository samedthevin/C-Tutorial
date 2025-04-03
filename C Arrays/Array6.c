//3d Array
#include <stdio.h>
int main(){
    int i,j,k;
    int matrix[4][2][4]={ //first [] is for table ,second is row, third is column
        {{2,3,9,4},{5,6,4,3}}, //first table 
        // All numbers count as columns and yellow brackets count as row ! NOTE=its same for all tables and if the columns not at max it will assign 0. Like table 2,3,4!!                      //
        {{3,1},{4,8}},//second table
        {{1,2},{5}},//third table
        {{3,4},{8,7}}//fourth table
    };
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            for(k=0;k<4;k++){
                printf("%4d",matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    return 0;

}
/*
Output:
   2   3   9   4
   5   6   4   3


   3   1   0   0
   4   8   0   0


   1   2   0   0
   5   0   0   0


   3   4   0   0
   8   7   0   0
   */
