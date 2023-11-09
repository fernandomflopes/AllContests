#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int diagonalDifference(vector<vector<int>> arr) {

    int size = arr.size();
    int d1 = 0;
    int d2 = 0;

    for(int i = 0; i < size; i++) {
        d1 = arr[i][i] + d1;
        d2 = arr[i][(size - 1) - i] + d2;
    }


    return abs(d1 - d2);
}


int main() {



    return 0;
}