# Task 03 – Numeric Data Types and Precision

## 1. Introduction
Choosing the correct data type is important in C++ because it affects memory usage, range, and calculation accuracy. A transport system must store passenger balances and fares accurately.

## 2. Comparison of Data Types

| Data Type | Purpose | Advantages | Limitations |
|---|---|---|---|
| int | Whole numbers | Simple and efficient | Limited range |
| long long | Large whole numbers | Supports a wider range of integers | Cannot store fractions |
| float | Decimal values | Uses less memory | Lower precision |
| double | Decimal values | Higher precision than float | May introduce rounding errors |

## 3. Why Use Integer Paise for Money?
Money should be stored as an integer number of paise instead of using floating-point values. For example, ₹50 is stored as 5000 paise.

Floating-point values such as `double` cannot represent every decimal fraction exactly. This can cause rounding differences in financial calculations. Integer paise avoids this issue for amounts that are exact multiples of one paise.

## 4. Example

```cpp
#include <iostream>
using namespace std;

int main() {
    long long balancePaise = 5000;
    long long farePaise = 1250;

    balancePaise -= farePaise;

    cout << "Remaining balance: " << balancePaise << " paise\n";
    cout << "Remaining balance: Rs. " << balancePaise / 100.0 << '\n';

    return 0;
}
```

**Output:**
```text
Remaining balance: 3750 paise
Remaining balance: Rs. 37.5
```

## 5. Time and Space Complexity
- Time Complexity: O(1), because the program performs a fixed number of arithmetic operations.
- Auxiliary Space Complexity: O(1), because it uses a fixed number of variables.

## 6. Conclusion
For a transport fare system, storing money as integer paise using `long long` avoids floating-point rounding errors in balance updates. Floating-point types are useful for approximate decimal calculations, but integer arithmetic is preferable for exact monetary amounts.
