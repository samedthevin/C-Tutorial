#include <stdio.h>
// Clonning the file.
int main(){
FILE *fptr,*fptrcopy;
fptr=fopen("C:\\Users\\PC\\Desktop\\data\\info.txt","r");
fptrcopy=fopen("C:\\Users\\PC\\Desktop\\data\\datacopy.txt","w");
if(fptr==NULL){
    printf("data.txt opened unsuccesfully.");
}
else{
    if(fptrcopy==NULL){
        printf("datacopy.txt opened unsuccesfull.");

    }
    else{
        while (!feof(fptr)){ //In here we are copying fptr to the fptrcopy.
            putc(getc(fptr),fptrcopy);//we could use any other function instead of putc. getc is for reading from fptr. second parameter is copying fptr to the fptrcopy.
        }
        printf("The file has been copied\n");
    }
}
fclose(fptr);
fclose(fptrcopy);
return 0;
}