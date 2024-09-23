#include <iostream>
using namespace std;

/*
The account number.
The account holder name.
The account type (current/savings) (assume the data type)
The current balance.
The minimum balance (An account has to maintain the minimum amount; it cannot withdraw. It can only be initialized at the time of creating object. USE const modifier)

Public members
The member variable value of the object can be assigned during object creation or after the object has been created.
A function to show all the information of a BankAcccout object.
Function showBalance() (for displaying current balance),
Functions deposit() and withdrawal() of money from an account. Show appropriate messages for invalid amount.
Function giveInterst() will deposit net interest to the account.   Default interest is 3 percent of current balance but it might be different. A fixed 10% Source Tax will be deducted from the incurred interest.
When the BankAccount object is destroyed display a message like : Account of Mr. X with account no 1234 is destroyed with a balance BDT 5000

*/

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    string accountType;
    float currentBalance;
    const float minimumBalance;

    static int totalAccounts;
    static int currentAccounts;
    static float totalSourceTaxCollected;

public:
    BankAccount(int accNum, string holderName, string accType, float balance, float minBalance)
        : accountNumber(accNum), accountHolderName(holderName), accountType(accType), currentBalance(balance), minimumBalance(minBalance) {
        totalAccounts++;
        currentAccounts++;
    }

    void showAccountInfo() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: " << currentBalance << endl;
        cout << "Minimum Balance: " << minimumBalance << endl;
    }

    void showBalance() const {
        cout << "Current Balance: " << currentBalance << endl;
    }

    void deposit(float amount) {
        if (amount > 0) {
            currentBalance += amount;
            cout << "Deposit successful. New Balance: " << currentBalance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(float amount) {
        if (amount > 0 && currentBalance - amount >= minimumBalance) {
            currentBalance -= amount;
            cout << "Withdrawal successful. New Balance: " << currentBalance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    void giveInterest(float interestRate = 3.0) {
        float interest = (interestRate / 100) * currentBalance;
        float sourceTax = (10.0 / 100) * interest;
        totalSourceTaxCollected += sourceTax;
        currentBalance += (interest - sourceTax);
        cout << "Interest given. New Balance: " << currentBalance << endl;
    }

    ~BankAccount() {
        cout << "Account of Mr./Ms. " << accountHolderName
             << " with account no " << accountNumber
             << " is destroyed with a balance BDT " << currentBalance << endl;
        currentAccounts--;
    }

    static int getTotalAccounts() {
        return totalAccounts;
    }

    static int getCurrentAccounts() {
        return currentAccounts;
    }

    static float getTotalSourceTaxCollected() {
        return totalSourceTaxCollected;
    }

    float getCurrentBalance() const {
        return currentBalance;
    }

    friend BankAccount Larger(const BankAccount A, const BankAccount B);

};

int BankAccount::totalAccounts = 0;
int BankAccount::currentAccounts = 0;
float BankAccount::totalSourceTaxCollected = 0.0;


void display_stat() {
    cout << "Total Bank Accounts Created: " << BankAccount::getTotalAccounts() << endl;
    cout << "Currently Active Accounts: " << BankAccount::getCurrentAccounts() << endl;
    cout << "Total Source Tax Collected: " << BankAccount::getTotalSourceTaxCollected() << " BDT" << endl;
}


BankAccount Larger(const BankAccount A, const BankAccount B) {
    if (A.currentBalance > B.currentBalance) {
        return A;
    } else {
        return B;
    }
}

int main(void) {

    BankAccount acc1(1234, "Abrar", "savings", 10000.0, 5000.0);
    BankAccount acc2(5678, "Hasan", "current", 10000.0, 1000.0);

    acc1.showAccountInfo();
    acc1.deposit(500);
    acc1.withdraw(3000);
    acc1.giveInterest();

    acc2.showAccountInfo();
    acc2.deposit(1000);
    acc2.withdraw(2000);
    acc2.giveInterest(5.0);

    BankAccount largerAcc = Larger(acc1, acc2);
    if (largerAcc.getCurrentBalance() == acc1.getCurrentBalance()) {
        cout << "Account 1 is larger" << endl;
    }
    else {
        cout << "Account 2 is larger" << endl;
    }

    display_stat();

    return 0;
}
