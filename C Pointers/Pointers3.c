#include <stdio.h>
int main(){
    int x=10;
    int* ptr=&x;   // the ing type is not defining the pointer type .  Its for x type so pointers could not have type.
    printf("x=%d\n",*ptr);
    *ptr=19;    //changed the x's variablity as we used the pointers. // it was 10 before we change it.
    printf("x=%d",x);


printf("\n\n");

    //As you can see here we assigned &y to the  two pointers, then we changed the one of them like "z*=5.42" , someone thinks *k wont change but it will because they include same adresses.


    double y=2.343;
    double* z=&y;
    double* k=&y;
    printf("y=%lf\n",*z);
    printf("y=%lf",*k);
    *z=5.43;
    printf("\n\n\n");
    printf("The new number:\n");             
    printf("y=%lf",*k);


}/* 
x=10
new value=
x=19

y=2.343000
y=2.343000


The new number:
y=5.43000
*/