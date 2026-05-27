#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    public:
        string OwnerName;
        int Balance;
        void Deposit(int Amount)
        {
            if (Amount <= 0)
            {
                cout << "Invald Amount" << endl;
                return;
            }
            Balance += Amount;
        }
        void Withdraw(int Amount)
        {
            if ((Amount <= 0) || (Amount > Balance))
            {
                cout << "Invalid Amount" << endl;
                return;
            }
            Balance -= Amount;
        }
        void DisplayBalance()
        {
            cout << OwnerName << ": " << Balance << endl;
        }

};

int main()
{
    BankAccount MyBankAccount;
    MyBankAccount.OwnerName = "Allen";
    MyBankAccount.Balance = 10000000;
    MyBankAccount.Deposit(1000);
    MyBankAccount.Withdraw(100000000);
    MyBankAccount.DisplayBalance();
    return 0;
}