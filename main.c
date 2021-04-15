//#include <stdio.h>
//#include<string.h>
//#include <stdlib.h>
/*
struct customer {
  int acc_no;
  char name[20];
  int age;
  char address[50];
  long long int phone_no;
  int balance;

};*/
//static int count=0;
//static int number=0;


//#include "unity_internals.h"
//#include "unity.h"
#include "bank.h"


int main()
{
        char pass[10],pwd[10];
        int choice;
        struct customer data[20];
        int number, account_no, amount, index;
   
        printf("********************* Bank management system ***********************\n");
        printf("\n\n");
        printf("********************* Welcome to the bank ***********************\n");
  
 

        printf("\nNumber of customer records you want to enter? : ");
        scanf("%d", &number);
        create_account(data, number);
       // count=number;
        // system("cls");
        do{

        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("1.VIEW ALL ACCOUNTS\n2.SEARCH\n3.Deposit\n4.WITHDRAW\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        scanf("%d",&choice);
        switch(choice){
            /*case 1:count++;
                  create_new_account(data,count);
                  break;*/
           case 1:
                display_account(data, number);
                break;
            case 2:
                printf("Enter account number to search : ");
                scanf("%d", &account_no);
                index = search(data, number, account_no);
                if (index ==  - 1)
                {
                    printf("Record not found : \n");
                }
                else
                {
                    printf("A/c Number: %d\nName: %s\nAge: %d\nAddress: %s\nPhone number: %lld\nBalance: %d\n",
                        data[index].acc_no, data[index].name,data[index].age,data[index].address,data[index].phone_no,
                        data[index].balance);
                }
                break;
            case 3:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to deposit : ");
                scanf("%d", &amount);
                deposit(data, number, account_no, amount);
                break;
            case 4:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to withdraw : ");
                scanf("%d", &amount);
                withdraw(data, number, account_no, amount);
               
           }        

        }while (choice != 0);

        
    
   return 0;
}


