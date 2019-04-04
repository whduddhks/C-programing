#include <iostream>
using namespace std;
int Dayofyear(int y, int m, int d);

int main(void)
{
    int t;
    int y, m, d;

    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> y >> m >> d;
        cout << Dayofyear(y, m, d) << endl;
    }
    return 0;
}

int Dayofyear(int y, int m, int d)
{
    int day = 0;
    for(int i=1; i<m; i++)
    {
        if(i == 2)
            day += 28;
        else if((i<8&&i%2==1) || (i>=8&&i%2==0))
            day += 31;
        else
            day += 30;
    }

    if((((y%4 == 0)&&(y%100 != 0)) || y%400 == 0)&&m>2) 
    {
        day += 1;
    }
    day += d;
    return day;
}