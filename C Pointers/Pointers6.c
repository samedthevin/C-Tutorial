//Returning memory adress with functions(pointer)
#include <stdio.h>
#include <math.h>
float* squareRoot(float* ptr);
int main(){
float number;
float* ptr;
printf("Enter anumber:");
scanf("%f",&number);
ptr=squareRoot(&number);
printf("sqrt of number:%f",*ptr);
return 0;
}
float* squareRoot(float* ptr){ //if it returns adress we need to put floats* squareRoot(.....)  so be carefull about "*". This is a pointer function
    *ptr=sqrt(*ptr);
    return ptr; //We are returning the adress here
}
