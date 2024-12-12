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
        for(int i = 0; i < s.length(); i++) {
            sum += (long)s.charAt(i) - (long)s.charAt(i - 1);
        }
        return n - sum;
    }
}

class Solution {
    public static void main(String[] args) {
        long n = Long.parseLong(args[0]);
        long m = Long.parseLong(args[1]);
        long d = Long.parseLong(args[2]);
        long n1 = Problem.fruitDistribution(args[3], n);
        long n2 = Problem.fruitDistribution(args[4], n);
        long n3 = Problem.fruitDistribution(args[5], n);
        long n4 = Problem.fruitDistribution(args[6], n);
        long n5 = Problem.fruitDistribution(args[7], n);
        long n6 = Problem.fruitDistribution(args[8], n);
        long n7 = Problem.fruitDistribution(args[9], n);
        long n8 = Problem.fruitDistribution(args[10], n);
        long n9 = Problem.fruitDistribution(args[11], n);
        long n10 = Problem.fruitDistribution(args[12], n);
        long n11 = Problem.fruitDistribution(args[13], n);
        long n12 = Problem.fruitDistribution(args[14], n);
        long n13 = Problem.fruitDistribution(args[15], n);
        long n14 = Problem.fruitDistribution(args[16], n);
        long n15 = Problem.fruitDistribution(args[17], n);
        long n16 = Problem.fruitDistribution(args[18], n);
        long n17 = Problem.fruitDistribution(args[19], n);
        long n18 = Problem.fruitDistribution(args[20], n);
        long n19 = Problem.fruitDistribution(args[21], n);
        long n20 = Problem.fruitDistribution(args[22], n);
        long n21 = Problem.fruitDistribution(args[23], n);
        long n22 = Problem.fruitDistribution(args[24], n);
        long n23 = Problem.fruitDistribution(args[25], n);
        long n24 = Problem.fruitDistribution(args[26], n);
        long n25 = Problem.fruitDistribution(args[27], n);
        long n26 = Problem.fruitDistribution(args[28], n);
        long n27 = Problem.fruitDistribution(args[29], n);
        long n28 = Problem.fruitDistribution(args[30], n);
        long n29 = Problem.fruitDistribution(args[31], n);
        long n30 = Problem.fruitDistribution(args[32], n);
        long n31 = Problem.fruitDistribution(args[33], n);
        long n32 = Problem.fruitDistribution(args[34], n);
        long n33 = Problem.fruitDistribution(args[35], n);
        long n34 = Problem.fruitDistribution(args[36], n);
        long n35 = Problem.fruitDistribution(args[37], n);
        long n36 = Problem