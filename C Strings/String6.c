// How to find count of words in a sentence.
#include <stdio.h>
#include <string.h>
int wordcount(char*);
int main(){
    char message[100];
    puts("Enter a sentence:");
    gets(message);
    if (message[0] == '\0') { // Check if input is empty
        printf("There are no words.\n");
        return 0;
    }
    printf("There are %d words in the entered sentence\n",wordcount(message));
    return 0;
    }
int wordcount(char* ptr){
    int i,count=0;
    while(ptr[i]!='\0'){
        if(ptr[i]==' '){
            count++;
        }
        i++;
    }
    
    return count+1; // we add +1 cuz loop will stop when it sees \0 so it will not count as word the last word.
}    