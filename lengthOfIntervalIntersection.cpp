#include <iostream>
using namespace std;
int lengthOfIntervalIntersection(int a, int b, int c, int d);

int main(void)
{
    int t;
    int a, b, c, d;

    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c >> d;
        cout << lengthOfIntervalIntersection( a, b, c, d ) << endl;
    }
    return 0;
}

int lengthOfIntervalIntersection(int a, int b, int c, int d)
{
    int answer;
    if(d == a)
        answer = 0;
    else if(c == b)
        answer = 0;
    else if(d < a)
        answer = -1;
    else if(b < c)
        answer = -1;
    else if( a <= c)
    {
        if( d < b)
            answer = d-c;
        else
            answer = b-c;
    }
    else
    {
        if(d <= b)
            answer = d-a;
        else
            answer = b-a;
    }
    return answer;
}