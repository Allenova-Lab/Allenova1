#include <iostream>
using namespace std;

int main()
{
    // int*p = new int(0); 
    // int*a = new int[5]; 
    // for (int i = 0; i < 5; i++)
    // {

    // }
    // cout << *p << endl;
    // delete p;
    struct student
    {
        string name;
        char grade;
        int age;
    };
    student A = {"Allen", 'A', 14};
    student B = {"Alex", 'B',  15};
    cout << A.age << B.name << A.grade << endl;
    return 0;
}