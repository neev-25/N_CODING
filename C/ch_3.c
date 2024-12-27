#include <stdio.h>
int main()
{
    printf("hello neev\n");
    // int age;
    // printf("enter age : ");
    // scanf("%d", &age);
    // if (age >= 18)
    // {
    //     printf("you are eligible to vote");
    //     printf("you can drive a car at gandhinagar");
    // }
    // else
    // {
    //     printf("you are not eligible to vote");
    // }
    // printf("thank you");

    // int age;
    // printf("enter age : ");
    // scanf("%d", &age);
    // if (age >= 18)
    // {
    //     printf("adult");
    // }
    // else if (age > 13 && age < 18)
    // {
    //     printf("teenager");
    // }
    // else
    // {
    //     printf("child");
    // }

    // int age;
    // printf("enter age : ");
    // scanf("%d", &age);
    // age >= 18 ? printf("adult\n") : printf("not adult\n"); // ternaary opratora
    // // short of if else

    // int day;
    // printf("enter day(1-7) : ");
    // scanf("%d", &day);
    // switch (day)
    // {
    // case 1:
    //     printf("monday");
    //     break;
    // case 2:
    //     printf("tuesday");
    //     break;
    // case 3:
    //     printf("wednesday");
    //     break;
    // case 4:
    //     printf("thursday");
    //     break;
    // case 5:
    //     printf("friday");
    //     break;
    // case 6:
    //     printf("saturday");
    //     break;
    // case 7:
    //     printf("sunday");
    //     break;
    // default:
    //     printf("invalid day");
    //     break;
    // }

    // char day;
    // printf("enter day(1-7) : ");
    // scanf("%s", &day); //%s use string
    // switch (day)
    // {
    // case 'm':
    //     printf("monday");
    //     break;
    // case 't':
    //     printf("tuesday");
    //     break;
    // case 'w':
    //     printf("wednesday");
    //     break;
    // case 'T':
    //     printf("thursday");
    //     break;
    // case 'f':
    //     printf("friday");
    //     break;
    // case 's':
    //     printf("saturday");
    //     break;
    // case 'S':
    //     printf("sunday");
    //     break;
    // default:
    //     printf("invalid day");
    //     break;
    // }

    // int number;
    // printf("enter number : ");
    // scanf("%d", &number);
    // if (number >= 0)
    // {
    //     printf("postivie\n");
    //     if (number % 2 == 0)
    //     {
    //         printf("even\n");
    //     }
    //     else
    //     {
    //         printf("odd\n");
    //     }
    // }
    // else
    // {
    //     printf("negative\n");
    //

    // int marks;
    // printf("enter your marks : ");
    // scanf("%d", &marks);
    //  if (marks >= 0 & marks <= 30)
    //  {
    //     printf("fail\n");
    // }
    // else if (marks > 30 && marks <= 100)
    // {
    //     printf("pass\n");
    // }
    // else
    // {
    //     printf("invalid marks\n");
    // }
    // marks <= 30 ? printf("fail") : printf("pass");

    // int marks;
    // printf("enter your marks : ");
    // scanf("%d", &marks);
    // if (marks < 30)
    // {
    //     printf("C\n");
    // }
    // else if (marks >= 30 && marks < 70)
    // {
    //     printf("B\n");
    // }
    // else if (marks >= 70 && marks < 90)
    // {
    //     printf("A\n");
    // }
    // else
    // {
    //     printf("A+\n");
    // }

    // int x = 2;
    // if (x = 1)
    // {
    //     printf("x is 1\n");
    // }
    // else
    // {
    //     printf("x is not 1\n");
    // }
    // in this code x=2 is updated by x=1 and
    // so is give x equal to 1

    char ch;
    printf("enter character : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("lower case\n");
    }
    else if (ch >= 'A' && ch <= 'z')
    {
        printf("upper case\n");
    }
    else
    {
        printf("not english letter");
    }

    return 0;
}