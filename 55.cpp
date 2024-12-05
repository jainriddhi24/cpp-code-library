// WAP with class bill. The users have the options to pay the bill either  by cheque or by cash. Use the inheritance to model this situation.
#include <iostream>
#include <string>
using namespace std;

class Bill {
protected:
    double amount;
public:
    Bill(double amt) : amount(amt) {}
    virtual void payBill() = 0; 
};

class ChequePayment : public Bill {
private:
    string chequeNumber;
public:
    ChequePayment(double amt, string chequeNo) : Bill(amt), chequeNumber(chequeNo) {}
    void payBill() override {
        cout << "Bill of amount " << amount << " paid by cheque.\n";
        cout << "Cheque Number: " << chequeNumber << endl;
    }
};

class CashPayment : public Bill {
public:
    CashPayment(double amt) : Bill(amt) {}
    void payBill() override {
        cout << "Bill of amount " << amount << " paid by cash.\n";
    }
};

int main() {
    double amount;
    int choice;
    cout << "Enter the bill amount: ";
    cin >> amount;

    cout << "Choose payment method:\n1. Cheque\n2. Cash\n";
    cin >> choice;

    if (choice == 1) {
        string chequeNumber;
        cout << "Enter the cheque number: ";
        cin >> chequeNumber;
        ChequePayment cheque(amount, chequeNumber);
        cheque.payBill();
    } else if (choice == 2) {
        CashPayment cash(amount);
        cash.payBill();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
