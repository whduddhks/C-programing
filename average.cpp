#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    int average;
    cout << "정수를 입력하시요:"; 
    cin >> a; 
    cout << "정수를 입력하시요:"; 
    cin >> b;
    cout << "정수를 입력하시요:"; 
    cin >> c; 
    
    average = (a+b+c)/3;
    cout << average << endl;
    
    return 0;
}