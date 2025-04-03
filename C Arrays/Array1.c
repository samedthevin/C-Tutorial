#include <stdio.h>

int main() {
    int arr[5]={1,2,3,4,5};
    int temp,i;
    for(i=0;i<5/2;i++){
    temp=arr[i];
    arr[i]=arr[5-i-1];
    arr[5-i-1]=temp; //n-i-1
    }
    for(i=0;i<5;i++){
  printf("%d\n",arr[i]);

    }
    return 0;
}