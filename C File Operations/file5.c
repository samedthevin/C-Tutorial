#include <stdio.h>
//file position indicator settings
int main(){
    FILE* fptr;
    char data[100];
    float n2;
    int number;
    fptr=fopen("C:\\Users\\PC\\Desktop\\data\\info.txt","r");
    if (fptr==NULL){
        printf("File open unsuccesfull\n");
    }
    else{
       /* fscanf(fptr,"%s %d %f",data,&number,&n2); // this is also read function but this function cant read space characters so we need to define each variable after spaces to read words.
        printf("%s %d %.2f",data,number,n2); //We don't need "&" for strings. //this is not about indicator */
       


       printf("Indicator position:%d\n",ftell(fptr)); //ftell tells us the position of indicator in file. For example for beggining of the file, output will be "0"
       fseek(fptr,10,SEEK_SET); //SEEK_SET for  indicator location begging of file, SEEK_CUR is for current indicator location of file, SEEK_END is for end of file indicator location.
       printf("Indicator position:%d\n",ftell(fptr));
       fgets(data,100,fptr);
       printf("%s\n",data);
       fseek(fptr,-20,SEEK_CUR); //fseek lets us move indicator forward or backward. If its positive , it moves forward. Else it moves backwards.
       printf("Indicator position:%d\n",ftell(fptr));
       fgets(data,100,fptr);
       printf("%s",data);
       printf("Indicator position:%d\n",ftell(fptr));
       rewind(fptr); // this function resets the location of indicator // It moves beggining. Output:0
       printf("Indicator position:%d\n",ftell(fptr));
       fgets(data,100,fptr);
       printf("%s",data);



 

}
}