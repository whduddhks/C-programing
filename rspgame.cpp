#include <iostream>
using namespace std;
#include <ctime>

int main(void)
{
    int user;
    int com;

    cout << "����,����,�� ������ �����մϴ�.";
    cout << "�ϳ��� �����ϼ���( ����-0, ����-1, ��-2): ";
    cin >> user;

    srand((unsigned int)time(NULL));
    com = rand()%3;

    cout << "����� = " << user << endl;
    cout << "��ǻ�� = " << com << endl;

    if(user-com == 0)
        cout << "���º�!";
    else if(user-com == -1)
        cout << "��ǻ�� ��!";
    else if( user-com == 2)
        cout << "��ǻ�� ��!";
    else
        cout << "����� ��!";
}