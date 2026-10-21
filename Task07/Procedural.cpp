
#include <iostream>
using namespace std;

long long balancePaise = 5000;

bool canTravel(long long farePaise) {
    return farePaise >= 0 && balancePaise >= farePaise;
}

void deductFare(long long farePaise) {
    if (canTravel(farePaise)) {
        balancePaise -= farePaise;
        cout << "Travel permitted\n";
        cout << "Balance: " << balancePaise << " paise\n";
    } else {
        cout << "Insufficient balance\n";
    }
}

int main() {
    deductFare(2000);
    return 0;
}
