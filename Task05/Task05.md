# Task 05 – Arithmetic Operators in C++

## 1. Objective
To understand how arithmetic operators work in C++, particularly the modulus operator (%), increment operator (++), and decrement operator (--).

## 2. Arithmetic Operators

| Operator | Meaning | Example | Result |
|---|---|---|---|
| + | Addition | 10 + 5 | 15 |
| - | Subtraction | 10 - 5 | 5 |
| * | Multiplication | 10 * 5 | 50 |
| / | Integer division | 10 / 3 | 3 |
| % | Remainder | 10 % 3 | 1 |
| ++ | Increment | x++ | Increases x by 1 |
| -- | Decrement | x-- | Decreases x by 1 |

## 3. Example Program

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 3;

    cout << "Remainder: " << x % y << '\n';
    cout << "Post-increment: " << x++ << '\n';
    cout << "After increment: " << x << '\n';
    cout << "Pre-increment: " << ++y << '\n';

    return 0;
}
```

## 4. Expected Output

```text
Remainder: 1
Post-increment: 10
After increment: 11
Pre-increment: 4
```

## 5. Explanation
- `x % y` returns the remainder when 10 is divided by 3, which is 1.
- `x++` prints the current value of x and then increments it.
- After post-increment, x becomes 11.
- `++y` increments y first and then prints its new value, 4.

## 6. Complexity Analysis
- Time Complexity: O(1).
- Auxiliary Space Complexity: O(1).

## 7. Conclusion
Arithmetic operators are essential for calculations in C++. Understanding modulus and the difference between pre-increment and post-increment helps prevent output-prediction errors.

**Note:** This example demonstrates the operators. Replace or supplement it with the exact code provided in the assignment question if required.
