#include <iostream>
using namespace std;

int main(void)
{
    double m;
    double pyung;
    const double M = 3.3058;
    cout << "������ �������� ������ �Է��Ͻÿ�:"; 
    cin >> m;
    pyung = m/M;
    cout << fixed;
    cout.precision(2);
    cout << m << "�������ʹ� " << pyung << "���Դϴ�.";
}