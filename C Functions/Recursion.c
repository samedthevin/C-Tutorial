//Fibonnaci Function
/* #include <stdio.h>
int fibo(int);
int main(){
    int n,i;
printf("Enter the size of fibonnaci:");
scanf("%d",&n);
printf("Fibonacci sequence:");
    for (i = 0; i < n; i++) {
        printf(" %d", fibo(i));
}
return 0;
}
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
} */




//Fibonnaci Function
#include <stdio.h>
int fibo(int);
int main(){
    int n;
printf("Enter the size of fibonnaci:");
scanf("%d",&n);
printf("%d",fibo(n-1));
return 0;
}
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
} 

 //but it says exact number

