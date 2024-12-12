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
        ArrayList<String> res = new ArrayList<String>();
        for (String arr : lst) {
            int n = (int) Arrays.stream(arr.split("")).filter(d -> Integer.parseInt(d) % 2 == 1).count();
            res.add("the number of odd elements " + n + "n the str"+ n +"ng "+ n +" of the "+ n +"nput.");
        }
        return res;
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
std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> res;
    for (std::string arr : lst) {
        int n = (int) Arrays.stream(arr.split("")).filter(d -> Integer.parseInt(d) % 2 == 1).count();
        res.push_back("the number of odd elements " + n + "n the str"+ n +"ng "+ n +" of the "+ n +"nput.");
    }
    return res;
}

#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cassert>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstdio>