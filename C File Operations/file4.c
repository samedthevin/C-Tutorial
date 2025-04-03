#include <stdio.h>
//Reading in file
int main(){
    FILE* fptr;
    char myletter;
    char data[100];
    fptr=fopen("C:\\Users\\PC\\Desktop\\data\\info.txt","r");
    if (fptr==NULL){
        printf("File open unsuccesfull\n");
    }
    else{
       /* myletter=getc(fptr); // this function reads one character from the file.
        printf("%c",myletter);
        do{
            myletter=getc(fptr); 
            printf("%c",myletter);

        }while(myletter!=EOF);  //EOF means end of the file. It has constant value=-1.  We can use end of file to read all sentences one by one as a character.
                               // EOF has special function ---> feof. We can use while(!feof(fptr));  instead of while(myletter!=EOF);. They have same functionalities.
         printf("\n\n\n");
         fgets(data,10,fptr); // this function for reads in files. First parameter is string array name, second is the size what u want to read, third is address.
         printf("%s",data);     // But this function can only read one row. 
        printf("\n\n");  */

         while(fgets(data,100,fptr)){ //with this loop we can read all sentences in the file.
            printf("%s",data);
         }                  
    }
    fclose(fptr);
    return 0;
}

