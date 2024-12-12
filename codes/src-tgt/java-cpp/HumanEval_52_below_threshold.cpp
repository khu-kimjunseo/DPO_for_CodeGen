### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean belowThreshold(ArrayList<Long> l, long t) {
        for (long e : l) {
            if (e >= t) {
                return false;
            }
        }
        return true;
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
bool below_threshold(std::vector<long> l, long t) {
    for (auto e: l) {
        if (e >= t) {
            return false;
        }
    }
    return true;
}

