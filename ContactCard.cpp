#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    string name;
    int age;
    double gpa;
    cout << "Enter ur name, age, and gpa" << endl;
    cin >> name;
    cin >> age;
    cin >> gpa;
    ofstream outFile("report.txt");
    if(!outFile.is_open())
    {
        cerr << "Error: could not open file";
        return 1;
    }

    outFile << name << endl;
    outFile << age << endl;
    outFile << gpa << endl;
    outFile.close();
    ifstream inFile("report.txt");
    if(!inFile.is_open())
    {
        cerr << "Error: could not open file";
        return 1;
    }
    string line;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}