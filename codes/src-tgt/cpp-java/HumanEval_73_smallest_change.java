### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long smallest_change(std::vector<long> arr) {
    long ans = 0;
    for (long i = 0; i < arr.size() / 2; i++) {
        if (arr[i] != arr[arr.size() - i - 1]) {
            ans++;
        }
    }
    return ans;
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
    public static long smallestChange(ArrayList<Long> arr) {
        long ans = 0;
        for (int i = 0; i < arr.size() / 2; i++) {
            if (arr.get(i) != arr.get(arr.size() - i - 1)) {
                ans++;
            }
        }
        return ans;
    }
    

}

