### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool will_it_fly(std::vector<long> q, long w) {
    if (std::accumulate(q.begin(), q.end(), 0) > w) {
        return false;
    }
    int i=0, j=q.size()-1;
    while (i<j) {
        if (q[i] != q[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
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
    public static boolean willItFly(ArrayList<Long> q, long w) {
        if(q.stream().mapToLong(Long::longValue).sum() > w) return false;
        int i = 0, j = q.size()-1;
        while(i < j) {
            if(q.get(i) != q.get(j)) return false;
            i++;
            j--;
        }
        return true;
    }
    

}

