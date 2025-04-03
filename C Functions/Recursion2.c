#include <stdio.h>
#include <math.h>
double expo(int,int);
int main(){
    int a,b;
    printf("Enter base and exponent:");
    scanf("%d %d",&a,&b);
    printf("%.3lf",expo(a,b));
}
double expo(int a,int b){

    if (b== 0) {
        return 1;
    }
   
    else if (b< 0) {
        return  1 /expo(a,-b);
    }

    else {
        return a * expo(a,b-1);
    }

}