#include <iostream>
using namespace std;
void cattri2(int ax, int ay, int bx, int by, int cx, int cy);

int main()
{
    int t;
    int ax, ay, bx, by, cx, cy;

    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        cattri2(ax, ay, bx, by, cx, cy);
    }
    return 0;
}

void cattri2(int ax, int ay, int bx, int by, int cx, int cy){
    int a = (cx-bx)*(cx-bx) + (cy-by)*(cy-by);
    int b = (cx-ax)*(cx-ax) + (cy-ay)*(cy-ay);
    int c = (bx-ax)*(bx-ax) + (by-ay)*(by-ay);
    double as = ax/ay;
    double bs = bx/by;
    double cs = cx/cy;
    int temp = c;
    if(a > temp){
        temp = a;
        a = c;
        c = temp;
    }
    if(b > temp){
        temp = b;
        b = c;
        c = temp;
    }
    if( as==bs && bs==cs )
        cout << 0 <<endl;
    else{
        if(a + b < c) 
            cout << 2 << endl;
        else if(a + b == c) 
            cout << 1 << endl;
        else 
            cout << 3 << endl;
    }
}