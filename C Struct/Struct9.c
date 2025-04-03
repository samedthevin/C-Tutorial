#include <stdio.h>
//Union vs Struct
union unionS{
    char name[40];
    int age;
    float weight;

}uStudent;

typedef struct{
    char name[40];
    int age;
    float weight;
}Student;
int main(){
    printf("Size of union:%lu\n",sizeof(uStudent));// The output is 40 because union sets memomry capacity to the highest variable's size. In here char is 1 but we have 40 charachters so its 40
    //age is 4 due to integer type and float is 4 also. 
    printf("Size of structure:%lu\n",sizeof(Student));//The output is 48 because it adds all sizes of elements. char name[40] is 40 byte+ int age 4 byte +float weight 4 byte. Result:48




   printf("\n\n");
   printf("Enter a name:");
   scanf("%s",uStudent.name);
   printf("Enter age:");
   scanf("%d",&uStudent.age);
   printf("Enter a weight:");
   scanf("%f",&uStudent.weight);
  //We can only take one data from unions. Others will return garbage value. The last input will shown up on the screen. Other inputs are garbage value.
   printf("Your name:%s\n",uStudent.name);
   printf("Your age:%d\n",uStudent.age);
   printf("Your weight:%.2f",uStudent.weight);//In here ustudent.name and ustudent.age will show up garbage values but ustudent.weight will show the exact numbers.


}