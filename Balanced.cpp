#include <iostream>
#include <string>
#include <stack> 

using namespace std;

bool balanced(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else 
        {
           // if (st.empty()) return false;
           if (c == ')' || c == ']' || c == '}') {
                char o = st.top();
                st.pop();
                if ((c == ')' && o != '(') || (c == ']' && o != '[') || (c == '}' && o != '{'))
                {
                    return false;
                }
            }
        }
    }

    return st.empty();
}

int main()
{
    string s1 = "(2+3[)]";
    bool b = balanced(s1);
    cout << b << endl;
    string s2 = "{(2+3)-[23*12407]";
    bool c = balanced(s2);
    cout << c << endl;
    return 0;
}