#include <iostream>
using namespace std;

int reverseNumber(int n);

int main(void)
{
    int t;
    int n;

    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> n;
        cout << reverseNumber(n) << endl;
    }

    return 0;
}

int reverseNumber(int n)
{
    int number=n;
    int reverse=0;
    double len=0.1;
    int num;
    
    while(number!=0)
    {
            number = number/10;
            len = len*10;
    }
    
    while(true)
    {
        num = n%10;
        reverse += num*len;
        len = len/10;
        n = n/10;
        if(n == 0)
            break;
    }

    return reverse;
}