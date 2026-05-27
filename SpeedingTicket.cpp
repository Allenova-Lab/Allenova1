#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int break1, break2, distance, speed;
    cin >> break1 >> break2;
    vector<int> set1;
    vector<int> set2;
    for (int i = 0; i < break1; i++)
    {
        cin >> distance >> speed;
        for (int i = 0; i < distance; i++)
        {
            set1.push_back(speed);
        }
    }
    for (int i = 0; i < break2; i++)
    {
        cin >> distance >> speed;
        for (int i = 0; i < distance; i++)
        {
            set2.push_back(speed);
        }
    }
    int speedlimit = 0;
    for (int i = 0; i < 100; i++)
    {
        if (speedlimit < (set2[i] - set1[i]))
        {
            speedlimit = (set2[i] - set1[i]);
        }
    }
    cout << speedlimit << endl;
}