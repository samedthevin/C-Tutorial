#include <stdio.h>
// Write and append file episode 2.
int main(){
    FILE* fptr;
    fptr=fopen("C:\\Users\\PC\\Desktop\\data\\info.txt","w");
    char name[50];
    int num=11;
    int i,number[7];
    if (fptr==NULL){
        printf("File open unsuccesfull\n");
    }
    else{
        fputs("I love C\n",fptr); //This function is for strings. fputc was for characters.
        puts("Enter a sentece");
        gets(name);
        fprintf(fptr,"My %s is %d years old.",name,num);//this is for format specifiers like (%d %c etc.) and in this function the adress of pointer must be at the beginning.
        /* printf("Enter 7 numbers"); 
        for(i=0;i<7;i++){
            scanf("%d",&number[i]);
        } 
        fwrite(number,sizeof(int),7,fptr);  // this function writes the array to the file but in binary format so we must use "wb" 

        fread(number,sizeof(int),7,fptr);  // this function read the array in the file but in binary format so we must use "rb"
        for(i=0;i<7;i++){
            printf("%d\n",number[i]);
        } */
        printf("Data is written to file\n");
    }
}