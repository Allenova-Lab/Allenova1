#include <iostream>
using namespace std;

int main()
{
    int A, B, Ca, Cb, Fa, n, Needed;
    int additional = 0;
    int residue = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A >> B >> Ca >> Cb >> Fa;
        if (B > Cb)
        {
            additional = B/Cb;
            additional = additional * Ca;
            residue = B%Cb;
        }
        Needed = Fa - A + additional + Cb - residue - 1 - B;
        if (Needed <= 0)
        {
            cout << "0" << endl;
            continue;
        }
        if (Ca <= Cb)
        {
            cout << (int)((int)((double)(Fa-A) / Ca + 0.5) * Cb - B) << endl;
            continue;
        }
        else
        {
            cout << Ca + Cb - 1 << endl;
            continue;
        }
    }
    return 0;
}