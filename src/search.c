#include "bank.h"

int search(struct customer list[], int number, int account_no)
{
    int i;

    for (i = 0; i < number; i++)
    {
        if (list[i].acc_no == account_no )
        {
            return i;
        }
    }
    return  - 1;
}