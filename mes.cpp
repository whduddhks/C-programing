#include <iostream>
using namespace std;

//int mode;
void message()
{
    cout << "전역 공간 안의 message()" << endl;
}

namespace Graphics{
    int mode;
    int x,y;
    void draw() { cout << "Graphics 이름 공간 안의 draw()" << endl;};
    void message() { cout << "Graphics 이름 공간 안의 message()" << endl;};
}

using namespace Graphics;

int main()
{
   

    mode = 1;   //이거 안됨
    cout << type(mode) << endl;

    Graphics::message();
    ::message();
    
    return 0;
}