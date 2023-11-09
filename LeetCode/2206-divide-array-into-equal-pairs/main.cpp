#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        if(nums.size() % 2 != 0)
            return false;

        for(int i = 0; i < nums.size() - 1; i = i+2) {
            if(nums[i] != nums[i+1])
                return false;
        }

        return true;      
    }
};

int main() {

    return 0;
}