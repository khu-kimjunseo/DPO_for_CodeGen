### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long can_arrange(std::vector<long> arr) {
    long ind=-1;
    long i=1;
    while (i<arr.size()) {
      if (arr[i]<arr[i-1]) {
        ind=i;
      }
      i+=1;
    }
    return ind;
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
    public static long canArrange(ArrayList<Long> arr) {
        long ind = -1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr.get(i) < arr.get(i-1)) {
                ind = i;
            }
        }
        return ind;
    }
    

}

