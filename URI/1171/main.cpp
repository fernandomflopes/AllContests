#include <iostream>
#include <map>


using namespace std;

int main() {
    
    
    map<int, int> m;
    int n, ct;
    
    cin >> ct;

    while(ct > 0) {
        cin >> n;
        m[n]++;

        ct--;
    }

    for(auto i : m) {
        cout << i.first << " aparece " << i.second << " vez(es)" << endl;
    }

    return 0;
}