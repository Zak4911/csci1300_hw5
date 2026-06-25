#include <iostream>
using namespace std;

int daysToFund (int startBalance, int dailyDeposit) {
    int days = 0;
    int balance = startBalance;

    while (balance < 42500) {
        days++;
        balance += dailyDeposit;

        cout << "Day " << days << ": deposited " << dailyDeposit << ", balance now " << balance << endl;
    }

    return days;
}

int main() {

    int balance;
    int deposit;
    
    cout << "Enter the starting Vault balance: ";
    cin >> balance;
    cout << "Enter the daily deposit amount: ";
    cin >> deposit;

    cout << "--- Vault Savings Plan ---" << endl;

    int days = daysToFund (balance, deposit);

    cout << "The Vault was funded in " << days << " days!" << endl;

    return 0;
}