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
std::vector<long> filter_integers(std::vector<std::any> values) {
    std::vector<long> res;
    for (auto x : values) {
        if (x.type() == typeid(int)) {
            res.push_back(std::any_cast<int>(x));
        }
    }
    return res;
}

