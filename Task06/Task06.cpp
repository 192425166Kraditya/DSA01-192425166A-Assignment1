
#include <iostream>
using namespace std;

enum class Zone {
    Zone1 = 1,
    Zone2 = 2,
    Zone3 = 3
};

long long fare(Zone source, Zone destination) {
    if (source == destination) {
        return 0;
    }

    switch (source) {
        case Zone::Zone1:
            switch (destination) {
                case Zone::Zone2: return 2000;
                case Zone::Zone3: return 3500;
                default: return -1;
            }

        case Zone::Zone2:
            switch (destination) {
                case Zone::Zone1: return 2000;
                case Zone::Zone3: return 2500;
                default: return -1;
            }

        case Zone::Zone3:
            switch (destination) {
                case Zone::Zone1: return 3500;
                case Zone::Zone2: return 2500;
                default: return -1;
            }
    }

    return -1;
}

bool canTravel(long long balancePaise, long long farePaise) {
    return balancePaise >= 0 &&
           farePaise >= 0 &&
           balancePaise >= farePaise;
}

int main() {
    long long balancePaise = 5000;
    long long farePaise = fare(Zone::Zone1, Zone::Zone2);

    if (canTravel(balancePaise, farePaise)) {
        cout << "Travel permitted\n";
        cout << "Remaining balance: "
             << balancePaise - farePaise << " paise\n";
    } else {
        cout << "Insufficient balance or invalid fare\n";
    }

    return 0;
}
