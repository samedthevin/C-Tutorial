#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1,n2,i,*ptr;

    printf("Enter a size:");
    scanf("%d",&n1);

    ptr=(int*)malloc(n1*sizeof(int)); //ptr=(Typecasting *)malloc(n*(sizeof(ptr's type))
    for(i=0;i<n1;i++){
        printf("%p\n",ptr+i);
    }
    printf("\n\n");
    /*
    #PART 1#
    if n1=5 malloc allocates a memory.
    the first 5 element's adresses:
    1-0x145f04080
    2-0x145f04084
    3-0x145f04088
    4-0x145f0408c
    5-0x145f04090
     

    #PART 2#

    if n1=4 malloc allocates a memory.
    the first 4 element's adress:
    1-0x140704080
    2-0x140704084
    3-0x140704088
    4-0x14070408c
    */

    printf("Enter a new size:");
    scanf("%d",&n2);

    ptr=(int*)realloc(ptr,n2*sizeof(int)); // ptr= (type casting*)realloc(ptr,n*sizeof(ptr's type))

    for(i=0;i<n2;i++){
        printf("%p \n",ptr+i);
    }
    /*
    
    #PART 1#
    if n2=10, realloc alloctes the allocation again.
    the first 5 element's adresses are same as malloc.
    Realloc used 5 element's adresses from malloc and added new 5 adresses. So totally we have 10 elements.
   
    1-0x145f04080 
    2-0x145f04084 
    3-0x145f04088 -------->malloc's adresses.
    4-0x145f0408c 
    5-0x145f04090 
    0x145f04094 
    0x145f04098 
    0x145f0409c -------> realloc's added new 5 adresses.
    0x145f040a0 
    0x145f040a4


    #PART 2#
    if n2=2 realloc allocates again. But this time it cuts  the other's adresses from malloc. Because malloc's n1 was 4 but now realloc's n2 is 2.
    
    1-0x140704080 ------> Malloc's adresses.
    2-0x140704084 ------>
    3-           
    4-
    */
    printf("\n\n\n");

    printf("Malloc:\n");
    ptr=(int*)malloc(n1*sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation unsuccesfull\n"); //---->We didn't use in our first example but we must use it with realloc,malloc and calloc.   
        return 1;
    }


    for(i=0;i<n1;i++){ // ------> it generates garbage values
        printf("%d\n",*(ptr+i));
    }
     
     
    
    printf("\n\nCalloc:\n");
    ptr=(int*)calloc(n1,sizeof(int)); //calloc ---> ptr=(Type casting *)calloc(n,sizeof(ptr's type))
     
    if (ptr == NULL) {
        printf("Memory allocation unsuccesfull\n");
        return 1;
    }
    
    for(i=0;i<n1;i++){
        printf("%d\n",*(ptr+i)); // ------> it generates 0.
    }
    

    free(ptr); //free deallocates memory allocated with malloc, calloc, or realloc, returning it to the system to prevent memory leaks.

    return 0;


/*
Summary:

1-Malloc: Allocates a block of memory but does not initialize it.

int *arr = (int *)malloc(5 * sizeof(int));

2-Calloc: Allocates memory for an array and initializes it to zero.

int *arr = (int *)calloc(5, sizeof(int));

3-Realloc: Resizes an already allocated memory block.

arr = (int *)realloc(arr, 10 * sizeof(int));

4-Free: Frees the allocated memory to avoid memory leaks.

free(arr);

Always remember to free dynamically allocated memory when it's no longer needed.
*/
}
