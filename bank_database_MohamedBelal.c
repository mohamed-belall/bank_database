/*
   **********************************************************
   file   : bank database
   auther : mohamed ibrahem belal
   detail : this project is bank data base that you can do 5 operation
            1- you can create a new account for new customer
            2- you can edit the client data
            3- you can make transfer money from account to another
            4- you can delete account
            5- you can show the data of the customer
   **********************************************************
*/

#include "bank_database.h"

static int index = 0;
/* This Function Definition to Create New Customer */
void Create(void)
{

    while (index < Client_Num)
    {
        printf("please enter the name of customer : %d\n", (index + 1));
        scanf("%s", &Client[index].name);
        printf("please enter the ID of customer : %d\n", (index + 1));
        scanf("%d", &Client[index].id);
        printf("please enter the Cash of customer : %d\n", (index + 1));
        scanf("%d", &Client[index].cash);
        printf("please enter the type <credit OR debit> of card customer : %d\n", (index + 1));
        scanf("%s", &Client[index].visa);
        index++;
        break;
    }
    if (index >= Client_Num)
    {
        printf("your client number if enough");
    }
}

/* This Function Definition to Edit The Data Of Customer */
void Edit(void)
{
    int selection = 0;  /* to select the data which user want to edit */
    int selectedID = 0; /* the id that the user want to edit the data */
    printf("enter the id that you want to edit data : ");
    scanf("%d", &selectedID);

    for (int i = 0; i < Client_Num; i++)
    {
        if (Client[i].id == selectedID)
        {
            printf("1: for edit name. \n");
            printf("2: for edit ID. \n");
            printf("3: for edit cash. \n");
            printf("4: for edit type of visa. \n");
            printf("5: for edit all data. \n");
            scanf("%d", &selection);

            if (selection == 1) /* for edit name. */
            {
                printf("please enter the name of customer : \n");
                scanf("%s", &Client[i].name);
            }

            else if (selection == 2) /* for edit ID. */
            {
                printf("please enter the ID of customer : \n");
                scanf("%d", &Client[i].id);
            }

            else if (selection == 3) /* for edit cash. */
            {
                printf("please enter the cash of customer : \n");
                scanf("%d", &Client[i].cash);
            }

            else if (selection == 4) /* for edit type of visa of customer. */
            {
                printf("please enter the type of visa of customer : \n");
                scanf("%s", &Client[i].visa);
            }
            else if (selection == 5) /* for edit all data. */
            {
                printf("please enter the name of customer : \n");
                scanf("%s", &Client[i].name);
                printf("please enter the ID of customer : \n");
                scanf("%d", &Client[i].id);
                printf("please enter the cash of customer : \n");
                scanf("%d", &Client[i].cash);
                printf("please enter the type of visa of customer : \n");
                scanf("%s", &Client[i].visa);
            }
            break;
        }
    }
}

/* This Function Definition to Delete The Customer */
void Delete(void)
{
    int selectedID = 0; /* the id that the user want to delete the data */

    printf("enter the id that you want to delete data : ");
    scanf("%d", &selectedID);

    for (int i = 0; i < Client_Num; i++)
    {
        if (Client[i].id == selectedID)
        {
            for (int j = i; j < Client_Num; ++j)
            {
                Client[j] = Client[j + 1];
            }
            index--;
            break;
        }
    }
}

/* This Function Definition to Transfer From One Account To Another */
void Transfer(void)
{
    int sourceID, destinationID, transferAmount;
    printf("enter the source ID :");
    scanf("%d", &sourceID);
    printf("enter the destination ID :");
    scanf("%d", &destinationID);
    printf("enter the amount of transfer :");
    scanf("%d", &transferAmount);
    /* this for loop to descount the amount of transfer from the source id */
    for (int i = 0; i < Client_Num; i++)
    {
        if (Client[i].id == sourceID)
        {
            Client[i].cash -= transferAmount;
            break;
        }
    }
    /* this for loop to add the amount of transfer to the destination id */
    for (int i = 0; i < Client_Num; i++)
    {
        if (Client[i].id == destinationID)
        {
            Client[i].cash += transferAmount;
            break;
        }
    }
}

/* This Function Definition to Print The Data Of Customer */
void Print(void)
{
    int selectedID = 0;
    printf("enter the ID of customer : \n");
    scanf("%d", &selectedID);
    for (int i = 0; i < Client_Num; i++)
    {
        if (Client[i].id == selectedID)
        {
            printf("\n=======================================\n");
            printf("the name of the customer is      : %s\n", Client[i].name);
            printf("the ID of the customer is        : %d\n", Client[i].id);
            printf("the cash of the customer is      : %d\n", Client[i].cash);
            printf("the vise type of the customer is : %s\n", Client[i].visa);
            printf("=======================================\n");
        }
    }
}