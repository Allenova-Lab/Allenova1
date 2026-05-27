#include <iostream>
using namespace std;

int recur(vector<int> &a, int n, int left, int right)
{
    // cout << left << " " << right << endl;
    if (left >= right)
    {
        return 0;
    }
    int piv = a[left];
    int pivpos = left;
    int right_pos = right;
    for (int i = left; i < right_pos; i ++)
    {
        if (a[pivpos]>a[i+1])
        {
            swap(a[pivpos],a[i+1]);
            pivpos = i+1;
        }
        else if (a[pivpos]<a[i+1])
        {
            swap(a[right_pos],a[i+1]); 
            right_pos--;
            i--;
        }
    }
        recur(a, n, left, pivpos-1);
        recur(a, n, pivpos+1, right);
}

int main()
{
    int n = 0;
    int b = 0;
    vector<int> a;
    cin >> n;
    int right = n-1;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a.push_back(b);
    }

    recur(a,n,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

