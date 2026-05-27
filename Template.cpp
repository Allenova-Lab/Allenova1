#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
T Maxof(T a,T b)
{
    if(a < b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

template <typename T>
class PairTemplate
{
    public:
        T first, second;
        PairTemplate(T first, T second)
        {
            this -> first = first;
            this -> second = second;
        }
        void print()
        {
            cout << first << ", " << second << endl;
        }
        T getMax()
        {
            return max(first, second);
        }
        void swapValues()
        {
            swap(first, second);
        }

};



int main() 
{
    PairTemplate<int> pair(1,2);
    pair.print();
    cout << pair.getMax() << endl;
    pair.swapValues();
    pair.print();
}