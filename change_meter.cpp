#include <iostream>
using namespace std;
#define M 3.3058;

int main(void)
{
    double m;
    double pyung;
    cout << "������ �������� ������ �Է��Ͻÿ�:"; 
    cin >> m;
    pyung = m/M;
    cout << fixed;
    cout.precision(2);
    cout << m << "�������ʹ� " << pyung << "���Դϴ�.";
}