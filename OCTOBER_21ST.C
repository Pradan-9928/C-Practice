#include <stdio.h>
int main(){
    int start=10000;
    const int pin=9928;
    int attempts=0;
    do{
        int choice;
        printf("1.Check Balance \n 2.Deposit Money \n 3.Withdraw Money");
        printf("Enter the number");
        
        scanf("%d",&choice);    
        if(choice==1 || choice==2 || choice ==3){
            switch (choice)
            {
            case 1:
                printf("Your balance is %d",start);
            case 2:
                int temp=0;
                printf("How much to deposit");
                scanf("%d",temp);
                start+=temp;
                printf("The final amount in the bank account is %d",start);
            case 3:
                int temp=0;
                printf("How much to withdraw");
                scanf("%d",temp);
                start-=temp;
                printf("The final amount in the bank account is %d",start);

            default:
                break;
            }
            }
            


    }while(attempts<3);
}