### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long fruit_distribution(std::string s, long n) {
    std::vector<int> lis;
    std::stringstream ss(s);
    std::string word;
    while(ss >> word) {
        if(std::regex_match(word, std::regex("\\d+"))) {
            lis.push_back(std::stoi(word));
        }
    }
    return n - std::accumulate(lis.begin(), lis.end(), 0);
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
    public static long fruitDistribution(String s, long n) {
        long sum = 0;
        for (String i : s.split(" ")) {
            if (i.matches("\\d+")) {
                sum += Long.parseLong(i);
            }
        }
        return n - sum;
    }
    

}

