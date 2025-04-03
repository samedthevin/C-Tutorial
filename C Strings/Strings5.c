//How to find the count of characters that given sentence.
#include <stdio.h>
int findLenght(char *);
int main(){
    char message[100];
    printf("Enter a message:");
    gets(message); //Tip: when scanf sees the space between words, it will not read it. But gets does this job.
    printf("Lenght:%d\n",findLenght(message)); 
    return 0;

}
int findLenght(char* message){
    int i=0;
    while(*(message+i)!=0){
        i++;
    }
    return i; //we can use strlen instead of this algortihm.
}