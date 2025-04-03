#include <stdio.h>
int main(){
    FILE *fptr; //pointer name doesnt matter u can give what u want.
    fptr=fopen("C:\\Users\\PC\\Desktop\\data\\data.txt","w"); //First parameters is path for file and second one is functionallity. If second is "w"--> write  , "r"--> read, "a"--> append 
    //In path we used "\"  to get rid of the error of usage \.   // r+ and w+ are for read and write. They are doing these functions at same time.  a+ is for read and append.
    fclose(fptr);

    //If u want to create the file first time "w" is good for it. But if u want to add some info to current file use "a".
}