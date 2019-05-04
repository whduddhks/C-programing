#include <iostream>
using namespace std;
void diashape(int k);

int main(void)
{
    int t;
    int k;

    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> k;
        diashape(k);
    }
    return 0;
}

void diashape(int k){
    int h=k/2;
    int n=1;
    int t =0;
    for(int i=0; i<k; i++){
        if(t==0){
            for(int j=0; j<h; j++)
                cout << '*';
            for(int j=0; j<n; j++)
                cout << '+';
            for(int j=0; j<h; j++)
                cout << '*';
            cout << endl;
            h--;
            n=n+2;
            if(h==-1){    
                t=1;
                h=1;
                n=n-4;
            }
        }
        else{
            for(int j=0; j<h; j++)
                cout << '*';
            for(int j=0; j<n; j++)
                cout << '+';
            for(int j=0; j<h; j++)
                cout << '*';
            cout << endl;
            h++;
            n=n-2;
        }
    }
   
}