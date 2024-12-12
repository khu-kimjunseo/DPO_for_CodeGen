### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> incrList(ArrayList<Long> l) {
        return l.stream().map(e -> e + 1).collect(Collectors.toCollection(ArrayList::new));
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
std::vector<long> incr_list(std::vector<long> l) {
  std::vector<long> res;
  for (auto e : l) {
    res.push_back(e + 1);
  }
  return res;
}

