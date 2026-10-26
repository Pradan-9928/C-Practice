#include <stdio.h>
#include <math.h>
int main(){
    int num,rev,digit=0,temp,sum = 0;
    printf("Enter the number you want to check");
    scanf("%d",&num);
    temp=num;
    rev=num;
    while(num!=0){
        num=num/10;
        digit++;
    }
    while(temp!=0){
        int a;
        a=temp%10;
        temp/=10;
        sum+=pow(a,digit);        
    }
    if(sum==rev){
        printf("THis is an Armstrong number");
    }
    return 0;
}