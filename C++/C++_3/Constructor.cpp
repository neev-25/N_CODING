// #include <bits/stdc++.h>
// using namespace std;

// class customer
// {
//     string name;
//     int account_number;
//     int balance;

// public:
//     // default cunstructor
//     customer()
//     {
//         cout << "i am default constructor" << endl;
//         name = "neev";
//         account_number = 32;
//         balance = 100;
//     }
//     void display()
//     {
//         cout << name << " " << account_number << " " << balance << endl;
//     }
// };

// int main()
// {
//     customer A1, A2, A3;
//     A1.display();
//     A2.display();
//     A3.display();

//     return 0;
// }
//..............................................................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// class customer
// {
//     string name;
//     int account_number;
//     int balance;

// public:
//     // default cunstructor
//     customer()
//     {
//         cout << "i am default constructor" << endl;
//         name = "neev";
//         account_number = 32;
//         balance = 100;
//     }

//     // parameterized constructor
//     customer(string a, int b, int c)
//     {
//         cout << "i'm parameterized connstructor (for three)" << endl;
//         name = a;
//         account_number = b;
//         balance = c;
//     }
//     // constructor overloading
//     customer(string a, int b)
//     {
//         cout << "i'm for two parameter constructor" << endl;
//         name = a;
//         account_number = b;
//     }

//     void display()
//     {
//         cout << name << " " << account_number << " " << balance << endl;
//     }
// };
// // coustructor based on assed on parameter and when
// //     i self construst constructor and i am not passing parameter on
// //         main function called so this give error int
// int main()
// {
//     customer A1;
//     A1.display();
//     customer A2("manthan", 34, 183);
//     A2.display();
//     customer A3("jiyansh", 132);
//     A3.display();

//     return 0;
// }
//...............................................................................................................

/*#include <bits/stdc++.h>
using namespace std;

class customer
{
    string name;
    int account_number;
    int balance;

public:
    // default cunstructor
    customer()
    {
        cout << "i am default constructor" << endl;
        name = "neev";
        account_number = 32;
        balance = 100;
    }
    // parameterized constructor *********
    // customer(string name, int account_number, int balance)
    // {
    //     cout << "i'm parameterized connstructor (for three)" << endl;
    //     this->name = name;
    //     this->account_number = account_number;
    //     this->balance = balance;
    // }

    // constructor overloading
    customer(string a, int b)
    {
        cout << "i'm for two parameter constructor" << endl;
        name = a;
        account_number = b;
    }
    // inline customer
    inline customer(string a, int b, int c) : name(a), account_number(b), balance(c)
    {
    }
    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
};
int main()
{
    customer A1;
    A1.display();
    customer A2("manthan", 34, 183);
    A2.display();
    customer A3("jiyansh", 132);
    A3.display();

    return 0;
}
*/
//.....................................................................................................................................................

// #include <bits/stdc++.h>
// using namespace std;

// class customer
// {
//     string name;
//     int account_number;
//     int balance;

// public:
//     // default cunstructor
//     customer()
//     {
//         cout << "i am default constructor" << endl;
//         name = "neev";
//         account_number = 32;
//         balance = 100;
//     }

//     // parameterized constructor
//     customer(string a, int b, int c)
//     {
//         cout << "i'm parameterized connstructor (for three)" << endl;
//         name = a;
//         account_number = b;
//         balance = c;
//     }
//     // constructor overloading
//     customer(string a, int b)
//     {
//         cout << "i'm for two parameter constructor" << endl;
//         name = a;
//         account_number = b;
//     }

//     void display()
//     {
//         cout << name << " " << account_number << " " << balance << endl;
//     }
//     // copy constructor
//     customer(customer &B)
//     {
//         name = B.name;
//         account_number = B.account_number;
//         balance = B.balance;
//     }
// };
// // coustructor based on assed on parameter and when
// //     i self construst constructor and i am not passing parameter on
// //         main function called so this give error int
// int main()
// {
//     customer A1;
//     A1.display();
//     customer A2("manthan", 34, 183);
//     A2.display();
//     customer A3("jiyansh", 132);
//     A3.display();
//     customer A4(A3);
//     A4.display();
//     customer A5;
//     A5 = A3;
//     A5.display();

//     return 0;
// }
//......................................................................................................................

// #include <bits/stdc++.h>
// using namespace std;

// class customer
// {
//     string name;
//     int *data;

// public:
//     customer()
//     {
//         cout << "constructer is a called";
//         name = "neev";
//         data = new int;
//         *data = 10;
//     }
//     // destructor
//     ~customer()
//     {
//         delete data;
//         cout << "destructer is called";
//     }
// };
// int main()
// {
//     customer A1;

//     return 0;
// }
//.........................................................................................
#include <bits/stdc++.h>

using namespace std;

class customer
{
    string name;
    int *data;

public:
    customer()
    {
        name = "4";
        cout << "constructer is" << name << endl;
    }
    customer(string name)
    {
        this->name = name;
        cout << "constructor is : " << name << endl;
    }
    ~customer()
    {
        cout << "distrocter is a : " << name << endl;
    }
};
int main()
{
    customer A1("1"), A2("2"), A3("3");
    customer *A4 = new customer;
    delete A4;

    return 0;
}