#include <stdio.h>
#include <string.h>
#include <ctype.h>
void count(char *);
int main(){
    char message[100];
    puts("Enter a message");
    gets(message);
    count(message);
}
void count(char* msg){
    int size=strlen(msg);
    int i,letters[26];
    char activeletter;
    for(i=0;i<26;i++){
         letters[i]=0; //We will count letters so we are initializing  0  all letters to get rid of random numbers because right now each letter didnt repeat.
    }
    for(i=0;i<size;i++){
        activeletter=tolower(*(msg+i));//We are lowering all characters in sentence due to ASCII numbers because 'A' and 'a' have different ASCII numbers. We could do toupper instead of tolower but we must change something in algorithm. Like activeletter-65 cuz 'A' is 65 in ASCII numbers.
       letters[activeletter-97]++;//We are assigning the letters new index. I mean 'a' is 97 in ASCII numbers so 97-97 is '0' so letters[0]=a rn. if activeletter was c, it would be like this: 99-97=3 so letters[3]=c right now.
       //with letters[activeletter-97]++ , we are counting the letters how many times they repeated in a sentence.
    }



    printf("Letter\tRepeat\n");
    printf("------\t------\n");
    for(i=0;i<26;i++){
        if(letters[i]!=0){
            printf("Letter:%c\tRepeat:%d\n",i+97,letters[i]);//In here, i+97 gives us all letters in alphabet. i=0 and i+97 will give us 'a' firstly cuz of ASCII numbers. With letters[i], we are showing to the screen of each letter how many times they repeated.
        }
    }
}