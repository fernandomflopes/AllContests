#include <iostream>
#include <algorithm>
#include <vector>
#include <assert.h>

using namespace std;

class Kata
{
public:
    std::vector<int> sortArray(vector<int> array)
    {
        vector<int> odd;
        copy_if(array.begin(), array.end(), back_inserter(odd), [](int i){
            return i % 2 > 0;
        });

        sort(odd.begin(), odd.end());
        int indexOdd = 0;
        for(unsigned int i = 0; i < array.size(); i++) {
            if(array[i] % 2 > 0) {
                array[i] = odd[indexOdd++];            
            }
        }    
 
        return array;
    }
};

int main() {

    //std::vector<int> expected = { 1, 3, 5, 8, 0 };
    Kata kata;
    std::vector<int> actual = kata.sortArray({ 5, 3, 1, 8, 0 });
 
    return 0;
}