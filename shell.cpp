#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    freopen("shell.in","r",stdin);
    freopen("shell.out","w",stdout);

    vector<int> pebble1 = {1,0,0};
    vector<int> pebble2 = {0,1,0};
    vector<int> pebble3 = {0,0,1};
    int n,a,b,c;
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    int sf = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        swap(pebble1[a-1],pebble1[b-1]);
        s1 += pebble1[c-1];
        swap(pebble2[a-1],pebble2[b-1]);
        s2 += pebble2[c-1];
        swap(pebble3[a-1],pebble3[b-1]);
        s3 += pebble3[c-1];
    }
    sf = max(s1,s2);
    sf = max(sf,s3);
    cout << sf << endl;
    return 0;
}