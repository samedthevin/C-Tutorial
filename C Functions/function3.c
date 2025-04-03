//Declaration in Functions
#include <stdio.h>
void message(char name[],int);//DECLARATION
int sum(int,int);//DECLARATION
int main(){
    message("eight",8);
    printf("%d\n",sum(5,8));
    return 0;
}
void message(char name[],int x){

    printf("%s is %d\n",name,x);
}
int sum(int x,int y){
    return x+y;

}
