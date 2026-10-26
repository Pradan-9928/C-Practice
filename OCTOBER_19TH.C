#include <stdio.h>
void printhello(int n); 

int main(void){
    int number;
    printf("Input a number");
    scanf("%d",&number);
    printhello(number);
    return 0;

}
void printhello(int n){
    for(int i=1;i<=n;i++){
        printf("Hello World \n");
    }
}