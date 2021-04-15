/**
 * @file bank.h
 * @author Priyanka
 * @brief Bank management program implementation
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef __BANK_H__
#define __BANK_H__

#include <stdio.h>
#include<string.h>
#include <stdlib.h>

/*
typedef enum error_t{
    //ERROR_NULL_PTR = -2,
    SUCCESS = 0,
    FALIURE=-1
    //START_EXISTS=1,
    //NO_HEAD_EXIST=2,
    //DATE_INCORRECT=3,
    //INVALID_NAME=4,
    //ID_EXISTS=5
}error_t;
*/


#define MAX_NAME 50
#define MAX_ADDRESS 50

/**
 * @brief declaring a struct customer with account number,name,age, adress phone number and balance
 * 
 */
struct customer {
  int acc_no;
  char name[MAX_NAME];
  int age;
  char address[MAX_ADDRESS];
  long long int phone_no;
  int balance;

};

/**
 * @brief function to Create a account
 * 
 * @param list it is the list to hold customer details
 * @param number the number of accounts to be created
 */
void create_account(struct customer list[],int number);


/**
 * @brief function to display all the details of the account holders
 * 
 * @param list it is the list to hold customer details
 * @param number the number of accounts present
 */
void display_account(struct customer list[], int number);

/**
 * @brief function to search an account of the customer based on the account number which returns the index upon finding the account or else returns -1
 * 
 * @param list it is the list to hold customer details
 * @param number the number of accounts created
 * @param account_no the account number to search the account in the list of customers
 * @return int if the account is found then the index of account is returned or else -1 is returned
 */
int search(struct customer list[], int number, int account_no);

/**
 * @brief function to deposit specified amount into an account
 * 
 * @param list  it is the list to hold customer details
 * @param number the number of accounts created
 * @param account_no the account number to search the account in the list of customers to deposit amount
 * @param amt the amount which has to be deposited
 */
void deposit(struct customer list[], int number, int account_no, int amt);

/**
 * @brief function to withdraw amount from specified account
 * 
 * @param list  it is the list to hold customer details
 * @param number the number of accounts created
 * @param account_no the account number to search the account in the list of customers to withdraw amount
 * @param amt the amount which has to be withdrawed
 */

void withdraw(struct customer list[], int number, int account_no, int amt);

//error_t search_id(struct customer list[], int number, int account_no);

//void find_id(struct customer list[], int number, int account_no);

#endif