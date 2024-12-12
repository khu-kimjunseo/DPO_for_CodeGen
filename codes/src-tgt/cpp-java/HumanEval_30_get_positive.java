### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> get_positive(std::vector<long> l) {
    std::vector<long> res;
    for(auto e : l) {
        if(e > 0) {
            res.push_back(e);
        }
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
    public static ArrayList<Long> getPositive(ArrayList<Long> l) {
        return (ArrayList<Long>) l.stream().filter(e -> e > 0).collect(Collectors.toList());
    }
    

}

