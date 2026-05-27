#include <iostream>
using namespace std;

int main()
{
    int n;
    int S;
    int output = 1;
    int sum;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> S;
    sum = a[0];
    if (a[0] > S)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < n-1; i++)
    {
        sum += a[i+1];
        output++;
        if (sum>S)
        {
            output--;
            cout << output << endl;
            break;
        }
    }
}