#include <iostream>
using namespace std;

int morehalf(int* parr, int n);

int main(void)
{
    int t;
    int u;
    int v;
    
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> u;
        int arr[u];
        for ( int j=0; j<u; j++)
        {
            cin >> v;
            arr[j] = v;
        }
        cout << morehalf(arr, sizeof(arr)/sizeof(int)) << endl;
    }
    return 0;
}

int morehalf(int* parr, int n)
{
    int Elected;
    int sum=0;

    for(int i=0; i<n; i++)
    {
        sum += parr[i];
    }

    for(int j=0; j<n; j++)
    {
        if(sum/2 < parr[j])
        {
            Elected = j+1;
            break;
        }
        else
            Elected = 0;
        
    }

    return Elected;
}