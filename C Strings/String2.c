//how to use "" in a string.
#include <stdio.h>
int main(){
    //char message[]="String  is \"very\" important";  // we are using "\" to get rid of error in string to use special characters.
    // printf("%s",message);
    //Now we are moving to how to transfer strings to pointers directly without using array.
    char* message="How are you today?";
    int i=0;
    while(*(message+i)!='\0'){
        printf("%c",*(message+i));
        i++;
    }
    return 0;
}