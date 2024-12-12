### Python version

def is_bored(S: str) -> int:
    import re
    sentences = re.split(r'[.?!]\s*', S)
    return sum(sentence[0:2] == 'I ' for sentence in sentences)

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long is_bored(std::string S) {
    std::stringstream ss(S);
    std::string line;
    std::getline(ss, line);
    return is_bored(line);
}

int main() {
    std::string S;
    std::getline(std::cin, S);
    std::vector<std::string> words;
    std::regex rx("[a-zA-Z]");
    std::smatch what;
    std::regex_match(S, what, rx);
    std::stringstream ss(S);
    std::string line;
    while (std::getline(ss, line)) {
        words.push_back(line);
    }
    std::sort(words.begin(), words.end());
    std::vector<std::string>::iterator it = words.begin();
    std::vector<std::string>::iterator it_end = words.end();
    std::vector<std::string>::iterator it_begin = words.begin();
    std::vector<std::string>::iterator it_begin_end = words.end();
    std::vector<std::string>::iterator it_begin_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin = words.begin();
    std::vector<std::string>::iterator it_begin_end_begin_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end_end_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end_end_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end_end_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end_end_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end_end_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end_end_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end_end_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end_end_end_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end_end_end_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end_end_end_end_end = words.end();
    std::vector<std::string>::iterator it_begin_end_begin_end_end_end_end_end_end_end = words.end();
    std::vector<std::string>