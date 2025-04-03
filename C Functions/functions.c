
//example 1

#include <stdio.h>

void x(char name,int age){
    printf(" %c and %d",name,age);
}
int main(){
    x('a',35);
    return 0;
}



//example 2

#include <stdio.h>

void x(char name[],int age){
    printf(" %s and %d",name,age);
}
int main(){
    x("adana",35);
    return 0;
}