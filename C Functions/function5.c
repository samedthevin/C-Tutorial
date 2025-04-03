//exponential function
#include <stdio.h>
float expo(float x,int y);
int main(){
    float x;
    int y;
    printf("Enter the base and exponent:");
    scanf("%f %d",&x,&y);
    printf("%f",expo(x,y));
    return 0;
}
float expo(float x,int y){
    float result=1;
    int i;
    if(y>0){
    for(i=1;i<=y;i++){
    result*=x;}
    }
    else{
        for(i=1;i<=-y;i++){
            result*=1/x;
        }

    }
    return result;
}