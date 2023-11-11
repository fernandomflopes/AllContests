#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;

        for(int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }

        nums.clear();
        for(auto i : s) {
            nums.push_back(i);
        }

        return nums.size(); // Retorna o tamanho atual do vetor
    }
};


int main() {

    Solution s;
    vector<int> v;

    v.push_back(10);
    v.push_back(1);
    v.push_back(22);

    s.removeDuplicates(v);

    return 0;
}