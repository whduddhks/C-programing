#include <iostream>
using namespace std;
#include <cmath>
int main(void)
{
    int x1, y1;
    int x2, y2;
    double distance;
    cout << "첫번째 점(x1, y1):";
    cin >> x1 >> y1;
    cout << "두번째 점(x2, y2):";
    cin >> x2 >> y2;

    distance = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    cout << fixed;
    cout.precision(6);
    cout << "Distance = " << distance;
}