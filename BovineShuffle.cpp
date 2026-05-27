#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int n;
    int position;
    int list;
    cin >> n;
    vector<int> order;
    vector<int> id;
    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        cin >> position;
        order.push_back(position);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> list;
        id.push_back(list);
    }

    for (int i = 0; i < n; i++)
    {
        res[order[i]-1] = id[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}