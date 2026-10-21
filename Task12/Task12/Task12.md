# Task 12 – Design Extension: Airport Zone and Weekend Discount

## 1. Objective
To extend the existing SmartCard transport system by adding a fourth zone, Airport, and introducing a weekend fare discount.

## 2. Changes Implemented
- Added `Airport` to the `Zone` enumeration.
- Extended fare calculation to handle journeys involving the Airport.
- Added a function to calculate the discounted fare.
- Continued using integer paise for monetary calculations.

## 3. Design Evaluation
The original three-zone design can be extended by adding another enumeration value and additional fare cases. However, nested switch statements require more changes whenever new zones are introduced.

A more scalable design would use a fare table or a dedicated fare-calculation class. Weekend discount rules could also be placed in a separate function or policy class.

## 4. Testing

| Test | Expected Result |
|---|---|
| Airport journey on a weekday | Full fare |
| Airport journey on a weekend | Discounted fare |
| Same source and destination | Zero fare |
| Invalid zone combination | Invalid journey |
| Negative fare | Rejected |

## 5. Complexity Analysis
- Fare lookup: O(1) for a fixed number of zones.
- Discount calculation: O(1).
- Auxiliary space: O(1).

## 6. Conclusion
The transport system can support an additional Airport zone and weekend discounts with limited changes. Separating fare lookup and discount calculation improves modularity. For a larger transport network, a fare table and configurable discount rules would reduce code changes and improve maintainability.

**Note:** Update test results after running the program. Fare values and discount percentages must match the assignment specification.
