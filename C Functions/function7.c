#include <stdio.h>
//  Factorial with Recursion Functions
int factorial(int x);
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    int total=factorial(x);
    printf("%d!=%d",x,total);
    return 0;
}
int factorial(int x){
    if(x==0){
        return 1;
    }
     else {
    return x*factorial(x-1);}
}