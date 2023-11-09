#include <iostream>


using namespace std;

class Solution1 {
public:
    int firstUniqChar(string s) {
        int ct[128] = {0};

        for(int i = 0; i < s.length(); i++) {
            ct[(int)s[i]]++;
        }

        for(int i = 0; i < s.length(); i++) {
            if(ct[(int)s[i]] == 1)
                return i;
        }

        
        return -1;
    }
};

#define SIZE_DC ((int)'z' - (int) 'a') + 1

class Solution2 {
public:
    int firstUniqChar(string s) {
        uint8_t ct[SIZE_DC] = {0};

        for(int i = 0; i < s.length(); i++) {
            ct[(int)s[i] - 'a' ]++;
        }

        for(int i = 0; i < s.length(); i++) {
            if(ct[((int)s[i]) - 'a'] == 1)
                return i;
        }

        
        return -1;
    }
};


int main() {

    Solution2 s;
    cout << s.firstUniqChar("aaabbccz") << endl;

    return 0;
}