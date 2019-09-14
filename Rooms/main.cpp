#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    const int smallRoomPrice {25};
    const int largeRoomPrice {35};
    const double taxRate {0.06};
    const int estimateValidPeriod {30}; //days

    cout << "How many small rooms do you want cleaned ?" << endl;
    int smallRoomsAmount {0};
    cin >> smallRoomsAmount;

    cout << "How many large rooms do you want cleaned ?" << endl;
    int largeRoomsAmount {0};
    cin >> largeRoomsAmount;

    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << smallRoomsAmount << endl;
    cout << "Number of large rooms: " << largeRoomsAmount << endl;
    cout << "Price per small room: $" << smallRoomPrice << endl;
    cout << "Price per large room: $" << largeRoomPrice << endl;

    int total {smallRoomPrice * smallRoomsAmount + largeRoomPrice * largeRoomsAmount};
    cout << "Cost: $" << total << endl;

    double tax {total * taxRate};
    cout << "Tax: $" <<  tax << endl;

    cout << "=============================" << endl;
    cout << "Total estimate: $" <<  tax + total << endl;
    cout << "This estimate is valid for " << estimateValidPeriod << " days." << endl;

    return 0;
}