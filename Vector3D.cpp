#include <iostream>
#include <string>
using namespace std;


class Vector3D
{
    public:
        int x, y, z;
        Vector3D() {}
        Vector3D(int x, int y, int z) {
            this->x = x;
            this->y = y;
            this->z = z;
        }
        Vector3D operator+(Vector3D& p)
        {   
            return Vector3D(this->x+p.x,this->y+p.y,this->z+p.z);
        }
        Vector3D operator-(Vector3D &p)
        {
            return Vector3D(this->x-p.x,this->y-p.y,this->z-p.z);
        }
};

ostream & operator<<(ostream &os,  Vector3D & p) {
    os << p.x << "," << p.y << "," << p.z << endl;
    return os; 
}

istream & operator>>(istream &in,  Vector3D & p) {
    in >> p.x >> p.y >> p.z;
    return in; 
}


int main()
{
    Vector3D p;
    Vector3D p1;
    cin >> p1;
    Vector3D p2(1,1,1);

    p = p1 + p2;
    cout << p;
     
    p = p1 - p2;
    cout << p;

    return 0;
}