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
        ArrayList<Long> res = new ArrayList<>();
        String[] parts = music_string.split("\\|");
        for (String part : parts) {
            long note = Long.parseLong(part);
            res.add(note);
        }
        return res;
    }
}

class Solution {
    public static void main(String[] args) {
        long[] music = Problem.parseMusic("C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C:\\Users\\joe\\Desktop\\Music\\C