### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long search(ArrayList<Long> lst) {
        long[] frq = new long[Collections.max(lst).intValue() + 1];
        lst.stream().forEach(i -> frq[i.intValue()]++);

        long ans = -1;
        for (int i = 1; i < frq.length; i++) {
            if (frq[i] >= i) {
                ans = i;
            }
        }

        return ans;
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
long search(std::vector<long> lst) {
    std::vector<long> frq(*std::max_element(lst.begin(), lst.end()) + 1, 0);
    for (auto i : lst) {
        frq[i]++;
    }
    long ans = -1;
    for (int i = 1; i < frq.size(); i++) {
        if (frq[i] >= i) {
            ans = i;
        }
    }
    return ans;
}

