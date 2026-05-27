#include <iostream>
#include <string>
using namespace std;

int add (int a, int b)
{
    return a + b;
}
double add (double a, double b)
{
    return a + b;
};

class Point
{
    public:
        int x, y;
        Point() {}
        Point(int x, int y) {
            this->x = x;
            this->y = y;
        }
        Point operator+(Point& p)
        {   
            return Point(this->x+p.x,this->y+p.y);
        }
        Point operator-(Point &p)
        {
            return Point(this->x-p.x,this->y-p.y);
        }
};

ostream & operator<<(ostream &os,  Point & p) {
    os << p.x << "," << p.y << endl;
    return os; 
}

istream & operator>>(istream &in,  Point & p) {
    in >> p.x >> p.y;
    return in; 
}


int main()
{
    add(1,2);
    add(1.0,2.5);

    Point p1;
    cin >> p1;
    Point p2(1,1);

    //Point p = p1 + p2;

    //Method 1
    Point p;
    p.x = p1.x + p2.x;
    p.y = p1.y + p2.y;

    //Method 2
    p = p1 + p2;
    cout << p;
     
    p = p1 - p2;
    cout << p;

    return 0;
}