//  String Functions
#include <stdio.h>
#include <string.h> // String Function library
int main(){
    char name[]="Samed";
    // printf("Lenght is %d",strlen(name)); //This function returns the string's length. It return 5 for my name // sizeof is for memory size.  

    char str1[]="Hello ";
    char str2[]="C Language!";
    strcat(str1,str2); // This function merges two strings and transfers the second str2 to str1. So they are mergeing in str1.
    printf("%s",str1);  // Output is Hello C Language!
    printf("\n\n\n");

    char str3[30]="Watchout man!";
    char str4[30]; // we must put the size of array due to rules of c otherwise it will return us as error.
    strcpy(str4,str3);//This function copies the string and transfers the other string. But we must first put the string  who wants to be copied by other string and second one must be copied string
    printf("%s",str3); 
  
     
   printf("\n\n\n");



 char str5[]="Hello World!";
 char str6[]="Hello World!";
 char str7[]="Hello Man!";
 //strcmp function compares the string similarity. If they are similar, it will return 0.
if(strcmp(str5,str6)==0) //In here it will return as same strings becuase they are really same.
printf("They are same strings.\n");
printf("%d",strcmp(str5,str6)); // It will return 0 cuz they are same.


printf("\n\n");


if(strcmp(str6,str7)==1){     //In here it will return as not same cuz they are not same strings.
printf("They are not same strings.\n");
printf("%d",strcmp(str6,str7));} // It will return 1 cuz they are not same.
else                              
printf("They are  same strings.");

}
