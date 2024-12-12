#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string words_in_sentence(std::string sentence) {
    std::vector<std::string> new_lst;
    std::stringstream ss(sentence);
    std::string word;
    while(ss >> word) {
        int flg = 0;
        if(word.size() == 1) {
            flg = 1;
        }
        for(int i = 2; i < word.size(); i++) {
            if(word.size()%i == 0) {
                flg = 1;
            }
        }
        if(flg == 0 || word.size() == 2) {
            new_lst.push_back(word);
        }
    }
    std::string res = "";
    for(int i = 0; i < new_lst.size(); i++) {
        res += new_lst[i];
        if(i != new_lst.size()-1) {
            res += " ";
        }
    }
    return res;
}
int main() {
    auto candidate = words_in_sentence;
    assert(candidate(("This is a test")) == ("is"));
    assert(candidate(("lets go for swimming")) == ("go for"));
    assert(candidate(("there is no place available here")) == ("there is no place"));
    assert(candidate(("Hi I am Hussein")) == ("Hi am Hussein"));
    assert(candidate(("go for it")) == ("go for it"));
    assert(candidate(("here")) == (""));
    assert(candidate(("here is")) == ("is"));
}
