#include <stdio.h>
//Writing in file and append.
int main(){
    FILE* fptr;
    fptr=fopen("C:\\Users\\PC\\Desktop\\data\\info.txt","a+");
    char name='J';
    if (fptr==NULL){
        printf("File open unsuccesfull\n");
    }
    else{
        fputc('\n',fptr);
        fputc('A',fptr);
        putc('\n',fptr);  // fputc==putc
        fputc('N',fptr);
        fputc('\n',fptr);
        fputc(name,fptr);//using variable no need for "%c" or other types.
        fputc('\n',fptr);
        printf("Data is written to file\n");
    }
    fputc('K',fptr);
    fputc('\n',fptr);
    fputc('C',fptr);
    fputc('\n',fptr);
    for(name='a';name<='z';name++){
        putc(name,fptr);
    }
    fclose(fptr);
    return 0;
}

