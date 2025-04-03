//Arrays with pointers
#include <stdio.h>
int main(){
    int number[7]={1,2,3,4,5,6,7};  //array has same adress with its first element!!
    //Example
    printf("First element's adress:%p\n",&number[0]);
    printf("Array's adress:%p",number);            /* First element's adress:0x16f1932a0  Array's adress:0x16f1932a0  */
    printf("\n\n");                                                    
                                                           
      
    //Finding the other elements adresses and their values:

    printf("First element's adress:%p\n",&number[0]);
    printf("First elemennt's adress:%p\n",number);
    printf("First element's value:%d\n",*number);

    printf("Second element's adress:%p\n",&number[1]);
    printf("Second elemennt's adress:%p\n",number+1);    
    //&number[1] and number+1 gives same adress in addition its same for everyone.
   //Second element's adress:0x16d9fb2a4=Second elemennt's adress:0x16d9fb2a4



    printf("Fifth element's adress:%p\n",&number[4]);
    printf("Fifth elemennt's adress:%p\n",number+4);
    printf("Fifth element's value:%d\n",*number+4);






}