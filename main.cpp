#include <iostream>
using namespace std;

int main()
{
    string customername;
    int phonemodel;
    int quantity;
    float phoneprice;
    float totalsale;

    cout << "Enter customer name: ";
    cin >> customername;

    cout << "Enter phone model: ";
    cin >> phonemodel;

    cout << "Quantity bought: ";
    cin >> quantity;

    cout << "Phone price: ";
    cin >> phoneprice;

    totalsale = quantity * phoneprice;

    cout <<"=================================== ====================="<< endl;
    cout << "Customer name: " << customername << endl;
    cout << "Phone model: " << phonemodel << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Phone price: " << phoneprice << endl;
    cout << "Total sale: " << totalsale << endl;

    return 0;
}
