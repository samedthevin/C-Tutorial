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
    struct students x1;
    struct students x2={'D',"Ahmet","Bayrak",987653,33.44,"Halit"};
    x1=x2;//This ia copying struct2 to struct1
    x2.no=654786; //We are changing the datas. //previous row x1 and x2 will have same datas but in here  x2  are changing datas in(no,score,parentname)
    x2.score=42.66;
    strcpy(x2.parentname,"Polat");

    

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