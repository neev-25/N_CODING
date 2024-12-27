#include <bits/stdc++.h>

using namespace std;

class teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    //.. double salary;

    // teacher()
    // {
    //     cout << "hi i am constroctur\n";
    // }

    // // non parameterrized
    // teacher()
    // {
    //     dept = "computer science";
    // }

    // paramererized
    teacher(string n, string d, string s)
    {
        name = n;
        dept = d;
        subject = s;
    }

    // void setsalary(double s)
    // {
    //     salary = s;
    // }

    // double getsalary()
    // {
    //     return salary;
    // }

    //     void changedept(string newdept)
    //     {
    //         dept = newdept;
    //     }

    void getinfo()
    {
        cout << "namde :" << name << endl;
        cout << "department :" << dept << endl;
        cout << "subject :" << subject << endl;
    }
};
class student
{
public:
    string name;
    int age;
    int rollno;
};

int main()
{
    teacher t1("neev", "cse with dsay", "oops"); // costucter call
    teacher t2;
    t1.name = "Rahul";
    // t1.dept = "CSE";
    t1.subject = "C";
    //.. t1.salary = 10000;

    // t1.changedept("ECE");

    cout << t1.dept << endl;

    cout << t1.name << endl;
    cout << t1.subject << endl;
    //.. cout << t1.salary << endl;
    // t1.setsalary(10000);
    // cout << t1.getsalary() << endl;

    t1.getinfo();

    student s1;
    s1.name = "ketan";
    s1.age = 13;
    s1.rollno = 4;
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.rollno << endl;

    return 0;
}