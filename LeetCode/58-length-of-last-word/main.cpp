#include <iostream>

using namespace std;

class Solution {
public:
    // int lengthOfLastWord(string s) {
    //     string ss = trim(s);
    //     int ct = 0;
    //     int i = ss.size() - 1;
    //     while(i >= 0 && ss[i] != ' ') {
    //         i--;
    //         ct++;
    //     }

    //     return ct;   
    // }
    int lengthOfLastWord(string s) {
        int ct = 0;
        bool flag = false;

        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == ' ' && flag)
                break;

            if(s[i] == ' ')
                continue;
            else {
                flag = true;
                ct++;                
            }

        }

        return ct;   
    }
private:
    string trim(string s) {
        int i = 0;

        if(s[0] == ' ')
            while (s[++i] == ' ');

        int e = s.size();
        if(s[e] == ' ')
            while(s[e--] == ' ');

        return s.substr(i, e);
    }
};

int main() {

    Solution s; 

    s.lengthOfLastWord("Hello World");

    return 0;
}