#include <iostream>
#include <vector>
#include <functional>

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

        

    std::cout << positivo << " " << negativo << endl;

}


int main() {

    vector<int> arr;
    arr.push_back(1);    
    arr.push_back(1);    
    arr.push_back(-1);    

    plusMinus(arr);

    return 0;
}