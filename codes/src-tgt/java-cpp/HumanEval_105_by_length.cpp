### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> byLength(ArrayList<Long> arr) {
        String[] dic = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        ArrayList<Long> sortedArr = (ArrayList<Long>) arr.stream().sorted(Comparator.reverseOrder()).collect(Collectors.toList());
        ArrayList<String> newArr = new ArrayList<String>();
        for (Long var : sortedArr) {
            if (var >= 1 && var <= 9) {
                newArr.add(dic[var.intValue()-1]);
            }
        }
        return newArr;
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
std::vector<std::string> by_length(std::vector<long> arr) {
    std::map<long, std::string> dic = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };
    std::sort(arr.begin(), arr.end(), std::greater<long>());
    std::vector<std::string> new_arr;
    for (auto var: arr) {
        if (dic.count(var)) {
            new_arr.push_back(dic[var]);
        }
    }
    return new_arr;
}

