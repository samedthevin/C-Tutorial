#include <stdio.h>
void ant(int*);
int main(){
int arr[3]={1,2,3};
ant(arr);
return 0;
}
void ant(int* arr){
    int i;
    for(i=0;i<3;i++){
    printf("%d\n",arr[i]);
    }

}