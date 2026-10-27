// ATM menu
#include<stdio.h>

void main()
{
int choice;
float balance,amount;
printf("Enter the balance amount :");
scanf("%f",&balance);
printf("\n the atm menu : \n 1.balance enquiry \n 2.Cash withdrawal \n 3.cash deposit");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch (choice) {
      case 1: 
             printf("\n Current balance is %f",balance);
             break;
      case 2:
             printf("\n Enter the withdrawal amount :");
             scanf("%f",&amount);
             if (amount<=balance)
              { balance=balance-amount;
              printf("\n transaction sucessful");
              printf("\n the remaining balance is %f",balance); }
              else { printf("Insufficient balance"); }
              break;
      case 3:   
             printf("\n Enter the deposit amount:");
             scanf("%f",&amount);
             balance=balance+amount;
             printf("\n Deposit sucessful");
             printf("\n the remaining balance is %f",balance);
             break;                   
   default :
         printf("invalid option");
         break; }
}         
      
      
     
    