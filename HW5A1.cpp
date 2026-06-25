#include <iostream>
using namespace std;

int totalGold(int donations[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += donations[i];
    }
    
return sum;
}

int main() {

    const int goal = 42500;
    int count;
    int donations[100];

    cout << "Enter the number of gold donations: ";
    cin >> count;
    
    for (int i = 0; i < count; i++) {
        cout << "Enter gold donation " << i + 1 << ": ";
        cin >> donations[i];
    }

    int sum = totalGold(donations, count);
    
    cout << "--- Vault Funding ---" << endl;
    cout << "Total gold donated: " << sum << endl;
    cout << "Vault goal: " << goal << endl;
    
    if (sum >= goal) {
        cout << "The Vault is fully funded! Surplus: " << sum - goal << " gold" << endl;
    }
    else {
        cout << "The Vault still needs " << goal - sum << " more gold." << endl;
    }

    return 0;
}