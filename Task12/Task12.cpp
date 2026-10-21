
#include <iostream>
using namespace std;

enum class Zone {
    Zone1 = 1,
    Zone2,
    Zone3,
    Airport
};

long long baseFare(Zone source, Zone destination) {
    if (source == destination) return 0;

    switch (source) {
        case Zone::Zone1:
            switch (destination) {
                case Zone::Zone2: return 2000;
                case Zone::Zone3: return 3500;
                case Zone::Airport: return 5000;
                default: return -1;
            }

        case Zone::Zone2:
            switch (destination) {
                case Zone::Zone1: return 2000;
                case Zone::Zone3: return 2500;
                case Zone::Airport: return 4500;
                default: return -1;
            }

        case Zone::Zone3:
            switch (destination) {
                case Zone::Zone1: return 3500;
                case Zone::Zone2: return 2500;
                case Zone::Airport: return 3000;
                default: return -1;
            }

        case Zone::Airport:
            switch (destination) {
                case Zone::Zone1: return 5000;
                case Zone::Zone2: return 4500;
                case Zone::Zone3: return 3000;
                default: return -1;
            }
    }

    return -1;
}

long long discountedFare(long long farePaise, bool weekend) {
    if (farePaise < 0) return -1;

    if (weekend) {
        return farePaise * 90 / 100;
    }

    return farePaise;
}

int main() {
    Zone source = Zone::Zone1;
    Zone destination = Zone::Airport;
    bool weekend = true;

    long long fare = baseFare(source, destination);

    if (fare < 0) {
        cout << "Invalid journey\n";
        return 1;
    }

    long long finalFare = discountedFare(fare, weekend);

    cout << "Base fare: " << fare << " paise\n";
    cout << "Weekend discount: " << (weekend ? "10%" : "None") << '\n';
    cout << "Final fare: " << finalFare << " paise\n";

    return 0;
}
