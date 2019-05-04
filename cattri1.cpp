#include <iostream>
using namespace std;
void cattri2(int a, int b, int c);

int main()
{
    int t;
    int a, b, c;

    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> a >> b >> c;
        cattri2(a, b, c);
    }
    return 0;
}

void cattri2(int a, int b, int c){
    if(a + b <= c) 
        cout << 0 << endl;
    else if(a==b && b==c) 
        cout << 1 << endl;
    else if( a*a + b*b == c*c)
        cout << 2 << endl;
    else if(a==b || b==c)
        cout << 3 << endl;
    else 
        cout << 4 << endl;
}