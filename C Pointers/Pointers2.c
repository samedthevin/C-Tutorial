#include <stdio.h>
int main(){
    int x=7;
    int* ptr=&x;
    printf("x:%d\n",x);
    printf("x variable adress:%p\n",&x);
    printf("x variable adress:%p\n",ptr); // &x=ptr so it says same adresses. its for x adress.
    printf("ptr adress:%p\n",&ptr); // &ptr is Pointer adress                      //We can use %x instead of %p
    printf("x variable:%d",*ptr);//We can get x variable.

} 


/*

x:7
x variable adress:0x16dca72cc
x variable adress:0x16dca72cc
ptr adress:0x16dca72c0
x variable:7%   


*/