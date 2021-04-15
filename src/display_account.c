#include "bank.h"

void display_account(struct customer list[], int number){

   printf("*******************All account holders details are as follows**********************\n");
   int i;
   printf("Account No\tName\tAge\tPhone No\tBalance\n");
    for (i = 0; i < number; i++)
    {
        printf("%d\t%s\t%d\t%s\t%lld\t%d\n", list[i].acc_no, list[i].name,list[i].age,list[i].address,list[i].phone_no,list[i].balance);
    }
    printf("\n***************************************************\n\n");
}