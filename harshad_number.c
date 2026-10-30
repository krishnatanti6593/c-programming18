#include<stdio.h>
int main(){
    int num1,rev,sum=0;
    printf("enter the number");
    scanf("%d",&num1);
    int temp=num1;
    while(num1>0){
        rev=num1%10;
        sum+=rev;
        num1=num1/10;
    }
    if(temp%sum==0){
        printf("HARSHAD NUMBER");
    }
    else{
        printf("NOT HARSHAD NUMBER");
    }
    return 0;

}