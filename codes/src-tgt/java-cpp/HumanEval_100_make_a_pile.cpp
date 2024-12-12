### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> makeAPile(long n) {
        return IntStream.range(0, (int) n).mapToObj(i -> n + 2 * i).collect(Collectors.toCollection(ArrayList::new));
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
std::vector<long> make_a_pile(long n) {
    std::vector<long> ans;
    for(long i=0;i<n;i++) {
        ans.push_back(n+2*i);
    }
    return ans;
}

