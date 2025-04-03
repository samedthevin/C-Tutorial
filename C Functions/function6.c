#include <stdio.h>
#include "myMath.h"//We crated file as myMath.h 
//and we declared the functions inside of that file
int main(){
    int choose=0;
    printf("Choose a number (1-3):");
    scanf("%d",&choose);
    int x,y;
    switch(choose){
        case 1:
        printf("You have chosen max function\n");
        printf("Enter X and Y=");
        scanf("%d %d",&x,&y);
        printf("Max:%d",max(x,y));
        break;
        case 2:
        printf("You have chosen min function\n");
        printf("Enter X and Y=");
        scanf("%d %d",&x,&y);
         printf("Min:%d",min(x,y));        
         break;
        case 3:
        printf("You have chosen absolute value function\n");
        printf("Enter the X=");
        scanf("%d",&x);
        printf("|x|=%d",absolute(x));
        break;
        default:
        printf("Invalid Value. Try again!");
    }
    return 0;
}
int max(int x,int y){
    if(x>y){
        return x;

    }
    else if(x==y){
       return  x;//you can return y also
    }
    else{
        return y;
    }
}
int min(int x, int y){
    if(x<y){
        return x;
    }
    else if(x==y){
        return x;//you can return y also
    }
    else{
        return y;
    }
}
int absolute(int x){
    if(x<0){
        int result;
        result=x*-1;
        return result;

    }
    else{
        return x;
    }

}