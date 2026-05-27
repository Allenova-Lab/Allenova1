#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int res = 0;
    vector<int> n;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        n.push_back(b);
    }
    int c = n[0];
    for (int i = 0; i < a-1; i++)
    {
        if (n[i]>n[i+1])
        {
            c = n[i+1];
            res = i+1;
        }
    }
    cout << res << endl;
    return 0;
}