#include <iostream>
using namespace std;

int main()
{
    int b;
    int s;
    int n = 0;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a.push_back(b);
    }
    cin >> s;
    int min = 0;
    int mid = (n-1)/2;
    int max = n-1;
    while (min < max)
    {
        if (a[mid] > s)
        {
            max = mid - 1;
            mid = min + (max-min)/2;
        }
        else if (a[mid] < s)
        {
            min = mid + 1;
            mid = min + (max-min)/2;
        }
        else
        {
            cout << mid << endl;
            break;
        }
    }
    if (min == max)
    {
        cout << max << endl;
    }
    return 0;
}