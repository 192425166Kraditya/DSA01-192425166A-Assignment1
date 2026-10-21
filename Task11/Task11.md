# Task 11 – Testing and Validation

## 1. Objective
The objective is to validate the SmartCard transport system by checking fare calculations, balance updates, invalid inputs, and travel eligibility.

## 2. Testing Procedure
1. Initialize the SmartCard with a known balance.
2. Enter or specify a fare.
3. Check whether the fare is valid.
4. Verify whether the balance is sufficient.
5. Deduct the fare if travel is permitted.
6. Compare the actual output with the expected output.

## 3. Validation Test Table

Assumption: Initial balance = 5000 paise.

| Test ID | Input / Condition | Expected Result | Status |
|---|---|---|---|
| TV01 | Fare = 2000 paise | Travel permitted; balance = 3000 paise | To be tested |
| TV02 | Fare = 5000 paise | Travel permitted; balance = 0 paise | To be tested |
| TV03 | Fare = 5001 paise | Travel rejected | To be tested |
| TV04 | Fare = -100 paise | Invalid fare rejected | To be tested |
| TV05 | Input = `abc` | Invalid input message | To be tested |
| TV06 | Balance = 0, fare = 100 | Travel rejected | To be tested |

## 4. Input Validation
The program should reject non-numeric input using `cin.fail()`. After detecting invalid input, it should stop safely or clear the input stream and request valid input.

Negative balances and negative fares should also be rejected.

## 5. Expected vs Actual Results
The expected output is calculated manually before running the program. The actual output is obtained by compiling and executing the C++ program. Each test should be marked **Pass** if the actual result matches the expected result; otherwise, it should be marked **Fail** and investigated.

## 6. Complexity Analysis
- Fare validation: O(1).
- Balance update: O(1).
- Input validation for one input value: O(1), assuming a fixed-size numeric input.

## 7. Conclusion
Testing normal, boundary, and invalid conditions helps ensure the transport system handles payments safely. The test table should be updated with actual results after executing the program.
