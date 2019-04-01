#include <iostream>
using namespace std;
int NumOfZero(int* parr, int n);

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
        cout << NumOfZero(arr, sizeof(arr)/sizeof(int)) << endl;
    }
    return 0;
}

int NumOfZero(int* parr, int n)
{
    int two = 0;
    int five = 0;
    int num;
    int answer;
    for(int i=0; i<n; i++)
    {
        num = parr[i];
        while(num%2 == 0)
        {
            num = num/2;
            two += 1;
        }
        while(num%5 == 0)
        {
            num = num/5;
            five += 1;
        }
    }
    if(two < five)
        answer = two;
    else
        answer = five;
    
    return answer;
}