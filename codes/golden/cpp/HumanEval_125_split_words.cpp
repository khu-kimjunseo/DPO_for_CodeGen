#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
union Union_std_vector_std_string__long{
    std::vector<std::string> f0;
    long f1;    Union_std_vector_std_string__long(std::vector<std::string> _f0) : f0(_f0) {}
    Union_std_vector_std_string__long(long _f1) : f1(_f1) {}
    ~Union_std_vector_std_string__long() {}
    bool operator==(std::vector<std::string> f) {
        return f0 == f ;
    }    bool operator==(long f) {
        return f1 == f ;
    }
};
Union_std_vector_std_string__long split_words(std::string txt) {
    if (txt.find(" ") != std::string::npos) {
        std::vector<std::string> result;
        std::stringstream ss(txt);
        std::string word;
        while (ss >> word) {
            result.push_back(word);
        }
        return result;
    } else if (txt.find(",") != std::string::npos) {
        std::vector<std::string> result;
        std::stringstream ss(txt);
        std::string word;
        while (getline(ss, word, ',')) {
            result.push_back(word);
        }
        return result;
    } else {
        long count = 0;
        for (char c : txt) {
            if (islower(c) && c % 2 == 0) {
                count++;
            }
        }
        return count;
    }
}
int main() {
    auto candidate = split_words;
    assert(candidate(("Hello world!")) == std::vector<std::string>({(std::string)"Hello", (std::string)"world!"}));
    assert(candidate(("Hello,world!")) == std::vector<std::string>({(std::string)"Hello", (std::string)"world!"}));
    assert(candidate(("Hello world,!")) == std::vector<std::string>({(std::string)"Hello", (std::string)"world,!"}));
    assert(candidate(("Hello,Hello,world !")) == std::vector<std::string>({(std::string)"Hello,Hello,world", (std::string)"!"}));
    assert(candidate(("abcdef")) == 3);
    assert(candidate(("aaabb")) == 2);
    assert(candidate(("aaaBb")) == 1);
    assert(candidate(("")) == 0);
}
