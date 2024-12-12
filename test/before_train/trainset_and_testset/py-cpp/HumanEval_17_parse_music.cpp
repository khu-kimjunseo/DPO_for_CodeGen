#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> parse_music(std::string music_string) {
    std::vector<long> result;
    std::stringstream ss(music_string);
    std::string line;
    while (std::getline(ss, line)) {
        result.push_back(parse_music(line));
    }
    return result;
}
int main() {
    auto candidate = parse_music;
    assert(candidate(("")) == (std::vector<long>()));
    assert(candidate(("o o o o")) == (std::vector<long>({(long)4, (long)4, (long)4, (long)4})));
    assert(candidate((".| .| .| .|")) == (std::vector<long>({(long)1, (long)1, (long)1, (long)1})));
    assert(candidate(("o| o| .| .| o o o o")) == (std::vector<long>({(long)2, (long)2, (long)1, (long)1, (long)4, (long)4, (long)4, (long)4})));
    assert(candidate(("o| .| o| .| o o| o o|")) == (std::vector<long>({(long)2, (long)1, (long)2, (long)1, (long)4, (long)2, (long)4, (long)2})));
}
