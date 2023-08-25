#include <iostream>
#include <vector>
#include <algorithm> // std::min_element
#include <iterator>  // std::begin, std::end

using namespace std;

void miniMaxSum(vector<int> arr) {
    auto minimo = min_element(begin(arr), end(arr));
    auto maximo = max_element(begin(arr), end(arr));

    bool skiped = false;
    long somadorMinimo = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == *maximo && !skiped) {
            skiped = true;
            continue;
        }

        somadorMinimo += arr[i];
    }

    skiped = false;
    long somadorMaximo = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == *minimo && !skiped) {
            skiped = true;
            continue;
        }

        somadorMaximo += arr[i];
    }

    // assert(somadorMinimo == 2181931615);
    // assert(somadorMaximo == 2894274113);

    cout << somadorMinimo << " ";
    cout << somadorMaximo << endl;

}

int main() {

    vector<int> v;

    v.push_back(254961783);
    v.push_back(604179258);
    v.push_back(462517083);
    v.push_back(967304281);
    v.push_back(860273491);

    miniMaxSum(v);

    return 0;
}