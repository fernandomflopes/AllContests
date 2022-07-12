#include <iostream>
#include <sstream>
#include <vector>
#include <limits>
#include <map>
#include <algorithm>

using namespace std;

vector<string> inputToVector() {
    vector<string> outV;

    string str, nStr;

    getline(cin, str);

    istringstream iss(str, istringstream::in);
    while( iss >> nStr) {
        outV.push_back(nStr);
    }

    return outV;
}

void print(vector<string> v) {
    for(string s : v) {
        cout << s << " ";
    }
    cout << endl;
}

int main() {
    
    int ct;

    cin >> ct;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(ct > 0) {
        map<int, vector<string>> dic;
        vector<string> outVector = inputToVector();
        vector<int> size;

        for(string s: outVector) {
            dic[s.size()].push_back(s);
        }

        for(auto const& el: dic) {
            size.push_back(el.first);
        }

        reverse(size.begin(), size.end());
        string strOut;
        for(int i : size) {
            vector<string> vv = dic[i];
            for(string ss: vv) {
                strOut.append(ss + " ");
            }
        }
        
        cout << strOut.substr(0, strOut.size() - 1) << endl;
        
        ct--;
    }

    return 0;
}