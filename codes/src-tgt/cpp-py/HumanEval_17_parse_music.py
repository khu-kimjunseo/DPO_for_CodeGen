### C++ version

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


### Python version

from typing import List


def parse_music(music_string: str) -> List[int]:
    note_map = {'o': 4, 'o|': 2, '.|': 1}
    return [note_map[x] for x in music_string.split(' ') if x]
