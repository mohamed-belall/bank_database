/* Created by Mostafa Mahmoud Elshiekh on 9/3/2022*/

#include <stdio.h>
#ifndef IEEE_C_PROJECT_BANK_DATABASE_H
#define IEEE_C_PROJECT_BANK_DATABASE_H



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define Client_Num    3
struct customer  //A Struct Which Includes The Data Of Customer
{
    char name[40];
    int id;
    int cash;
    char visa[20]; // <credit or debit>
}Client[Client_Num];

void Create (void); //  This Function To Creat New Customer
void Edit(void); //  This Function To Edit  The Data Of Customer
void Delete(void); //  This Function To Delete The Customer
void Transfer(void); //This Function To Transfer From One Account To Another
void Print(void); //This Function To Print The Data Of Customer


#endif //IEEE_C_PROJECT_BANK_DATABASE_H
