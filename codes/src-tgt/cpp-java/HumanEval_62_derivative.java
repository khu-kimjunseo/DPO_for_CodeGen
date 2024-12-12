### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> derivative(std::vector<long> xs) {
  std::vector<long> res;
  for (int i = 1; i < xs.size(); ++i) {
    res.push_back(i * xs[i]);
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
    public static ArrayList<Long> derivative(ArrayList<Long> xs) {
        return IntStream.range(1, xs.size()).mapToObj(i -> i * xs.get(i)).collect(Collectors.toCollection(ArrayList::new));
    }
    

}

