#include <iostream>
using namespace std;

int main(){
    int angka [2][2] = {
        {7 , 1},
        {4 , 8}

    };
        int angka2 [2][2] = {
        {5 , 2},
        {8 , 3}

    };
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            cout<<angka[i][j]+angka2[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
