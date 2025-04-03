//Struct pointers
#include <stdio.h>
#include <string.h>
struct books{
    char *bookname;
    int page;
    int year;
};
void show(struct books*);
int main(){
    struct books x;
    struct books *y;
    y=&x;
    (*y).bookname="Harry Potter";
    (*y).page=432;
    (*y).year=1978;
    show(y);
    

}
void show(struct books* ptr){
    printf("Book name:%s\n",(*ptr).bookname);
    printf("Page:%d\n",(*ptr).page);
    printf("Year:%d\n",(*ptr).year);
}