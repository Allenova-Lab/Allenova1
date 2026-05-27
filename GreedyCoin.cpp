#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cent;
    int amt = 0;
    cin >> cent;
    vector<int> n{25, 10, 5, 1};
    for (int i = 0; i < 4; i++)
    {
        while (cent >=0)
        {
            cent -= n[i];
            amt++;
        }
        amt--;
        cent +=n[i];
        cout << amt << " " << n[i] << " cent coins" << endl;
        amt = 0;
    }
}




// while (cent>=0)
    // {
    //     cent -= 25;
    //     amt++;
    // }
    // amt--;
    // cent +=25;
    // cout << amt << " 25 cent coins" << endl;
    // amt = 0;
    // while (cent>=0)
    // {
    //     cent -= 10;
    //     amt++;
    // }
    // amt--;
    // cent +=10;
    // cout << amt << " 10 cent coins" << endl;
    // amt = 0;
    // while (cent>=0)
    // {
    //     cent -= 5;
    //     amt++;
    // }
    // amt--;
    // cent +=5;
    // cout << amt << " 5 cent coins" << endl;
    // amt = 0;
    // while (cent>=0)
    // {
    //     cent -= 1;
    //     amt++;
    // }
    // amt--;
    // cent +=1;
    // cout << amt << " 1 cent coins" << endl;