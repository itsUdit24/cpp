class BankAccount {
    private int balance;  // Private variable (data hiding)

    // Public method to access the balance
    public int getBalance() {
        return balance;
    }

    // Public method to modify the balance
    public void setName(int newBalance) {
        balance = newBalance;
    }
}
public class oop {
    public static void main(String[] args) {
        BankAccount myAccount = new BankAccount();
        myAccount.setName(1000);  // Set balance to 1000
        System.out.println("Balance: " + myAccount.getBalance());  // Access balance
    }
}
// This code demonstrates encapsulation in Java by using private variables and public methods to access and modify them.
// The balance variable is private and cannot be accessed directly from outside the class.
// Instead, public methods getBalance() and setName() are provided to interact with the balance.
// This ensures that the internal state of the BankAccount class is protected from unauthorized access and modification.
// Encapsulation is a fundamental principle of Object-Oriented Programming (OOP) that helps in maintaining data integrity and security.
/*
Output:Balance: 1000
Let's break down the code step by step:

1. **Class Definition**: We define a class named `BankAccount` that has a private variable `balance` to store the account balance.

2. **Getter Method**: The `getBalance()` method is a public method that allows us to retrieve the current balance. It returns the value of the private `balance` variable.

3. **Setter Method**: The `setName(int newBalance)` method is a public method that allows us to modify the balance. It takes an integer parameter `newBalance` and assigns it to the private `balance` variable.

4. **Main Method**: In the `main` method of the `oop` class, we create an instance of `BankAccount` named `myAccount`.

5. **Setting Balance**: We call the `setName(1000)` method on `myAccount` to set the initial balance to 1000.

6. **Getting Balance**: Finally, we call the `getBalance()` method to retrieve the current balance and print it to the console.

This code demonstrates the concept of encapsulation in Java, 
where the internal state of an object is protected from direct access by outside code. 
Instead, public methods are provided to interact with the object's state in a controlled manner.
this is a fundamental principle of Object-Oriented Programming (OOP) that 
helps in maintaining data integrity and security.
*/