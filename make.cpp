#include <iostream>
#include <string>
using namespace std;

class Car {
    int speed;
    int gear;
    char *color;
public:
    Car(int s, int g, char *c)
    {
        speed = s;
        gear = g;
        color = new  char[strlen(c)+1];
        strcpy(color, c);
    }
    ~Car(){
        delete[] color;
    }
};
int main()
{
    Car c1(0, 1, "yellow");
    return 0;
}