#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> n;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == val)
                continue;
            n.push_back(nums[i]);
        }

        nums.clear();

        for(int i = 0; i < n.size(); i++)
            nums.push_back(n[i]);
        

        return nums.size();
    }
};


int main() {

    Solution s;

    vector<int> v;
    v.push_back(1);
    v.push_back(2);   


    s.removeElement(v, 1);

    return 0;
}