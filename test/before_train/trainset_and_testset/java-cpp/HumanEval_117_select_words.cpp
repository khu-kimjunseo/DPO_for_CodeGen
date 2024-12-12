#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> select_words(std::string s, long n) {
    std::vector<std::string> result;
    std::regex r("[aeiouAEIOU]");
    std::smatch m;
    std::regex_search(s, m, r);
    if (m.size() == 0) {
        return result;
    }
    std::string word = m.str(0);
    long n_consonants = 0;
    for (int i = 0; i < word.length(); i++) {
        if (!"aeiouAEIOU".contains(String.valueOf(word.charAt(i)))) {
            n_consonants++;
        }
    }
    if (n_consonants == n) {
        result.push_back(word);
    }
    return result;
}
int main() {
    auto candidate = select_words;
    assert(candidate(("Mary had a little lamb"), (4)) == (std::vector<std::string>({(std::string)"little"})));
    assert(candidate(("Mary had a little lamb"), (3)) == (std::vector<std::string>({(std::string)"Mary", (std::string)"lamb"})));
    assert(candidate(("simple white space"), (2)) == (std::vector<std::string>()));
    assert(candidate(("Hello world"), (4)) == (std::vector<std::string>({(std::string)"world"})));
    assert(candidate(("Uncle sam"), (3)) == (std::vector<std::string>({(std::string)"Uncle"})));
    assert(candidate((""), (4)) == (std::vector<std::string>()));
    assert(candidate(("a b c d e f"), (1)) == (std::vector<std::string>({(std::string)"b", (std::string)"c", (std::string)"d", (std::string)"f"})));
}
