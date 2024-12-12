### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string exchange(std::vector<long> lst1, std::vector<long> lst2) {
    int odd = 0;
    int even = 0;
    for (auto i : lst1) {
        if (i%2 == 1) {
            odd++;
        }
    }
    for (auto i : lst2) {
        if (i%2 == 0) {
            even++;
        }
    }
    if (even >= odd) {
        return "YES";
    }
    return "NO";
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
    public static String exchange(ArrayList<Long> lst1, ArrayList<Long> lst2) {
        long odd = lst1.stream().filter(i -> i % 2 == 1).count();
        long even = lst2.stream().filter(i -> i % 2 == 0).count();
        return even >= odd ? "YES" : "NO";
    }
    

}

