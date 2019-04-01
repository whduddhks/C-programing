#include <iostream>
using namespace std;
#include <ctime>

int main(void)
{
    int user;
    int com;

    cout << "가위,바위,보 게임을 시작합니다.";
    cout << "하나를 선택하세요( 가위-0, 바위-1, 보-2): ";
    cin >> user;

    srand((unsigned int)time(NULL));
    com = rand()%3;

    cout << "사용자 = " << user << endl;
    cout << "컴퓨터 = " << com << endl;

    if(user-com == 0)
        cout << "무승부!";
    else if(user-com == -1)
        cout << "컴퓨터 승!";
    else if( user-com == 2)
        cout << "컴퓨터 승!";
    else
        cout << "사용자 승!";
}