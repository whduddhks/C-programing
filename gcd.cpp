#include <iostream>
using namespace std;

int main(void)
{
    int a,b;
    int tmp, n;
    cout << "�� ���� ������ �Է��Ͻÿ�: ";
    cin >> a >> b;

    if(a < b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    while(b != 0)
    {
        n=a%b;
        a=b;
        b=n;
    }

    cout << "�ִ������� " << a << "�Դϴ�.";
}