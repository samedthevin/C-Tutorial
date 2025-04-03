#include <stdio.h>
#include <string.h>
void reverse(char *);
int main(){
    char message[100];
    puts("Enter a message:");
    gets(message);
    reverse(message);
   

}
void reverse(char * msg){
    int i;
    int size=strlen(msg); //For example Hello is 5 characters but H is 0. index  and last character "o" is 4. index so we must define i=size-1 >> i=5-1
    for(i=size-1;i>=0;i--){ 
        putchar(*(msg+i));

    }

}