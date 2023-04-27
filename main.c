/* Created by Mostafa Mahmoud Elshiekh on 9/3/2022*/

/*
    *********************************************************

    *********************************************************
*/

#include <stdio.h>
#include "bank_database.h"
#include "bank_database_MohamedBelal.c"

int main()
{
    int START = 0;

    while (START != 6)
    {
        printf("\n=================== new operation ===================\n");
        printf(" \n1- Creat a New Customer <Press 1 To Select This option> \n");
        printf(" \n2- Edit The Data Customer <Press 2 To Select This option> \n");
        printf(" \n3- Delete The Data Customer <Press 3 To Select This option> \n");
        printf(" \n4- Transfer  <Press 4 To Select This option> \n");
        printf(" \n5- Print the data of Customer <Press 5 To Select This option> \n");
        printf(" \n6- to end the program <Press 6 To Select This option> \n");
        scanf("%d", &START);

        if (START == 1)
        {
            Create();
        }
        else if (START == 2)
        {
            Edit();
        }
        else if (START == 3)
        {
            Delete();
        }
        else if (START == 4)
        {
            Transfer();
        }
        else if (START == 5)
        {
            Print();
        }
        else if (START == 6)
        {
            printf("\nThe Program Is Finish \n");
            break;
        }
    }
    return 0;
}
