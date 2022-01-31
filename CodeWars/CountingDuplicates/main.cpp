#include <iostream>
#include <map>
#include <assert.h>
#include <algorithm>

using namespace std;

size_t duplicateCount(const std::string& in); // helper for tests

// std::size_t duplicateCount(const char* in) {
//   std::unordered_map<char, unsigned> counts;
//   for (const char* c = in; *c != '\0'; ++c) {
//     ++counts[tolower(*c)];
//   }
//   return std::count_if(cbegin(counts), cend(counts), [](const auto& count) {
//       return count.second > 1;
//     });
// }

size_t duplicateCount(const char* in)
{
    map<char, int> oc;
    string sin(in);
    for_each(sin.begin(), sin.end(), [&](const char ch){
        oc[tolower(ch)]++; 
    });

    int max = 0;
    for_each(oc.begin(), oc.end(), [&](pair<char, int> e){
        if(e.second > 1) {
            max++;
        }
    });


    return max;
}


int main() {


    assert(duplicateCount("aabbcde") == 2);

    return 0;    
}