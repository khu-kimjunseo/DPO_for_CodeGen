### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> filterBySubstring(ArrayList<String> strings, String substring) {
        return strings.stream().filter(x -> x.contains(substring)).collect(Collectors.toCollection(ArrayList::new));
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
std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
  std::vector<std::string> result;
  for (auto x : strings) {
    if (x.find(substring) != std::string::npos) {
      result.push_back(x);
    }
  }
  return result;
}

