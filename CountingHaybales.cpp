#include <iostream>
using namespace std;

int binSearchRec(const vector<int>& a, int s, int min, int max) {
    int mid = (max + min) / 2;
    if (min >= max)
    {
    return min;
    }
    if (a[mid] == s) 
    {
        return mid;
    }
    else if (a[mid] > s)  
    {
        return binSearchRec(a, s, min, mid - 1);
    }
    else
    {
        return binSearchRec(a, s, mid + 1, max);
    }
}

int main()
{
    int n, q, b;
    cin >> n;
    cin >> q;
    vector<int> a;
    a.reserve(n);

    for (int i = 0; i < n; i++) {
        cin >> b;
        a.push_back(b);
    }

    sort(a.begin(), a.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i];
    // }
    for (int i = 0; i < q; i++)
    {
        int start, end;
        cin >> start;
        cin >> end;
        int startans = binSearchRec(a, start, 0, n - 1);
        int endans = binSearchRec(a, end, 0, n - 1);
        if (a[endans] != end)
        {
            endans--;
        }
        cout << endans-startans+1 << endl;
    }

    return 0;
}