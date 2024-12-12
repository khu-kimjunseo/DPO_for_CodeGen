### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> res;
    for (auto arr : lst) {
        int n = std::count_if(arr.begin(), arr.end(), [](char c){return c%2==1;});
        res.push_back("the number of odd elements " + std::to_string(n) + "n the str"+ std::to_string(n) +"ng "+ std::to_string(n) +" of the "+ std::to_string(n) +"nput.");
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
    public static ArrayList<String> oddCount(ArrayList<String> lst) {
        ArrayList<String> res = new ArrayList<>();
        for (auto arr : lst) {
            int n = std::count_if(arr.begin(), arr.end(), [](char c){return c%2==1;});
            res.push_back("the number of odd elements " + std::to_string(n) + "n the str"+ std::to_string(n) +"ng "+ std::to_string(n) +" of the "+ std::to_string(n) +"nput.");
        }
        return res;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<String> lst = new ArrayList<>();
        lst.add("the number of odd elements " + std::to_string(oddCount(lst)) + "n the str"+ std::to_string(oddCount(lst)) +"ng "+ std::to_string(oddCount(lst)) +" of the "+ std::to_string(oddCount(lst)) +"nput.");
        lst.add("the number of odd elements " + std::to_string(oddCount(lst)) + "n the str"+ std::to_string(oddCount(lst)) +"ng "+ std::to_string(oddCount(lst)) +" of the "+ std::to_string(oddCount(lst)) +"nput.");
        lst.add("the number of odd elements " + std::to_string(oddCount(lst)) + "n the str"+ std::to_string(oddCount(lst)) +"ng "+ std::to_string(oddCount(lst)) +" of the "+ std::to_string(oddCount(lst)) +"nput.");
        lst.add("the number of odd elements " + std::to_string(oddCount(lst)) + "n the str"+ std::to_string(oddCount(lst)) +"ng "+ std::to_string(oddCount(lst)) +" of the "+ std::to_string(oddCount(lst)) +"nput.");
        lst.add("the number of odd elements " + std::to_string(oddCount(lst)) + "n the str"+ std::to_string(oddCount(lst)) +"ng "+ std::to_string(oddCount(lst)) +" of the "+ std::to_string(oddCount(lst)) +"nput.");
        lst.add("the number of odd elements " + std::to_string(oddCount(lst)) + "n the str"+ std::to_string(oddCount(lst)) +"ng "+ std::to_string(oddCount(lst)) +" of the "+ std::to_string(oddCount(lst)) +"nput.");
        lst.add("the number of odd elements " + std::to_string(oddCount(lst)) + "n the str"+ std::to_string(oddCount(lst