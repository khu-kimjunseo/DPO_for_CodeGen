### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> filterByPrefix(ArrayList<String> strings, String prefix) {
        return (ArrayList<String>)strings.stream().filter(s -> s.startsWith(prefix)).collect(Collectors.toList());
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
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> res;
    for (auto x: strings) {
        if (x.find(prefix) == 0) {
            res.push_back(x);
        }
    }
    return res;
}

