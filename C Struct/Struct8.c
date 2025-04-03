#include <stdio.h>
//Typdef
typedef struct{
    char* name;
    int age;
    float weight;
}Student;
int main(){
    Student s1={"Emmy",28,65.4}; //now Student is struct. so its now struct s1, struct s2.
    Student s2={"Micheal",25,78.5};
    struct Student s3;

    printf("Your name:%s\n",s1.name);
    printf("Your age:%d\n",s1.age);
    printf("Your weight:%f\n\n",s1.weight);

    printf("Your name:%s\n",s2.name);
    printf("Your age:%d\n",s2.age);
    printf("Your weight:%f\n\n",s2.weight);


}


/*
typedef int i;
i x,y; //now i is int. so x and y have integer type.
x=5;
y=10


typedef char name[30]; //now name[30] is char[30](it has 30 characters)

name n1="Emmy";







*/