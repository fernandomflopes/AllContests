#include <iostream>
#include <vector>

using namespace std;

std::string likes(const std::vector<std::string> &names)
{
    string out;
    
    if(names.size() == 0) {
        out = "no one likes this";
    } else if(names.size() == 1) {
        out = names[0] + " likes this";
    } else if (names.size() == 2) {
        out = names[0] + " and " + names[1] + " likes this";
    } else if(names.size() == 3){
        out = names[0] + ", " + names[1] + " and " + names[2] + " like this";
    } else {
        out = names[0] + ", " + names[1] + " and " + to_string(names.size() - 2) + " others like this";
    }

    return out;
}

int main() {

      

    return 0;
}