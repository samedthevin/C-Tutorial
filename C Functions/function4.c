//Recursion Functions
#include <stdio.h>
int sum(int x);

int main(){
    int result=sum(5);
    printf("%d",result);
    return 0;
}

int sum(int x){
    if(x>0){
        return x+sum(x-1);
    }
    else{
        return 0;
    }
}
    