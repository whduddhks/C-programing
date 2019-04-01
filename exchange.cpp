#include <iostream>
using namespace std;

int main(void)
{
    int money;
    int price;
    int exchange;
    int hun, fifty, ten;
    cout << "투입한 돈:";
    cin >> money;
    cout << "물건값:";
    cin >> price;
    exchange = money - price;

    hun = exchange/100;
    exchange = exchange%100;
    fifty = exchange/50;
    exchange = exchange%50;
    ten = exchange/10;

    cout << "100원 동전 갯수: " << hun << endl;
    cout << "50원 동전 갯수: " << fifty << endl;
    cout << "10원 동전 갯수: " << ten << endl;
}