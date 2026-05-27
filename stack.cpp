#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    char o;
    bool balance = false;
    stack <char> st;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (st.empty())
            {
                balance = false;
            }
            o = st.top();
            st.pop();
            if (s[i] == ')' && o == '(')
            {
                balance = true;
                cout << "Balanced" << endl;
                continue;
            }
            if (s[i] == ']' && o == '[')
            {
                balance = true;
                cout << "Balanced" << endl;
                continue;
            }
            if (s[i] == '{' && o == '}')
            {
                balance = true;
                cout << "Balanced" << endl;
                continue;
            }

        }
    }

}