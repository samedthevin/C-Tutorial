#include <stdio.h>
/*
Its called as enumerations.
enum Numbers{
    NUM,  Enum is collectiob of constant variables. If we dont assign any constant variable to something. The first element will print out "0".In addition, it will go with +1 each element.
    NUM2,  For example: NUM=0,NUM2=1;NUM3=2
    NUM3
};
*/

/* enum Random{
    SMALL=25,
    MEDIUM=60,  We can assign values what we want. Doesnt matter to make a row.
    LARGE=90

};
*/

enum Day{
    MONDAY=1, //We assigned 1 here and it will add +1 each day.
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};
int main(){
    enum Day myday;
    myday=WEDNESDAY;

    if(myday==6||myday==7){
        printf("It's the weekend");
    }
    else{
        printf("School and work day :/"); //Output is here due to myday.
    }


    
}