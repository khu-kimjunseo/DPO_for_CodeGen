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
        ArrayList<Long> res = new ArrayList<>();
        for (int i = 0; i < xs.size(); ++i) {
            res.add(i * xs[i]);
        }
        return res;
    }
}

class Solution {
    public static void main(String[] args) throws Exception {
        ArrayList<Long> xs = new ArrayList<>();
        for (int i = 0; i < 100; ++i) {
            xs.add(i);
        }
        System.out.println(Problem.derivative(xs));
    }
}
