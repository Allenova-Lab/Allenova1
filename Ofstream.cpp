#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inFile("report.txt");
    if (!inFile.is_open())
    {
        cerr << "Error: could not be open file" << endl;
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
