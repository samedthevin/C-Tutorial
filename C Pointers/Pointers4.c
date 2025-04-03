#include <stdio.h>
int main(){
    char name='F';
    int x=7;
    double y=5.64;

    char* ptr=&name;
    int* xtr=&x;
    double* ytr=&y;
    printf("First Adresses\n\n");
    printf("name's adress:%p and value=%c\n",ptr,*ptr);
    printf("x's adress:%p and value=%d\n",xtr,*xtr);
    printf("y's adress:%p and value=:%lf\n",ytr,*ytr);
    printf("Pointer adress:%p\n\n\n",&ptr);

    ptr++;//1 byte
    xtr+=3;// integer is 4 byte and 4*3=12 byte moves upward
    ytr-=4; // double is 8 byte and 8*4=32 byte moves downward

    printf("New adresses\n\n");                                          
    printf("name's adress:%p and value=%c\n",ptr,*ptr);
    printf("x's adress:%p and value=%d\n",xtr,*xtr);
    printf("y's adress:%p and value=:%lf\n",ytr,*ytr);
    printf("Pointer adress:%p",&ptr);


}




/*
First Adresses

name's adress:0x16b61f2cf and value=F
x's adress:0x16b61f2c8 and value=7
y's adress:0x16b61f2c0 and value=:5.640000
Pointer adress:0x16cfcf2b8
                                                //We changed the pointer adresses that holds example x adresses but &x is constant  so in x+=4 &x wont change but xtr will change YANİ PTRNİN İÇİNDEKİ XİN ADRESİNİ 4 BİRİM İLERİ ARTAR. &X ADRESİNİN KENDİSİ DEĞİŞMEZ 
                                                //We dont know the adress what it includes so it will generate random variables that we dont know 
New adresses

name's adress:0x16b61f2d0 and value=
x's adress:0x16b61f2d4 and value=1
y's adress:0x16b61f2a0 and value=:0.000000
Pointer adress:0x16cfcf2b8
















*/