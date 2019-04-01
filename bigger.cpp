#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    cout << "3개의 정수를 입력하세요: ";
    cin >> a >> b >> c;

    int bigger = a;
    if( (a<b) && (c<b))
        bigger = b;
    else if( (a<c)&&(b<c))
        bigger = c;

    cout << "가장 큰 정수는 " << bigger << "이다.";
}