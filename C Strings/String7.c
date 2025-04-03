#include <stdio.h>
void Lowertoupper(char *);
void Uppertolower(char *);
int main(){
    char message[100];
    int choice;
    puts("Choose a number:");
    puts("1- Uppercase to lowercase");
    puts("2- Lowercase to uppercase");
    scanf("%d",&choice);
    getchar(); //This function is consuming the new line character. // And also this function gets one character and we can write that character with putchar function like gets/puts
    switch(choice){
        case 1:
        gets(message);
        Uppertolower(message);
        break;
        case 2:
        gets(message);
        Lowertoupper(message);
        break;
        default:
        puts("Invalid Number!");
    }
}
void Lowertoupper(char* ptr){
    for(;*ptr!='\0';ptr++){ // ptr++ is letting us to get new charachter each run in loop. its like i++ but we are adding +1 to adress cuz array elements are in a row.
        if(*ptr>='a' && *ptr<='z'){
            putchar(*ptr-32); //putchar is a function that writes a single character.  //We are substracting 32 from ptr cuz For example "a" ASCII number is 97 and "A" is 65 
            // 97-32 is giving us 65 so we are getting uppercase A
        }
        else{
            putchar(*ptr);
        }
    }
}
void Uppertolower(char* ptr){
    for(;*ptr!='\0';ptr++){
        if(*ptr>='A' && *ptr<='Z'){
            putchar(*ptr+32);// We are adding 32 to ptr cuz "A" is 65 and "a" is 97.  65+32=97 so we are getting lowercase "a"
        }
        else{
            putchar(*ptr);
        }
    }
}
