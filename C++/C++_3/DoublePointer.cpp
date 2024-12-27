#include <bits/stdc++.h>

using namespace std;
void fun(int **p1)
{
    *p1 = *p1 + 1;
}
void second(int *p1, int *p2)
{
    p1 = p2;
    *p1 = 2;
}
int four(int x, int *py, int **ppz)
{
    int y, z;         // 4 - -
    **ppz += 1;       // 4 - 5
    z = **ppz;        // 4 - 5
    *py += 2;         // 4 7 5
    y = *py;          // 4 7 5
    x += 3;           // 7 7 5
    return x + y + z; // 7+7+5=19
}
void five(char *str1, char *str2)
{
    while (*str1 = *str2) // this is assigning value so tranfer second to first
    // and we get thee mohit replace by rohan
    {
        str1++; // m->r||o->o||h->h||i->a||t->n
        str2++; //
    }
}

int main()
{

    // int n = 10;
    // int *p = &n;
    // int **p2 = &p;
    // cout << (int)p << endl;
    // fun(p2);
    // cout << (int)p << endl;

    // char c[] = "GATE2024";
    // char *p = c;
    // cout << p + p[3] - p[1] << endl;

    // int i = 0, j = 1;
    // second(&i, &j);
    // cout << i << j;

    // int *ptr;
    // int x = 0;
    // ptr = &x;
    // int y = *ptr;
    // *ptr = 1;
    // cout << x << " " << y << endl;

    // int a = 5;
    // int b = 10;
    // int &name = a; // tu ho rha hai to mebhi ho rha hu
    // int *ptr = &a;
    // (*ptr)++;
    // ptr = &b;
    // *ptr = *ptr + 5;
    // name += 5;
    // cout << a << " " << b << endl;

    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << four(c, b, a);

    char first[] = "mohit";
    char second[] = "rohan";
    five(first, second);
    cout << first;

    return 0;
}