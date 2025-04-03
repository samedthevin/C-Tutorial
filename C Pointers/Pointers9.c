#include <stdio.h>
void word(char*,int);
int main () {                                                       
    int size,i;
    printf("Enter the size of your word:");
    scanf("%d",&size);
    char word1[size];
    printf("Enter your word charaters one by one:");
    for(i=0;i<size;i++){
    scanf(" %c",&word1[i]);//We should space before %c cuz scanf shouldn't read "enter" button as a character!
    }
    word(word1,size);
    return 0;
}
void word(char* word1,int size){
    int i,j;
    for(i=0;i<size+1;i++){
        for(j=i;j<size;j++){
            printf("%c",*(word1+j));
        }
        for(j=0;j<i;j++){
          printf("%c",*(word1+j));  
    }
    printf("\n");
}

}
/*  For "SOFTWARE" word, output should be like this:
SOFTWARE
OFTWARES
FTWARESO
TWARESOF
WARESOFT
ARESOFTW
RESOFTWA
ESOFTWAR
SOFTWARE

*/