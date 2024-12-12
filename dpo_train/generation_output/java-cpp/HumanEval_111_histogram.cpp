### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static HashMap<String,Long> histogram(String test) {
        HashMap<String,Long> dict1=new HashMap<String,Long>();
        List<String> list1=Arrays.asList(test.split(" "));
        long t=0;
        for(String i:list1) {
            if(Collections.frequency(list1,i)>t && !i.equals("")) {
                t=Collections.frequency(list1,i);
            }
        }
        if(t>0) {
            for(String i:list1) {
                if(Collections.frequency(list1,i)==t) {
                    dict1.put(i,t);
                }
            }
        }
        return dict1;
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
std::map<std::string,long> histogram(std::string test) {
    std::map<std::string,long> dict1=new std::map<std::string,long>();
    std::vector<std::string> list1=test.split(" ");
    long t=0;
    for(std::string i:list1) {
        if(Collections.frequency(list1,i)>t && !i.equals("")) {
            t=Collections.frequency(list1,i);
        }
    }
    if(t>0) {
        for(std::string i:list1) {
            if(Collections.frequency(list1,i)==t) {
                dict1.put(i,t);
            }
        }
    }
    return dict1;
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cassert>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<