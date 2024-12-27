#include <stdio.h>
#include <string.h>

// struct student
// {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// typedef struct computerengineerstudent
// {
//     int roll;
//     float cgpa;
//     char name[100];
// } coe;

// void printInfo(struct student s1);

// struct address
// {
//     int houseNo;
//     int block;
//     char city[100];
//     char state[100];
// };
// void printAdd(struct address add);

// struct vector
// {
//     int x;
//     int y;
// };
// void calcSum(struct vector v1, struct vector v2, struct vector sum);

// struct complex
// {
//     int real;
//     int imag;
// };

typedef struct BankAccount
{
    int accountNo;
    char name[100];
} acc;

int main()
{
    // struct student s1;
    // s1.roll = 107;
    // s1.cgpa = 9.5;
    // strcpy(s1.name, "neev");
    // printf("student name = %s\n", s1.name);
    // printf("student roll no is : %d\n ", s1.roll);
    // printf("student cgpa : %f\n", s1.cgpa);
    // struct student s2;
    // s2.roll = 81;
    // s2.cgpa = 9.2;
    // strcpy(s2.name, "manthan");
    // printf("student name = %s\n", s2.name);
    // printf("student roll no is : %d\n ", s2.roll);
    // printf("student cgpa : %f\n", s2.cgpa);
    // struct student s3;
    // s3.roll = 32;
    // s3.cgpa = 9.4;
    // strcpy(s3.name, "jatan");
    // printf("student name = %s\n", s3.name);
    // printf("student roll no is : %d\n ", s3.roll);
    // printf("student cgpa : %f\n", s3.cgpa);

    // struct student ece[100];
    // ece[0].roll = 107;
    // ece[0].cgpa = 9.5;
    // strcpy(ece[0].name, "neev");
    // ece[1].roll = 81;
    // ece[1].cgpa = 9.2;
    // strcpy(ece[1].name, "manthan");
    // printf("name : %s\n", ece[0].name);
    // printf("roll no : %d\n", ece[0].roll);
    // printf("cgpa = %f\n", ece[0].cgpa);
    // printf("name : %s\n", ece[1].name);
    // printf("roll no : %d\n", ece[1].roll);
    // printf("cgpa = %f\n", ece[1].cgpa);

    // struct student s1 = {107, 9.5, "neev mendpara"};
    // printf("student name = %s\n", s1.name);
    // printf("student roll no is : %d\n ", s1.roll);
    // printf("student cgpa : %f\n", s1.cgpa);

    // struct student *ptr = &s1;
    // printf("student roll =%d\n", (*ptr).roll);
    // printf("student cgpa =%f\n", (*ptr).cgpa);
    // printf("student name = %s\n", (*ptr).name);

    // printf("student roll =%d\n", ptr->roll);
    // printf("student cgpa =%f\n", ptr->cgpa);
    // printf("student name = %s\n", ptr->name);

    // struct student s1 = {107, 9.5, "neev mendpara"};
    // printInfo(s1);

    // coe s1;
    // s1.roll = 107;
    // s1.cgpa = 9.5;
    // strcpy(s1.name, "neev mendpara");
    // printf("student name = %s\n", s1.name);
    // printf("student roll no is : %d\n ", s1.roll);
    // printf("student cgpa : %f\n", s1.cgpa);

    // struct address adds[5];
    // printf("enter infp for person 1 : ");
    // scanf("%d", &adds[0].houseNo);
    // scanf("%d", &adds[0].block);
    // scanf("%s", adds[0].city);
    // scanf("%s", adds[0].state);
    // printf("enter infp for person 2 : ");
    // scanf("%d", &adds[1].houseNo);
    // scanf("%d", &adds[1].block);
    // scanf("%s", adds[1].city);
    // scanf("%s", adds[1].state);
    // printf("enter infp for person 3 : ");
    // scanf("%d", &adds[2].houseNo);
    // scanf("%d", &adds[2].block);
    // scanf("%s", adds[2].city);
    // scanf("%s", adds[2].state);
    // printf("enter infp for person 4 : ");
    // scanf("%d", &adds[3].houseNo);
    // scanf("%d", &adds[3].block);
    // scanf("%s", adds[3].city);
    // scanf("%s", adds[3].state);
    // printAdd(adds[0]);
    // printAdd(adds[1]);
    // printAdd(adds[2]);
    // printAdd(adds[3]);

    // struct vector v1 = {5, 10};
    // struct vector v2 = {3, 7};
    // struct vector sum = {0};
    // calcSum(v1, v2, sum);

    // struct complex number1 = {7, 8};
    // struct complex number2 = {3, 4};
    // struct complex *ptr = &number1;
    // printf("real part = %d\n", ptr->real);
    // printf("imag part = %d\n", ptr->imag);

    acc acc1 = {123, "neev"};
    acc acc2 = {124, "manthan"};
    acc acc3 = {125, "jatan"};
    printf("acc no= %d", acc1.accountNo);
    printf("name= %s", acc1.name);

    return 0;
}

// void calcSum(struct vector v1, struct vector v2, struct vector sum)
// {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;
//     printf("sum of x is : %d\n", sum.x);
//     printf("sum of y is : %d\n", sum.y);
// }

// void printAdd(struct address add)
// {
//     printf("adress is : %d,%d,%s,%s", add.houseNo, add.block, add.city, add.state);
// }

// void printInfo(struct student s1)
// {
//     printf("student info :\n ");
//     printf("student name = %s\n", s1.name);
//     printf("student roll no is : %d\n ", s1.roll);
//     printf("student cgpa : %f\n", s1.cgpa);
// }