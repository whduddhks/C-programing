#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    cout << "3���� ������ �Է��ϼ���: ";
    cin >> a >> b >> c;

    int bigger = a;
    if( (a<b) && (c<b))
        bigger = b;
    else if( (a<c)&&(b<c))
        bigger = c;

    cout << "���� ū ������ " << bigger << "�̴�.";
}