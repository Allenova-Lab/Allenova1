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
    int n, b, s;
    cin >> n;
    vector<int> a;
    a.reserve(n);

    for (int i = 0; i < n; i++) {
        cin >> b;
        a.push_back(b);
    }

    cin >> s;

    int ans = binSearchRec(a, s, 0, n - 1);
    cout << ans << endl;

    return 0;
}