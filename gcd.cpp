#include <iostream>
using namespace std;

int main(void)
{
    int a,b;
    int tmp, n;
    cout << "두 개의 정수를 입력하시오: ";
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

    cout << "최대공약수는 " << a << "입니다.";
}