// Gets and Puts String Functions
#include <stdio.h>
int main(){
    //puts takes adress so it must be array or pointer. 
    char* message="Really!";
    char message2[]="No!";
puts(message); // We are sending adresses here.   Puts function converts \0 (For example Really!\0 to Really!\n) to \n so it will return as //--Really!
puts(message2);                                                                                                                            //--No!


//gets

char sent[5];
printf("Enter a sentence:"); 
gets(sent); // gets cant control the size of array so it allows all sizes.
printf("Your sentence:");
puts(sent); 

for(int i=0;i<5;i++){
    printf("%c",sent[i]); // as you can see in here gets cant control it so it wont give us real message in loops.                     
    // Even if i enter about 100 charactes, the loop will not give me the real sentence. It will give only first 5 characters of sentence.
}
}