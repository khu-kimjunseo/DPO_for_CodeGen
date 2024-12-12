### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::sort(lst.begin(), lst.end());
    std::vector<std::string> new_lst;
    for (auto i:lst) {
        if (i.size()%2 == 0) {
            new_lst.push_back(i);
        }
    }
    std::sort(new_lst.begin(), new_lst.end(), [](std::string a, std::string b){return a.size() < b.size();});
    return new_lst;
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
    public static ArrayList<String> sortedListSum(ArrayList<String> lst) {
        ArrayList<String> new_lst = new ArrayList<>();
        for (auto i:lst) {
            if (i.size()%2 == 0) {
                new_lst.push_back(i);
            }
        }
        return new_lst;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<String> lst = new Solution().sortedListSum(new ArrayList<String>());
        for (auto i:lst) {
            System.out.println(i);
        }
    }
}
