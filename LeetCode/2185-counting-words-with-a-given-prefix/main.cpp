#include <iostream>

using namespace std;

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        uint16_t ct = 0;
        for(int w = 0; w < words.size(); w++) {
            if(words[w][0] == pref[0]) {
                bool ok = true;
                for(int i = 0; i < pref.size(); i++) {
                    if(words[w][i] != pref[i]) {
                        ok = false;
                        break;
                    }
                }
                if(ok) {
                    ct++;
                }
            }
        }        

        return ct;
    }
};

int main() {


    return 0;
}