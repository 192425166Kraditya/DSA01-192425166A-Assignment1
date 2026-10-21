# Task 09 – Test Cases and Validation

## 1. Objective
The objective is to test the SmartCard transport system under different conditions and verify that fare deduction and travel eligibility work correctly.

## 2. Test Cases

Assumptions: Initial balance is 5000 paise, and the fare is 2000 paise.

| Test ID | Initial Balance (paise) | Fare (paise) | Expected Result |
|---|---:|---:|---|
| TC01 | 5000 | 2000 | Travel permitted; balance becomes 3000 paise |
| TC02 | 2000 | 2000 | Travel permitted; balance becomes 0 paise |
| TC03 | 1999 | 2000 | Travel rejected due to insufficient balance |
| TC04 | 0 | 2000 | Travel rejected due to insufficient balance |
| TC05 | 5000 | 0 | Travel permitted if zero fare is allowed |
| TC06 | 5000 | -2000 | Invalid fare rejected |
| TC07 | -100 | 2000 | Invalid balance rejected |
| TC08 | 5000 | 6000 | Travel rejected due to insufficient balance |

## 3. Boundary Value Analysis
Boundary value analysis checks values near important limits.

- Balance one paise below the fare: travel should be rejected.
- Balance exactly equal to the fare: travel should be permitted.
- Balance one paise above the fare: travel should be permitted.
- Negative fare: the system should reject it.
- Zero balance: the system should not allow travel when the fare is positive.

## 4. Example Test
Initial balance = 5000 paise  
Fare = 2000 paise

Remaining balance = 5000 − 2000 = 3000 paise.

Expected result: Travel permitted.

## 5. Complexity Analysis
For each test, balance validation and fare deduction require O(1) time and O(1) auxiliary space.

## 6. Conclusion
Testing normal values, boundary values, and invalid values helps verify that the SmartCard system handles fare deduction safely. Expected results should be compared with actual program outputs before submission.
