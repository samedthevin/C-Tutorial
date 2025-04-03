/* #include <stdio.h>
int main(){
    int arr[2][4]={ {5,13,21,65},{6,29,45,88} };
    int j,i;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("%5d",arr[i][j]);
        }
        printf("\n\n");
    }
    return 0;
} */

//[2] is for row/satır
//[4] is for column/sutün

#include <stdio.h>
int main(){
    int arr[2][4]={ {5,13,21,65},{6,29,45,88} };
    int j,i;
    arr[1][3]=33;// We changed the number in the array. 88 is now 33.
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("%5d",arr[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}