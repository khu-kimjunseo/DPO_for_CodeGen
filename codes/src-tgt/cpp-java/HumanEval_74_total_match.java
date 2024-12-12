### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int l1 = 0;
    for (auto st : lst1) {
        l1 += st.size();
    }
    int l2 = 0;
    for (auto st : lst2) {
        l2 += st.size();
    }
    if (l1 <= l2) {
        return lst1;
    } else {
        return lst2;
    }
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
    public static ArrayList<String> totalMatch(ArrayList<String> lst1, ArrayList<String> lst2) {
        int l1 = lst1.stream().mapToInt(String::length).sum();
        int l2 = lst2.stream().mapToInt(String::length).sum();
        return l1 <= l2 ? lst1 : lst2;
    }
    

}

