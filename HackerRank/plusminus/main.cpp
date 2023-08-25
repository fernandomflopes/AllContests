#include <iostream>
#include <vector>
#include <functional>
#include <iomanip>

using namespace std;

int counter(vector<int> arr, std::function<bool(int)> func) {
    uint ct = 0;

    for(int i = 0; i < arr.size(); i++) {

        if(func(arr[i])) {
            ct++;
        }
    }

    return ct;
}

void plusMinus(vector<int> arr) {

    int positivo = counter(arr, [](int i){
        return i > 0;
    });

    int negativo = counter(arr, [](int i) {
        return i < 0;
    });

    int zero = counter(arr, [](int i) {
        return i == 0;
    });    

    double div = arr.size();

    std::cout << setprecision(6) << fixed << positivo / div << endl;
    std::cout << setprecision(6) << fixed << negativo / div << endl;
    std::cout << setprecision(6) << fixed << zero / div << endl;

}


int main() {

    vector<int> arr;
    arr.push_back(1);    
    arr.push_back(1);    
    arr.push_back(0);    
    arr.push_back(-1);    
    arr.push_back(-1);    

    plusMinus(arr);

    return 0;
}