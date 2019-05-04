#include <iostream>
using namespace std;


int main()
{
    int t;
    int ax1, ax2, ay1, ay2;
    int bx1, bx2, by1, by2;

    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> ax1 >> ay1 >> ax2 >> ay2 >> bx1 >> by1 >> bx2 >> by2;
        if(ax1==ax2){
            if((ax1-bx1)*(ax1-bx2)<0 && (by1-ay1)*(by1-ay2)<0) 
                cout << 1 << endl;
            else if((ax1-bx1)*(ax1-bx2)>0 || (by1-ay1)*(by1-ay2)>0) 
                cout << 0 << endl;
            else 
                cout << 2<< endl;
        }
        else if(ay1==ay2){
            if((bx1-ax1)*(bx1-ax2)<0 && (ay1-by1)*(ay1-by2)<0) 
                cout << 1 << endl;
            else if((bx1-ax1)*(bx1-ax2)>0 || (ay1-by1)*(ay1-by2)>0) 
                cout << 0 << endl;
            else 
                cout << 2 << endl;
        }
    }

    return 0;
}
