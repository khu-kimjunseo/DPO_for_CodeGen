#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> res;
    for (std::string arr : lst) {
        int n = (int) Arrays.stream(arr.split("")).filter(d -> Integer.parseInt(d) % 2 == 1).count();
        res.push_back("the number of odd elements " + n + "n the str"+ n +"ng "+ n +" of the "+ n +"nput.");
    }
    return res;
}
int main() {
    auto candidate = odd_count;
    assert(candidate((std::vector<std::string>({(std::string)"1234567"}))) == (std::vector<std::string>({(std::string)"the number of odd elements 4n the str4ng 4 of the 4nput."})));
    assert(candidate((std::vector<std::string>({(std::string)"3", (std::string)"11111111"}))) == (std::vector<std::string>({(std::string)"the number of odd elements 1n the str1ng 1 of the 1nput.", (std::string)"the number of odd elements 8n the str8ng 8 of the 8nput."})));
    assert(candidate((std::vector<std::string>({(std::string)"271", (std::string)"137", (std::string)"314"}))) == (std::vector<std::string>({(std::string)"the number of odd elements 2n the str2ng 2 of the 2nput.", (std::string)"the number of odd elements 3n the str3ng 3 of the 3nput.", (std::string)"the number of odd elements 2n the str2ng 2 of the 2nput."})));
}
