#include <iostream>


using namespace std;


class Solution {
public:
    int strStr(string haystack, string needle) {

        for(int i = 0; i < haystack.size(); i++) {
            if(haystack[i] == needle[0]) {                
                if(i + needle.size() > haystack.size())
                    return -1;

                bool flag = true;
                for(int j = 0; j < needle.size(); j++) {
                    if(haystack[i + j] != needle[j]) {
                        flag = false;
                    }
                }

                if(flag)
                    return i;

            }
        }

        return -1;
    }
};

int main() {

    Solution s;
    // int out = s.strStr("mississippi", "issi");
    // int exp = 1;

    // cout << out << endl << exp << endl;

    // int out = s.strStr("baabbbbababbbabab", "abbab");
    // int exp = 1;

    int out = s.strStr("a", "a");
    int exp = 0;


    cout << out << endl << exp << endl;

    return 0;
}