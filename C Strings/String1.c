//Intro to the String.
#include <stdio.h>
int main(){
    char greetings[]="Hello C!"; // Actually Hello C has 8 characters but it has invisible character such as \0  so it has 9 characters.
    char greeting2[]={'H','e','l','l','o',' ','C','!','\0'};
    greetings[6]='T'; // We are changing C to T.
    char greeting3='B';
    //printf("%s\n",greetings);
    // printf("%s",greeting2);
    //printf("%c",greeting3);  Thats for char. not string just remembering the some stuffs about char types.
    int i=0;
    while(*(greeting2+i)!='\0'){
         printf("%c",*(greeting2+i)); //its same as greetings too  we can use pointers for strings.
         i++;
    }
    return 0;
}