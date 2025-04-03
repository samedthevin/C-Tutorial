//Nested Structures
#include <stdio.h>
struct info{
        char *name;
        int age;
        int note;
    };
struct interview{
        char* interviewer;
        char* interviewdate;
        struct info candidate; //candidate is variable.
        int interviewnote;
    };
int main(){
    struct interview x;
    x.interviewer="Mike Takna";
    x.interviewdate="19/09/1989";
    x.interviewnote=99;


    x.candidate.name="Emma Poly";//as you can see in here, we are using nested structures.
    x.candidate.age=27;
    x.candidate.note=89;

    
    printf("Interview Informations\n");
    printf("Interviewer:%s\n",x.interviewer);
    printf("Interview date:%s\n",x.interviewdate);
    printf("Interview note:%d\n",x.interviewnote);

    printf("\n");

    printf("Candidate Informations\n");
    printf("Name:%s\n",x.candidate.name);
    printf("Age:%d\n",x.candidate.age);
    printf("Note:%d\n",x.candidate.note);


}
