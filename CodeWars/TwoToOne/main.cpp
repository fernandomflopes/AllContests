#include <iostream>
#include <assert.h>
#include <set>

class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2) {
        std::set<char> se;
        se.insert(s1.begin(),s1.end());
        se.insert(s2.begin(),s2.end());
        
        return std::string(se.begin(),se.end());
    }
};

int main() {

    assert(TwoToOne::longest("aretheyhere", "yestheyarehere") == "aehrsty");
    assert(TwoToOne::longest("xyaabbbccccdefww", "xxxxyyyyabklmopq") == "abcdefklmopqwxy");
    assert(TwoToOne::longest("abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxyz") == "abcdefghijklmnopqrstuvwxyz");
    assert(TwoToOne::longest("loopingisfunbutdangerous", "lessdangerousthancoding") == "abcdefghilnoprstu");

    return 0;
}