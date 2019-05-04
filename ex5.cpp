#include <iostream>
using namespace std;

static int g = 10;
void proc(int num){
    static int g = 1;
    cout << g << endl;
    g += num;
    cout << ++g << endl;
}

int main(){
    proc(g++);
    cout << g << endl;
    proc(++g);
    return 0;
}