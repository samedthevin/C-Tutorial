#include <stdio.h>
#include <math.h>
double facto(int);
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%lf",facto(a));
}
double facto(int a){

    if(a==0){
        return 1;
    }
     else{
        return a*facto(a-1);
     }

}