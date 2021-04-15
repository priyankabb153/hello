#include "bank.h"
void create_account(struct customer list[],int number)
{
    printf("*************CREATE ACCOUNT***************\n");

    for (int i = 0; i < number; i++)
    {

        printf("Enter account details to create account #%d\n",i+1);
        printf("Enter account number:");
        scanf("%d", &list[i].acc_no);
        fflush(stdin);
        printf("Enter name : ");
        gets(list[i].name);
        printf("Enter the age:");
        scanf("%d",&list[i].age);
        fflush(stdin);
        printf("Enter the address:");
        gets(list[i].address);
        printf("Enter the phone number: ");
        scanf("%lld",&list[i].phone_no);
        list[i].balance = 0;
        printf("Account created sucessfully!!!!!!!!!!!!!!!\n\n");
       // count++;
       //printf("%d\t%s\t%d\t%s\t%lld\t%d\n", list[i].acc_no, list[i].name,list[i].age,list[i].address,list[i].phone_no,list[i].balance);
        printf("\n***************************************************\n\n");
    }
}