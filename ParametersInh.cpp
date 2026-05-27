#include <iostream>
using namespace std;

class Animal 
{
    public:
        Animal(string name) 
        {
            this->name = name;
            cout << "Animal constructor created" << endl;
        }
        string name;
        virtual ~Animal() 
        {
            cout << "Animal Destructor" << endl;
        }
        virtual void eat()
        {
            cout << name << " is eating" << endl;
        }
};

class Dog : public Animal 
{
    public:
    Dog(string name) : Animal(name) 
    {
        cout << "Dog constructor created" << endl;
    }
    Dog(string name, int age) : Animal(name)
    {
        this->age = age;
    }
    int age;
    ~Dog()
    {
        cout << "Dog Destructor" << endl;
    }
    void eat()
    {
        cout << name << " is eating dog food" << endl;
    }
};

class Cat : public Animal 
{
    public:
    Cat ( string name) : Animal(name)
    {
    }
    void eat() override 
    {
        cout << name << " is eating cat food" << endl;
    }

};

int main()
{
    // Dog Doug("Bud");
    // Doug.eat();
    Animal * a = new Dog("Buddy");
    a->eat();
    delete a;
    Animal * b = new Cat("Kitty");
    b->eat();
    return 0;
}