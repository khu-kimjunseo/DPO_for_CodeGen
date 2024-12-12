### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> filterIntegers(ArrayList<Object> values) {
        return values.stream().filter(x -> x instanceof Long).map(x -> (Long) x).collect(Collectors.toCollection(ArrayList::new));
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
#include<unordered_map>
#include<unordered_set>
std::vector<long> filter_integers(std::vector<std::any> values) {
    std::vector<long> result;
    for (auto x : values) {
        if (x instanceof long) {
            result.push_back((long) x);
        }
    }
    return result;
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> filter_strings(std::vector<std::any> values) {
    std::vector<std::string> result;
    for (auto x : values) {
        if (x instanceof std::string) {
            result.push_back((std::string) x);
        }
    }
    return result;
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> filter_strings(std::vector<std::any> values) {
    std::vector<std::string> result;
    for (auto x : values) {
        if (x instanceof std::string) {
            result.push_back((std::string) x);
        }
    }
    return result;
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> filter_strings(std::vector<std::any> values) {
    std::vector<std::string> result;
    for (auto x : values) {
        if (x instanceof std::string) {
            result.push_back((std::string) x);
        }
    }
    return result;
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> filter_strings(std::vector<std::any> values) {
    std::vector<std::string> result;
    for (auto x : values) {
        if (x instanceof std::string) {
            result.push_back((std::string) x);
        }
    }
    return result;
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> filter_strings(std::vector<std::any> values) {
    std::vector<std::string> result;
    for (auto x : values) {
        if (x instanceof std::string) {
            result.push_back((std::string) x);
        }
