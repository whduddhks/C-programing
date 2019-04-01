#include <iostream>
using namespace std;
int Findday(int year);

int main(void)
{
int t;
int year;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> year;
        cout << Findday( year ) << endl;
    }
    return 0;
}

int Findday(int year)
{
    int answer = 0;
    int num = 0;
    int day = 5;

    for(int i=1582; i<year; i++)
    {
        if(i%4 == 0)
        {
            num = 2;
            if(i%100 == 0)
            {
                num = 1;
                if(i%400 == 0)
                    num = 2;
            }
        }
        else
            num = 1;
        
        day += num;
        day = (day)%7;
    }
    
    answer = day;

    return answer;
}