#include <iostream>
#include <string>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int score;
    string name;
    
    ifstream inFile("Grade.txt");
    if (!inFile.is_open())
    {
        cerr << "cannot open file" << endl;
        return 1;
    }

    ofstream outFile("Report.txt");
    if (!outFile.is_open())
    {
        cerr << "Error: could not open file" << endl;
        return 1;
    }

    while (inFile >> name >> score)
    {
        cout << "Name: " << name << ", Score: " << score << endl;
        if (score < 60)
        {
            outFile << "Name: " << name << " FAIL" << endl;
        }   
        else
        {
            outFile << "Name: " << name << " PASS" << endl;
        }
    }
    outFile.close();

    return 0;
}