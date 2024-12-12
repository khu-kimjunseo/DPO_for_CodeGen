### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> tri(long n) {
        if (n == 0) {
            return new ArrayList<Long>(Arrays.asList(1L));
        }
        ArrayList<Long> my_tri = new ArrayList<Long>(Arrays.asList(1L, 3L));
        for (int i = 2; i <= n; i++) {
            long term = i % 2 == 0 ? i / 2 + 1 : my_tri.get(i - 1) + my_tri.get(i - 2) + (i + 3) / 2;
            my_tri.add(term);
        }
        return my_tri;
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
std::vector<long> tri(long n) {
    if (n == 0) {
        return {1};
    }
    std::vector<long> my_tri = {1, 3};
    for (long i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            my_tri.push_back(i / 2 + 1);
        } else {
            my_tri.push_back(my_tri[i - 1] + my_tri[i - 2] + (i + 3) / 2);
        }
    }
    return my_tri;
}

