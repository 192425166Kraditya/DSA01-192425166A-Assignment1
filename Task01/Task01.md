# Task 01 – Object-Oriented Analysis

## 1. Introduction
A smart transport system manages passenger journeys, travel zones, fares, and smart card balances. Object-oriented programming organizes these components into classes and objects.

## 2. Identification of Objects

| Object | Purpose |
|---|---|
| Journey | Stores trip details, including source and destination. |
| SmartCard | Stores card information and available balance. |
| Passenger | Represents a person using the transport system. |
| Zone | Represents a transport area used for fare calculation. |

## 3. Why Is Journey an Object?
A Journey is an object because each trip has its own source, destination, and fare. Keeping these details together makes the program easier to organize and maintain. Different journeys can have different fares depending on their destinations.

## 4. Why Is SmartCard an Object?
A SmartCard is an object because it stores information such as the card number and balance and supports operations such as checking the balance and deducting the fare. This keeps payment-related data and operations together.

## 5. Advantages of Object-Oriented Design
- Improves code organization.
- Supports encapsulation of data.
- Allows multiple journeys and smart cards to be managed independently.
- Makes future changes easier.

## 6. Time Complexity
Simple fare calculation and balance checking take O(1) time when they involve a fixed number of operations.

## 7. Conclusion
Representing Journey and SmartCard as objects makes the smart transport system modular, easier to maintain, and easier to extend.
