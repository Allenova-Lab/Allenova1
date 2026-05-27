#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() 
{
    int n, limit, algorithms;
    vector<int> time;
    cin >> n >> limit;
    for (int i = 0; i < n; i++)
    {
        cin >> algorithms;
        time.push_back(algorithms);
    }
    sort(time.begin(),time.end());
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        limit -= time[i];
        if (limit < 0)
        {
            break;
        }
        else
        {
            max++;
        }
    }
    cout << max << endl;
}