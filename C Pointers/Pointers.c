//Reading adresses from memory
#include <stdio.h>
int main(){
    int x=7;
    char letter='L';
    float number=3.14;

    printf("x=%d\n",x);
    printf("letter=%c\n",letter);
    printf("number=%f",number);
    printf("\n\n");


    printf("x variable adress is %x\n",&x);
    printf("letter variable adress is %x\n",&letter);
    printf("number variable adress is %x\n",&number);          //x and p is same identifier but p adds 0 in front of adresses.
     printf("\n\n");

    printf("x variable adress is %p\n",&x);
    printf("letter variable adress is %p\n",&letter);
    printf("number variable adress is %p",&number);



}