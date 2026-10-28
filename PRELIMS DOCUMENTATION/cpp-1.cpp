#include <iostream>
#include <string>
using namespace std;

int main()
{
    string item1, item2, item3;
    float price1, price2, price3;
    float total, payment, change;

    cout << "Enter Item 1: ";
    cin >> item1;
    cout << "Enter Price: ";
    cin >> price1;

    cout << "\nEnter Item 2: ";
    cin >> item2;
    cout << "Enter Price: ";
    cin >> price2;

    cout << "\nEnter Item 3: ";
    cin >> item3;
    cout << "Enter Price: ";
    cin >> price3;

    total = price1 + price2 + price3;

    cout << "\nTotal Amount: ";
    cout << total;

    cout << "\nEnter Payment: ";
    cin >> payment;

    change = payment - total;

    cout << "\n\n----- TRANSACTION -----";
    cout << "\nItem 1: " << item1 << " - " << price1;
    cout << "\nItem 2: " << item2 << " - " << price2;
    cout << "\nItem 3: " << item3 << " - " << price3;
    cout << "\nTotal: " << total;
    cout << "\nPayment: " << payment;
    cout << "\nChange: " << change;

    return 0;
}
