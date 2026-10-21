# Task 10 – Precision Analysis of Monetary Calculations

## 1. Objective
To compare floating-point arithmetic with integer arithmetic and explain why integer paise is suitable for storing money in a SmartCard transport system.

## 2. Comparison of Data Types

| Feature | double | long long (Paise) |
|---|---|---|
| Stores | Approximate decimal values | Exact whole-number values within its range |
| Example | ₹0.10 | 10 paise |
| Rounding errors | Possible | Avoided for paise-based amounts |
| Suitable for money | Requires careful rounding | Suitable for exact paise calculations |
| Decimal fractions | Supported approximately | Must be converted into integer paise |

## 3. Example Program

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double amount = 0.1 + 0.2;

    long long firstAmountPaise = 10;
    long long secondAmountPaise = 20;
    long long totalPaise = firstAmountPaise + secondAmountPaise;

    cout << setprecision(17);
    cout << "Using double: " << amount << '\n';
    cout << "Using integer paise: " << totalPaise << " paise\n";

    return 0;
}
```

## 4. Expected Output

On common IEEE 754 systems, the output is typically:

```text
Using double: 0.30000000000000004
Using integer paise: 30 paise
```

The exact floating-point display can depend on the implementation, but the example commonly demonstrates that 0.1 and 0.2 cannot both be represented exactly as binary floating-point values.

## 5. Analysis
Floating-point types such as `double` represent many decimal fractions approximately. Repeated calculations can introduce small rounding differences.

Using integer paise avoids these binary floating-point errors for amounts that are exact multiples of one paise. For example, 10 paise plus 20 paise gives exactly 30 paise.

However, integer calculations must still check for overflow, and amounts smaller than one paise require an explicit rounding or precision policy.

## 6. Complexity Analysis
- Time Complexity: O(1).
- Auxiliary Space Complexity: O(1).

## 7. Conclusion
For a transport fare system, storing money as integer paise using `long long` is a suitable approach because balance updates and fare deductions remain exact at paise precision, provided overflow is avoided.
