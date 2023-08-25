#include <iostream>
#include <functional>
#include <vector>

using namespace std;


int birthdayCakeCandles(vector<int> candles) {
    
    auto maxn = max_element(candles.begin(), candles.end());
    auto ct = count_if(candles.begin(), candles.end(), [maxn](int i){
        return i == *maxn;
    });

    return ct;
}


int main() {

    vector<int> v;
    v.push_back(4);
    v.push_back(40);
    v.push_back(1);

    cout << birthdayCakeCandles(v);

    return 0;
}