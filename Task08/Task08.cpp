
#include <iostream>
#include <limits>
using namespace std;

int main() {
    long long balancePaise;

    cout << "Enter balance in paise: ";

    if (!(cin >> balancePaise)) {
        cout << "Invalid input. Please enter a number.\n";
        return 1;
    }

    if (balancePaise < 0) {
        cout << "Balance cannot be negative.\n";
        return 1;
    }

    cout << "Valid balance: " << balancePaise << " paise\n";

    return 0;
}
