//Functions with pointers
#include <stdio.h>
#include <math.h>
void adress(double *ptr);
int Square(double *ptr);
int main(){
    double number;
    printf("Enter a number:");
    scanf("%lf",&number);
    adress(&number); //we have to put & in pointer functions
    printf("%d",Square(&number)); // we have to put again for square function
    return 0;

}
void adress(double *ptr){
    printf("Adress of number:%p\n",ptr);
    
}
int Square(double* ptr){
    return *ptr * *ptr;
}

