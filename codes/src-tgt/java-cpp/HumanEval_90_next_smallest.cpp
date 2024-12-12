### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<Long> nextSmallest(ArrayList<Long> lst) {
        return lst.stream().sorted().distinct().skip(1).findFirst();
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
std::optional<long> next_smallest(std::vector<long> lst) {
    std::sort(lst.begin(), lst.end());
    lst.erase(std::unique(lst.begin(), lst.end()), lst.end());
    return lst.size() < 2 ? std::nullopt : std::make_optional(lst[1]);
}

