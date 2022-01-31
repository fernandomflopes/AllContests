#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <assert.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string revs;
        string ns;

        for(int i = 0; i < s.length(); i++) {
            if(!ispunct(s[i]) && s[i] != ' ')
                ns += tolower(s[i]);
        }

        revs = ns;
        reverse(revs.begin(), revs.end());
        
        return revs == ns;
    }
};


int main() {

    Solution solver;
    // cout << solver.isPalindrome("A man a plan a canal Panama");
    assert(solver.isPalindrome("A man, a plan, a canal: Panama") == 1);

    return 0;
}