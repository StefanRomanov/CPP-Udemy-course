#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    const int dollarValue {100};
    const int quarterValue {25};
    const int dimeValue {10};
    const int nickelValue {5};

    int amount {};

    cout << "Enter amount in cents:" << endl;
    cin >> amount ;

    int dollars = amount / dollarValue;
    amount -= dollars * dollarValue;

    int quarters = amount / quarterValue;
    amount -= quarters * quarterValue;

    int dimes  = amount / dimeValue;
    amount -= dimes * dimeValue;

    int nickels = amount / nickelValue;
    amount -= nickels * nickelValue;

    int cents = amount;

    cout << dollars << endl;
    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickels << endl;
    cout << cents << endl;

    return 0;
}