#include <iostream>
using namespace std;

int main(void)
{
    int money;
    int price;
    int exchange;
    int hun, fifty, ten;
    cout << "������ ��:";
    cin >> money;
    cout << "���ǰ�:";
    cin >> price;
    exchange = money - price;

    hun = exchange/100;
    exchange = exchange%100;
    fifty = exchange/50;
    exchange = exchange%50;
    ten = exchange/10;

    cout << "100�� ���� ����: " << hun << endl;
    cout << "50�� ���� ����: " << fifty << endl;
    cout << "10�� ���� ����: " << ten << endl;
}