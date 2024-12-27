#include <stdio.h>
#include <string.h>

// void printstring(char arr[]);
int countLen(char arr[]);
// void salting(char password[]);
void slice(char str[], int n, int m);
// int vowels(char str[]);
// void checkchar(char str[], char ch);

int main()
{
    // char name[] = {'N', 'E', 'E', 'V', '\0'};
    // char name = "NEEV";
    // char class[] = "apna collage";

    // char firstname[] = "neev";
    // char lastname[] = "mendpara";
    // printstring(firstname);
    // printstring(lastname);

    // char name[50];
    // scanf("%s", name);
    // printf("your name is %s", name);

    // char fullname[100];
    // scanf("%s", fullname);
    // printf("your name is %s", fullname); //..this is a print a only neev

    // char str[100];
    // fgets(str, 100, stdin);
    // puts(str);

    // char *canchange = "hello world";
    // puts(canchange);
    // canchange = "hello";
    // puts(canchange);

    char name[100];
    fgets(name, 100, stdin);
    printf("length is : %d", countLen(name));

    // char name[] = "neev";
    // printf("length is : %d", strlen(name));

    // char oldstr[] = "oldstr";
    // char newstr[] = "newstr";
    // strcpy(newstr, oldstr);
    // puts(newstr);

    // char firststr[100] = "hello"; // 100 because we append a world after them
    // char secondstr[] = "world";
    // strcat(firststr, secondstr);
    // puts(firststr);

    // char firststr[] = "Apple";
    // char secondstr[] = "Banana";
    // printf("%d\n", strcmp(firststr, secondstr));
    // printf("%d", strcmp(secondstr, firststr));

    // char firststr[] = "HHHA";
    // char secondstr[] = "HHHB";
    // printf("%d\n", strcmp(firststr, secondstr));

    // char str[100];
    // char ch;
    // int i = 0;
    // while (ch != '\n')
    // {
    //     scanf("%c", &ch);
    //     str[i] = ch;
    //     i++;
    // }
    // str[i] = '\0';
    // puts(str);

    // char password[100];
    // scanf("%s", password);
    // salting(password);

    // char str[] = "helloworld";
    // slice(str, 3, 6);

    // char str[] = "neevmendpara";
    // printf("%d", vowels(str));

    // char str[] = "neevmendpara";
    // printf("enter a ch : ");
    // char ch;
    // scanf("%c", &ch);
    // checkchar(str, ch);

    return 0;
}

// void checkchar(char str[], char ch)
// {
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == ch)
//         {
//             printf("%c is present in the string\n", ch);
//             return;
//         }
//     }
//     printf("character not present\n");
// }

// int vowels(char str[])
// {
//     int count = 0;
//     for (int i = 0; i <= str[i] != '\0'; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//         {
//             count++;
//         }
//     }
//     return count;
// }

void slice(char str[], int n, int m)
{
    char newstr[100];
    int j = 0;
    for (int i = n; i <= m; i++)
    {
        newstr[j] = str[i];
        j++;
    }
    newstr[j] = '\0';
    puts(newstr);
}

// void salting(char password[])
// {
//     char salt[] = "123";
//     char newpass[200];
//     strcpy(newpass, password);
//     strcat(newpass, salt);
//     puts(newpass);
// }

int countLen(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// void printstring(char arr[])
// {
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }