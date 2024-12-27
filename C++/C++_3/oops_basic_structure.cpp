// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
// public: // this is  by default modifier private so not use anyone
//     // in public case use anynoe
//     // acess modifier uses--->puble,private,protected
//     // in class i interduced a attribute and method
//     string name;
//     int roll;
//     int age;
//     string grade;
// };

// int main()
// {
//     student s1;
//     s1.name = "neev";
//     s1.roll = 202451107;
//     s1.age = 17;
//     s1.grade = "AB";
//     cout << "name: " << s1.name << endl;
//     cout << "roll: " << s1.roll << endl;
//     cout << "age: " << s1.age << endl;
//     cout << "grade: " << s1.grade << endl;

//     student s2;
//     s2.name = "yagnik";
//     s2.roll = 202451102;
//     s2.age = 18;
//     s2.grade = "BC";
//     cout << "\nname: " << s2.name << endl;
//     cout << "roll: " << s2.roll << endl;
//     cout << "age: " << s2.age << endl;
//     cout << "grade: " << s2.grade << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
// private:
//     string name;
//     int roll;
//     int age;
//     string grade;

// public:
//     void setname(string s)
//     {
//         if (s.size() == 0)
//         {
//             cout << "invalid name" << endl;
//             return;
//         }
//         name = s;
//     }
//     void setage(int a)
//     {
//         if (a < 0)
//         {
//             cout << "invalid age" << endl;
//             return;
//         }
//         age = a;
//     }
//     void setroll_number(int r)
//     {
//         roll = r;
//     }
//     void setgrade(string g)
//     {
//         grade = g;
//     }
//     void getname()
//     {
//         cout << name << endl;
//     }
//     void getage()
//     {
//         cout << age << endl;
//     }
//     int getroll_number()
//     {
//         return roll;
//     }
//     void getgrade()
//     {
//         cout << grade << endl;
//     }
//     string get_grade(int pin)
//     {
//         if (pin == 123)
//         {
//             return grade;
//         }
//         return " ";
//     }
// };
// int main()
// {
//     student s1;
//     s1.setname("yagnik");
//     s1.setage(17);
//     s1.setroll_number(107);
//     s1.setgrade("A");
//     s1.getname();
//     s1.getage();
//     s1.getgrade();
//     cout << s1.getroll_number() << endl;
//     cout << s1.get_grade(123);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class a
// {
//     char c;
//     int b; // it i write that so give me 8 size so this logic of paddiing
//     char d;
//     char e;
//     char f;
//     char g;
//     char h;
//     // in case c b --->8 byte
//     // in case b c--->8 byte
//     // in case c b d -->12 byte
//     // in case b c d -->8 byte
//     // in case c b d e -->12  byte
//     // in case c b d e f -->12 byte
//     // in case c b d e f g -->12 byte
//     // in case c b d e f g h -->16 byte
//     // reason for that int is bigger all over so
//     // 1 char convert-->4
//     // 2 char convert-->4
//     // 3 char convert-->4
//     // 4 char convert-->4
//     // 1 int conver-->4
//     // 2 int convert-->8
//     // 3 int convert-->12
//     // 4 int convert-->16
//     // memory allocation understand by array suppose
// };
// int main()
// {
//     a obj1;
//     cout << sizeof(obj1);

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

class student
{
public:
    string name;
    int age;
    int roll;
    string grade;
};
int main()
{
    // dynamic memory allocation
    student *s = new student;
    (*s).name = "neev";
    (*s).age = 16;
    (*s).roll = 202451107;
    (*s).grade = "A";
    cout << s->name << " ";
    cout << s->age << " ";
    cout << s->roll << " ";
    cout << s->grade << " ";

    return 0;
}