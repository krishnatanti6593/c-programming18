#include<stdio.h>
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    int last=num%10;
    while(num>=10){
        num=num/10;
    }
     int first=num;
     printf("%d is last number\n",last);
     printf("%d is first number",first);
     return 0;
}
