#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Customer {
public:
    string name;
    string accountNumber;
    double balance;

    Customer(string n, string accNum, double bal) {
        name = n;
        accountNumber = accNum;
        balance = bal;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " successfully.\n";
    }

    bool withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn " << amount << " successfully.\n";
            return true;
        } else {
            cout << "Insufficient balance!\n";
            return false;
        }
    }

    bool transfer(Customer &receiver, double amount) {
        if (withdraw(amount)) {
            receiver.deposit(amount);
            cout << "Transferred " << amount << " to " << receiver.name << endl;
            return true;
        }
        return false;
    }
};

class Bank {
    vector<Customer> customers;

    Customer* findCustomer(string accNum) {
        for (auto &c : customers) {
            if (c.accountNumber == accNum)
                return &c;
        }
        return nullptr;
    }

public:
    void createAccount(string name, string accNum, double initialBalance) {
        customers.push_back(Customer(name, accNum, initialBalance));
        cout << "Account created for " << name << " with account number " << accNum << endl;
    }

    void deposit(string accNum, double amount) {
        Customer* c = findCustomer(accNum);
        if (c)
            c->deposit(amount);
        else
            cout << "Account not found.\n";
    }

    void withdraw(string accNum, double amount) {
        Customer* c = findCustomer(accNum);
        if (c)
            c->withdraw(amount);
        else
            cout << "Account not found.\n";
    }

    void transfer(string senderAcc, string receiverAcc, double amount) {
        Customer* sender = findCustomer(senderAcc);
        Customer* receiver = findCustomer(receiverAcc);
        if (sender && receiver) {
            sender->transfer(*receiver, amount);
        } else {
            cout << "Sender or receiver account not found.\n";
        }
    }

    void viewAccount(string accNum) {
        Customer* c = findCustomer(accNum);
        if (c)
            c->displayInfo();
        else
            cout << "Account not found.\n";
    }
};

int main() {
    Bank bank;
    int choice;
    string name, accNum, accNum2;
    double amount;

    while (true) {
        cout << "\n--- BANKING SYSTEM MENU ---\n";
        cout << "1. Create Account\n2. Deposit\n3. Withdraw\n4. Transfer\n5. View Account\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter customer name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter account number: ";
                cin >> accNum;
                cout << "Enter initial balance: ";
                cin >> amount;
                bank.createAccount(name, accNum, amount);
                break;
            case 2:
                cout << "Enter account number: ";
                cin >> accNum;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                bank.deposit(accNum, amount);
                break;
            case 3:
                cout << "Enter account number: ";
                cin >> accNum;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                bank.withdraw(accNum, amount);
                break;
            case 4:
                cout << "Enter your account number: ";
                cin >> accNum;
                cout << "Enter receiver's account number: ";
                cin >> accNum2;
                cout << "Enter amount to transfer: ";
                cin >> amount;
                bank.transfer(accNum, accNum2, amount);
                break;
            case 5:
                cout << "Enter account number: ";
                cin >> accNum;
                bank.viewAccount(accNum);
                break;
            case 6:
                cout << "Thank you for using the banking system!\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}