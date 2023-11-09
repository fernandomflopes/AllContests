#include <iostream>

using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        uint16_t ct[128] = {0};

        for(int i = 0; i < s.length(); i++) {
            ct[(int) s[i]]++;
            if(ct[(int) s[i]] >= 2) 
                return s[i];
        }

        return 'a';        
    }
};

int main() {

    Solution s;
    cout << s.repeatedCharacter("abccbaacz") << endl;    

    return 0;
}