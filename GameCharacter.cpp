#include <iostream>
#include <string>
using namespace std;

class Character
{
    protected:
        string name;
    private:
        int health;
    public:
        Character (string name) 
        {
            this->name = name;
        }
        virtual ~Character() 
        {
            cout << "Character Destroyed" << endl;
        }
        void setName(string n)
        {
            name = n;
        }
        void setHealth(int h)
        {
            health = h;
        }
        int getHealth()
        {
            return health;
        }
        virtual void attack()
        {
            cout << name << " attacks!" << endl;
        }
};

class Warrior : public Character
{
    public:
    Warrior(string name) : Character(name) {}
    int age;
    ~Warrior()
    {
        cout << "Warrior Destroryed" << endl;
    }
    void attack()
    {
        cout << name << " swings a sword!" << endl;
    }
};

class Mage : public Character
{
    public:
    Mage(string name) : Character(name) {}
    int age;
    ~Mage()
    {
        cout << "Mage Destroryed" << endl;
    }
    void attack()
    {
        cout << name << " casts a spell!" << endl;
    }
};
int main()
{
    Character*c1 = new Warrior("Arthur");
    Character*c2 = new Mage("Merlin");
    c1->attack();
    c2->attack();
    delete c1;
    delete c2;
}