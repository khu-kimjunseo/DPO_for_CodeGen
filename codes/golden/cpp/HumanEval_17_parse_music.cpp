#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> parse_music(std::string music_string) {
  std::map<std::string, long> note_map = {{"o", 4}, {"o|", 2}, {".|", 1}};
  std::vector<long> res;
  std::istringstream iss(music_string);
  std::string note;
  while (iss >> note) {
    if (note_map.count(note)) {
      res.push_back(note_map[note]);
    }
  }
  return res;
}
int main() {
    auto candidate = parse_music;
    assert(candidate(("")) == (std::vector<long>()));
    assert(candidate(("o o o o")) == (std::vector<long>({(long)4, (long)4, (long)4, (long)4})));
    assert(candidate((".| .| .| .|")) == (std::vector<long>({(long)1, (long)1, (long)1, (long)1})));
    assert(candidate(("o| o| .| .| o o o o")) == (std::vector<long>({(long)2, (long)2, (long)1, (long)1, (long)4, (long)4, (long)4, (long)4})));
    assert(candidate(("o| .| o| .| o o| o o|")) == (std::vector<long>({(long)2, (long)1, (long)2, (long)1, (long)4, (long)2, (long)4, (long)2})));
}
