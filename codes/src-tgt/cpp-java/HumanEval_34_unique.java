### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> unique(std::vector<long> l) {
    std::sort(l.begin(), l.end()); l.erase(std::unique(l.begin(), l.end()), l.end()); return l;
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
    public static ArrayList<Long> unique(ArrayList<Long> l) {
        return new ArrayList<Long>(new HashSet<Long>(l));
    }
    

}

