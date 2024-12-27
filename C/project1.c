#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int accountnumber;
    char name[50];
    long long int mobile;
    int password;
    float balance;
} acc;

void newaccount()
{
    acc account;
    char filename[20];

    printf("\nWELCOME TO BANK 'Gujarat Bank'\n\n");

    printf("Enter your account number: ");
    scanf("%d", &account.accountnumber);
    printf("Enter your name: ");
    getchar(); // To consume the newline left by the previous scanf
    fgets(account.name, sizeof(account.name), stdin);
    account.name[strcspn(account.name, "\n")] = '\0'; // Remove newline character
    printf("Enter your mobile number: ");
    scanf("%lld", &account.mobile);
    printf("Create your 4-digit password: ");
    scanf("%d", &account.password);
    printf("Enter the initial amount you want to deposit: ");
    scanf("%f", &account.balance);

    sprintf(filename, "%d.dat", account.accountnumber);
    FILE *file = fopen(filename, "wb");
    if (file == NULL)
    {
        printf("Error creating account file.\n");
        return;
    }
    fwrite(&account, sizeof(acc), 1, file);
    fclose(file);

    printf("\nAccount created successfully!\n");
}

void display_details()
{
    char filename[20];
    int accountnumber_checking, password_checking;

    printf("\nEnter your account number: ");
    scanf("%d", &accountnumber_checking);
    printf("Enter your password: ");
    scanf("%d", &password_checking);

    sprintf(filename, "%d.dat", accountnumber_checking);
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        printf("\nAccount not found!\n");
        return;
    }

    acc account;
    fread(&account, sizeof(acc), 1, file);
    fclose(file);

    if (account.password == password_checking)
    {
        printf("\nYour bank details are:\n");
        printf("Account Number: %d\n", account.accountnumber);
        printf("Name: %s\n", account.name);
        printf("Mobile Number: %lld\n", account.mobile);
        printf("Current Balance: %.2f\n", account.balance);
    }
    else
    {
        printf("\nInvalid Password!\n");
    }
}

void edit_details()
{
    char filename[20];
    int accountnumber_checking, password_checking;

    printf("\nEnter your account number: ");
    scanf("%d", &accountnumber_checking);

    sprintf(filename, "%d.dat", accountnumber_checking);
    FILE *file = fopen(filename, "rb+");
    if (file == NULL)
    {
        printf("\nAccount not found!\n");
        return;
    }

    acc account;
    fread(&account, sizeof(acc), 1, file);

    printf("Enter your password: ");
    scanf("%d", &password_checking);

    if (account.password != password_checking)
    {
        printf("\nIncorrect Password!\n");
        fclose(file);
        return;
    }

    printf("\nCurrent Name: %s\n", account.name);
    printf("Enter New Name: ");
    getchar();
    fgets(account.name, sizeof(account.name), stdin);
    account.name[strcspn(account.name, "\n")] = '\0';

    printf("Current Mobile Number: %lld\n", account.mobile);
    printf("Enter New Mobile Number: ");
    scanf("%lld", &account.mobile);

    printf("Current Balance: %.2f\n", account.balance);
    printf("Enter New Balance: ");
    scanf("%f", &account.balance);

    fseek(file, 0, SEEK_SET);
    fwrite(&account, sizeof(acc), 1, file);
    fclose(file);

    printf("\nYour details have been successfully updated!\n");
}

void remove_account()
{
    char filename[20];
    int accountnumber_checking;

    printf("\nEnter the account number to remove: ");
    scanf("%d", &accountnumber_checking);

    sprintf(filename, "%d.dat", accountnumber_checking);
    if (remove(filename) == 0)
    {
        printf("\nAccount removed successfully!\n");
    }
    else
    {
        printf("\nAccount not found!\n");
    }
}

int main()
{

    printf("\nMenu:\n");
    printf("1. Create New Account\n");
    printf("2. Display Account Details\n");
    printf("3. Edit Account Details\n");
    printf("4. Remove Account\n");
    printf("5. Exit\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        newaccount();
        break;
    case 2:
        display_details();
        break;
    case 3:
        edit_details();
        break;
    case 4:
        remove_account();
        break;
    case 5:
        printf("\nThank you for using Gujarat Bank. Goodbye!\n");
        return 0;
    default:
        printf("\nInvalid choice. Please try again.\n");
    }

    return 0;
}
