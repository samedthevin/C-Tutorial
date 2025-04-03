//Using structs with functions and arrays.
#include <stdio.h>
#include <string.h>
struct cars{
    char model[60];
    char plate[60];
    int year;
    float rating;
};
void show(struct cars car[],int a);
int main(){
    struct cars car[3];
    show(car,3);



}
void show(struct cars car[],int size){  
    int i;
    for(i=0;i<size;i++){
        printf("Enter the model of car:");
        scanf("%s",car[i].model);
        printf("Enter the plate of car:");
        scanf("%s",car[i].plate);
        printf("Enter the year of car:");
        scanf("%d",&car[i].year);
        printf("Enter the rating of car:");
        scanf("%f",&car[i].rating);

    }

    for(i=0;i<size;i++){
        printf("%d. car\n",i+1);
        printf("Mode:%s\n",car[i].model);
        printf("Plate:%s\n",car[i].plate);
        printf("Year:%d\n",car[i].year);
        printf("Rating:%.2f\n",car[i].rating);
    }
}