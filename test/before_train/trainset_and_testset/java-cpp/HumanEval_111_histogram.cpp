#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::map<std::string,long> histogram(std::string test) {
    std::map<std::string,long> dict1=new std::map<std::string,long>();
    std::vector<std::string> list1=test.split(" ");
    long t=0;
    for(std::string i:list1) {
        if(Collections.frequency(list1,i)>t && !i.equals("")) {
            t=Collections.frequency(list1,i);
        }
    }
    if(t>0) {
        for(std::string i:list1) {
            if(Collections.frequency(list1,i)==t) {
                dict1.put(i,t);
            }
        }
    }
    return dict1;
}
int main() {
    auto candidate = histogram;
    assert(candidate(("a b b a")) == (std::map<std::string,long>({{"a", 2}, {"b", 2}})));
    assert(candidate(("a b c a b")) == (std::map<std::string,long>({{"a", 2}, {"b", 2}})));
    assert(candidate(("a b c d g")) == (std::map<std::string,long>({{"a", 1}, {"b", 1}, {"c", 1}, {"d", 1}, {"g", 1}})));
    assert(candidate(("r t g")) == (std::map<std::string,long>({{"r", 1}, {"t", 1}, {"g", 1}})));
    assert(candidate(("b b b b a")) == (std::map<std::string,long>({{"b", 4}})));
    assert(candidate(("r t g")) == (std::map<std::string,long>({{"r", 1}, {"t", 1}, {"g", 1}})));
    assert(candidate(("")) == (std::map<std::string,long>()));
    assert(candidate(("a")) == (std::map<std::string,long>({{"a", 1}})));
}
