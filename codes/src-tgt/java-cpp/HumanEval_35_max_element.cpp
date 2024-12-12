### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long maxElement(ArrayList<Long> l) {
        long m = l.get(0);
        for (long e : l) {
            m = Math.max(m, e);
        }
        return m;
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
long max_element(std::vector<long> l) {
    long m = l[0];
    for (long e: l) {
        if (e > m) {
            m = e;
        }
    }
    return m;
}

