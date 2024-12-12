### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> parseMusic(String music_string) {
        HashMap<String, Long> note_map = new HashMap<String, Long>() {{
            put("o", 4L);
            put("o|", 2L);
            put(".|", 1L);
        }};
        return Arrays.stream(music_string.split(" ")).filter(x -> !x.isEmpty()).map(x -> note_map.get(x)).collect(Collectors.toCollection(ArrayList::new));
    }
    
    

}


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

