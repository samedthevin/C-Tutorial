
//Version 1
/* #include <stdio.h>
int mynumber(int x,int y){
    int sum=0;
    sum=x+y;
    return sum;
}
int main(){
    printf("%d",mynumber(2,5));
    return 0; */                                   //Version1=Version2 but in Version2 we are equaling the function to the variable
                                                 //for example int result=mynumber(2,5);}


//Version 2 

/* #include <stdio.h>
int mynumber(int x,int y){
    int sum=0;
    sum=x+y;
    return sum;
}
int main(){
    int result=mynumber(2,5);
    printf("%d",result);
    return 0;
} */



//Array Example in Function
 /* #include <stdio.h>
void number(int arr[6]){
    int i=0;
    for(i=0;i<6;i++){
        printf("%d\n",arr[i]);
    }

}

int main(){
    int arr[6]={5,6,7,8,9,10};
    number(arr);
    return 0;
} */



//Addition and Subs in function
 /* #include <stdio.h>
int add(int x, int y){
    
    return x+y;  //you can assign the sum=x+y; and return sum; the result will not change!!
}
int sub(int x, int y){
    return x-y;
}
int main(){
    int result=sub(add(10,8),5);
    printf("%d",result);
    return 0;
} */




//Multip In Functions
  /* #include <stdio.h>
int multi(int x,int y){
    int result;
    result=x*y;
    return result;
}
int main(){
    printf("%d",multi(9,5));
    return 0;
}   */