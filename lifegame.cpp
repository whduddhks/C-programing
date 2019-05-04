#include <iostream>
using namespace std;
void lifegame(int b[], int n, int k);

int main()
{
    int t;
    int n, k, num;

    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> n >> k;
        int *board = new int[n];
        for(int j=0; j<n; j++){
            cin >> num;
            board[j] = num;
        }
        lifegame(board, n, k);
        delete board;
    }
    return 0;
}

void lifegame(int b[], int n, int k){
    int *newboard = new int[n];
    for(int i=0; i<k; i++){
        for(int j=0; j<n; j++){
            if(j==0){
                if(b[j+1]==3)
                   newboard[j] = b[j];
                else if(b[j+1]<3 || b[j+1]>7){
                    if(b[j] != 0)
                        newboard[j] = b[j] - 1;
                    else
                        newboard[j] = b[j];
                }
                else{
                    if(b[j] != 9)
                        newboard[j] = b[j] + 1;
                    else
                        newboard[j] = b[j];
                }
            }
            else if(j==n-1){
                if(b[j-1]==3)
                    newboard[j] = b[j];
                else if(b[j-1]<3 || b[j-1]>7){
                    if(b[j] != 0)
                        newboard[j] = b[j] - 1;
                    else
                        newboard[j] = b[j];
                }
                else{
                    if(b[j] != 9)
                        newboard[j] = b[j] + 1;
                    else
                        newboard[j] = b[j];
                }
            }
            else{
                if((b[j-1] + b[j+1])==3)
                    newboard[j] = b[j];
                else if((b[j-1]+b[j+1])<3 || (b[j-1]+b[j+1])>7){
                    if(b[j] != 0)
                        newboard[j] = b[j] - 1;
                    else
                        newboard[j] = b[j];
                }
                else{
                    if(b[j] != 9)
                        newboard[j] = b[j] + 1;
                    else
                        newboard[j] = b[j];
                }
            }
        }
        for(int i=0; i<n; i++){
            b[i] = newboard[i];
        }
    }
    for(int i=0; i<n; i++){
        cout << b[i] << " ";
    }
    cout << endl;
}