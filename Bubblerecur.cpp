#include <iostream>
using namespace std;

void bubble(vector<int> &n, int x)
{
    if (x == 1)
    {
        return;
    }
    for (int i = 0; i < x-1; i++)
    {
        if (n[i] > n[i+1])
        {
            swap(n[i], n[i+1]);
        }
    }
    bubble(n, x-1);
}

int main()
{
    vector<int> n;
    int x;
    int a;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> a;
        n.push_back(a);
    }
    bubble(n, x);
    for (int i = 0; i < x; i++)
    {
        cout << n[i] << " ";
    }

}