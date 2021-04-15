#include "bank.h"
void withdraw(struct customer list[], int number, int account_no, int amt)
{
    int i = search(list, number, account_no);
    if (i ==  - 1)
    {
        printf("Record not found\n");
    }
    else if (list[i].balance < amt)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        list[i].balance -= amt;
         printf("Amount debited sucessfully!!!!!!!!!!!!!!!!\n");
         printf("\ncurrent balance after withdraw is %d\n",list[i].balance);

         printf("\n***************************************************\n\n");
    }
}