#include <stdio.h>
int main(){
    int a[5]={3,5,7,2,1};
    int i;
    for(i=0;i<5;i++){
        printf("arr[%d]=%d\n",i,(*a+i));
    }
return 0;
}
