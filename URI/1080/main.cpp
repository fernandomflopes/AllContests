#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int ct = 100;
    int n;
    int max, pos;

    vector<int> data;

    while(ct > 0) {

        cin >> n;
        data.push_back(n);

        ct--;
    }

    max = *max_element(data.begin(), data.end());
    pos = distance(data.begin(), max_element(data.begin(), data.end()));
    cout << max << endl << pos + 1 << endl;

    return 0;
}