#include <iostream>
using namespace std;

int main(void)
{
    int t;
    int n;

    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> n;
        for(int i=1; i<=n; i++){
            int gap=n-1;
            int num=i+gap;
            cout << i << " ";
            for(int j=1; j<i; j++){
                cout << num << " ";
                gap -= 1;
                num += gap;
            }
            cout << endl;
        }
    }

    return 0;
}
