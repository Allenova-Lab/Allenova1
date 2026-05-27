#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;

int main()
{
    int n, d = 0;
    cin >> n;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        s.insert(d);
    }
    cout << s.size() << endl;
    // cout << s.size() << endl;
    // cout << s.count(1) << endl;
    // cout << s.count(5) << endl;
    // s.erase(0);
    // s.insert(5);
    // for(int element : s)
    // {
    //     cout << element << " ";
    // }
    // cout << endl;
    return 0;
}