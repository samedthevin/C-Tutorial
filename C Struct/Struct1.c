
#include <stdio.h>
#include <string.h>
struct students{
    char grade;
    char* name;
    char* lastname;
    int no;
    float score;
    char parentname[40];

};
int main(){
    struct students x1;// x1 is a variable and strcut students is a type like "float,char,int" but struct can contain diff types. So we can define a type with struct.
    struct students x2={'D',"Ahmet","Bayrak",987653,33.44,"Halit"};//This a alternative way instead of x1.blalblal //but it must be in same row in struct types.
    x1.grade='A';
    x1.name="Samed";
    x1.lastname="Tevin";
    x1.no=605876;
    x1.score=98.79;
    strcpy(x1.parentname,"Mehmet");

    printf("X1. STUDENT \n\n");
    printf("Grade:%c\n",x1.grade);
    printf("Name:%s\n",x1.name);
    printf("Lastname:%s\n",x1.lastname);
    printf("No:%d\n",x1.no);
    printf("Score:%2f\n",x1.score);
    printf("Parent Name:%s\n",x1.parentname);

    printf("\n\n X2. STUDENT\n\n");
    
    printf("Grade:%c\n",x2.grade);
    printf("Name:%s\n",x2.name);
    printf("Lastname:%s\n",x2.lastname);
    printf("No:%d\n",x2.no);
    printf("Score:%2f\n",x2.score);
    printf("Parent Name:%s\n",x2.parentname);



    

    
}