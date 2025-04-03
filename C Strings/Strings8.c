#include <stdio.h>
void abb(char *);
int main(){
 char message[100];
puts("Enter a message");
gets(message);
abb(message);
return 0;
}
void abb(char * msg){
    int i=0;
    while(*(msg+i)!='\0'){
        if(i==0){
            putchar(*msg);
        }
        else if(*(msg+i)==' '){
            putchar(*(msg+i+1));
        }
        i++;
    }
}