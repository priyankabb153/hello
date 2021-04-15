#include "bank.h"

void deposit(struct customer list[], int number, int account_no, int amt){

   printf("*************DEPOSITE AMOUNT***************\n");
    int i = search(list, number,account_no );
    if (i ==  - 1)
    {
        printf("Record not found\n");
         printf("\n***************************************************\n\n");
    }
    else
    {
        list[i].balance += amt;
         printf("Amount credited sucessfully!!!!!!!!!!!!!!!!\n");

         printf("\n***************************************************\n\n");
    
    }



}
