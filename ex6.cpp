#include <iostream>
using namespace std;
void createOddArray(int** ptr, int size);

int main() {
    int *arr = NULL;
    createOddArray(&arr, 10);
    delete[] arr;
    return 0;
}

void createOddArray(int** ptr, int size){
    *ptr = new int[size];
    for(int i=0, num=0; i < size; ++num){
        if(num%2 == 1) {
            (*ptr)[i] = num;
            cout << (*ptr)[i] << endl;
            i++;
        }
        else
            continue;
    }
}