#include <iostream>
using namespace std;
void sandclock(int k);

int main()
{
    int t;
    int k;

    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> k;
        sandclock(k);
    }
    return 0;
}

void sandclock(int k){
    int h=k/2;
    int t=0;
    for(int i=0; i<(k); i++){
        if(t==0){
            for(int j=0; j<i; j++)
                cout << '-';
            for(int j=0; j<h; j++)
                cout << '*' << '+';
            cout << '*';
            for(int j=0; j<i; j++)
                cout << '-';
            cout << endl;
            h--;
            if(h==0){
                t = 1;
                h = k/2;
            }
        }
        else{
            for(int j=0; j<h; j++)
                cout << '-';
            for(int j=(k/2); j<i; j++)
                cout << '*' << '+';
            cout << '*';
            for(int j=0; j<h; j++)
                cout << '-';
            cout << endl;
            h--;
        }
    }
}