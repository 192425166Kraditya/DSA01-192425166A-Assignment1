
#include <iostream>
using namespace std;

class SmartCard {
private:
    long long balancePaise;

public:
    SmartCard(long long balance) : balancePaise(balance) {}

    bool canTravel(long long farePaise) const {
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
};

int main() {
    SmartCard card(5000);
    card.deductFare(2000);
    return 0;
}
