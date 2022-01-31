#include <iostream>
#include <map>
#include <string>
#include <assert.h>

std::string duplicate_encoder(const std::string& word){

    std::map<char, int> mmap;
    std::string ret;
    for(int i = 0; i < word.length(); i++) {
        mmap[std::tolower(word[i])]++;
    }
    
    for(int i = 0; i < word.length(); i++) {
        if(mmap[std::tolower(word[i])] == 1) {
            ret = ret + "(";
        } else {
            ret = ret + ")";
        }
    }
    return ret;
}

int main() {

    // assert(duplicate_encoder("din") == "(((");
    // assert(duplicate_encoder("recede") == "()()()");
    // assert(duplicate_encoder("Success") == ")())())");
    // assert(duplicate_encoder("(( @") == "))((");
    assert(duplicate_encoder("CodeWarrior") == "()(((())())");
    
//"(( @"     =>  "))((" 

    return 0;
}