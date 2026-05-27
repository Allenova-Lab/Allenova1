#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,x;
    cin >> n;
    vector<int> sort(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sort[i] = x;
    }
    for (int j = 0; j < n-1; j++)
    {
        for (int i = 0; i < n-1-j; i++)
        {
            if (sort[i]>sort[i+1])
            {
                swap(sort[i], sort[i+1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << sort[i] << " ";
    }
        return 0;
}
