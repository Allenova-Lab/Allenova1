#include <iostream>
using namespace std;
int recursion(int x)
{
    int a = 0;
    int b = 1;
    if (x==1)
    {
        return 0;
    }
    if (x==2)
    {
        return 1;
    }
    int c = recursion(x-1) + recursion(x-2);
    return c;
}

int hanoi(int j, char A, char B, char C)
{
    if (j == 1) {
        cout << "Move from " << A << " to " << C << endl;
        return 0;
    }

    hanoi(j-1, A, C, B);
    cout << "Move from " << A << " to " << C << endl;
    hanoi(j-1, B, A, C);
}

 int main()
 {
    int n;
    cin >> n;
    char A = 'A';
    char B = 'B';
    char C = 'C';
    //cout << recursion(n) << endl;
    cout << hanoi(n, A, B, C) << endl;
    return 0;
 }