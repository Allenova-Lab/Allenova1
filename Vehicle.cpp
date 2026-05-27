#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    protected:
        string name;
    private:
    public:
        Vehicle (string name) 
        {
            this->name = name;
        }
        virtual ~Vehicle() 
        {
            cout << "Vehicle Destroyed" << endl;
        }
        void setName(string n)
        {
            name = n;
        }
        virtual void move()
        {
            cout << name << " speeds up!" << endl;
        }
};

class Car : public Vehicle
{
    public:
    Car(string name) : Vehicle(name) {}
    int age;
    ~Car()
    {
        cout << "Car Destroryed" << endl;
    }
    void move()
    {
        cout << name << " moves at the speed of 65mph!" << endl;
    }
};

class Bicycle : public Vehicle
{
    public:
    Bicycle(string name) : Vehicle(name) {}
    int age;
    ~Bicycle()
    {
        cout << "Bicycle Destroryed" << endl;
    }
    void move()
    {
        cout << name << " moves at a speed of 5m/h!" << endl;
    }
};
int main()
{
    Vehicle*v1 = new Car("100");
    Vehicle*v2 = new Bicycle("10");
    v1->move();
    v2->move();
    delete v1;
    delete v2;
}