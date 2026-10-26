#include <stdio.h>
int main(){
    int cont;
    int choice;

    do{
        printf("1.ADDITION \n 2.SUBRACTION \n 3.MULTIPLICATION \n 4.DIVISION \n 5.EXIT  \n");
        scanf("%d",&choice);
        float a,b;
        switch(choice){
            case 1:
                
                printf("Enter the Value of A ");
                scanf("%f",&a);
                printf("Enter the Value of B ");
                scanf("%f",&b);
                printf("A + B = %.2f \n",a+b);
                break;
            case 2:
                
                printf("Enter the Value of A ");
                scanf("%f",&a);
                printf("Enter the Value of B ");
                scanf("%f",&b);
                printf("A - B = %.2f \n",a-b);
                break;
            case 3:
                
                printf("Enter the Value of A ");
                scanf("%f",&a);
                printf("Enter the Value of B ");
                scanf("%f",&b);
                printf("A * B = %.2f \n",a*b);
                break;
            case 4:
                
                printf("Enter the Value of A ");
                scanf("%f",&a);
                printf("Enter the Value of B ");
                scanf("%f",&b);
                printf("A / B = %.2f \n",a/b);
                break;

            default:
                break;
            
        }
    }while(choice!=5);
}