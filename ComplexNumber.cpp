#include <iostream>
#include <string>
using namespace std;

class ComplexNumber
{
    public:
        int x, y;
        ComplexNumber() {}
        ComplexNumber(int x, int y) {
            this->x = x;
            this->y = y;
        }
        ComplexNumber operator+(ComplexNumber& p)
        {   
            return ComplexNumber(this->x+p.x,this->y+p.y);
        }
        ComplexNumber operator-(ComplexNumber &p)
        {
            return ComplexNumber(this->x-p.x,this->y-p.y);
        }
        ComplexNumber operator*(ComplexNumber &p)
        {
            return ComplexNumber(this->x*p.x - y*p.y,this->x*p.y + y*p.x);
        }
        bool operator==(ComplexNumber &p)
        {
            if((x==p.x)&&(y==p.y))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

ostream & operator<<(ostream &os,  ComplexNumber & p) {
    os << p.x << "," << p.y << endl;
    return os; 
}

istream & operator>>(istream &in,  ComplexNumber & p) {
    in >> p.x >> p.y;
    return in; 
}


int main()
{
    ComplexNumber p;
    ComplexNumber p1;
    cin >> p1;
    ComplexNumber p2(1,1);

    p = p1 + p2;
    cout << p;
     
    p = p1 - p2;
    cout << p;

    p = p1 * p2;
    cout << p;

    if (p1==p2)
    {
        cout << "they are equal" << endl;
    }
    else 
    {
        cout << "they are not equal" << endl;
    }

    return 0;
}