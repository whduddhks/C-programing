#include <iostream>
using namespace std;
#define M 3.3058;

int main(void)
{
    double m;
    double pyung;
    cout << "면적을 제곱미터 단위로 입력하시오:"; 
    cin >> m;
    pyung = m/M;
    cout << fixed;
    cout.precision(2);
    cout << m << "제곱미터는 " << pyung << "평입니다.";
}