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
#include<unordered_map>
#include<unordered_set>
long search(std::vector<long> lst) {
    std::vector<long>::iterator it = lst.begin();
    std::vector<long>::iterator end = lst.end();
    std::vector<long>::iterator it2 = it;
    std::vector<long>::iterator end2 = it2;
    std::vector<long>::iterator it3 = it;
    std::vector<long>::iterator end3 = it2;
    std::vector<long>::iterator it4 = it;
    std::vector<long>::iterator end4 = it2;
    std::vector<long>::iterator it5 = it;
    std::vector<long>::iterator end5 = it2;
    std::vector<long>::iterator it6 = it;
    std::vector<long>::iterator end6 = it2;
    std::vector<long>::iterator it7 = it;
    std::vector<long>::iterator end7 = it2;
    std::vector<long>::iterator it8 = it;
    std::vector<long>::iterator end8 = it2;
    std::vector<long>::iterator it9 = it;
    std::vector<long>::iterator end9 = it2;
    std::vector<long>::iterator it10 = it;
    std::vector<long>::iterator end10 = it2;
    std::vector<long>::iterator it11 = it;
    std::vector<long>::iterator end11 = it2;
    std::vector<long>::iterator it12 = it;
    std::vector<long>::iterator end12 = it2;
    std::vector<long>::iterator it13 = it;
    std::vector<long>::iterator end13 = it2;
    std::vector<long>::iterator it14 = it;
    std::vector<long>::iterator end14 = it2;
    std::vector<long>::iterator it15 = it;
    std::vector<long>::iterator end15 = it2;
    std::vector<long>::iterator it16 = it;
    std::vector<long>::iterator end16 = it2;
    std::vector<long>::iterator it17 = it;
    std::vector<long>::iterator end17 = it2;
    std::vector<long>::iterator it18 = it;
    std::vector<long>::iterator end18 = it2;
    std::vector<long>::iterator it19 = it;
    std::vector<long>::iterator end19 = it2;
    std::vector<long>::iterator it20 = it;
    std::vector<long>::iterator end20 = it2;
    std::vector<long>::iterator it21 = it;
    std::vector<long>::iterator end21 = it2;
    std::vector<long>::iterator it22 = it;
    std::vector<long>::iterator end22 = it2;
    std::vector<long>::iterator it23 = it;
    std::vector<long>::iterator end23 = it2;
    std::vector<long>::iterator it24 = it;
    std::vector<long>::iterator end24 =