#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> res;
    for (auto arr : lst) {
        int n = std::count_if(arr.begin(), arr.end(), [](char c){return c%2==1;});
        res.push_back("the number of odd elements " + std::to_string(n) + "n the str"+ std::to_string(n) +"ng "+ std::to_string(n) +" of the "+ std::to_string(n) +"nput.");
    }
    return res;
}
