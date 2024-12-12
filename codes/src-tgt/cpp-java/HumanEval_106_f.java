### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> f(long n) {
    std::vector<long> ret;
    for(long i=1;i<=n;i++) {
        if(i%2==0) {
            long x=1;
            for(long j=1;j<=i;j++) x*=j;
            ret.push_back(x);
        } else {
            long x=0;
            for(long j=1;j<=i;j++) x+=j;
            ret.push_back(x);
        }
    }
    return ret;
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
    public static ArrayList<Long> f(long n) {
        ArrayList<Long> ret = new ArrayList<Long>();
        for (long i=1; i<=n; i++) {
            if (i%2 == 0) {
                long x = 1;
                for (long j=1; j<=i; j++) x *= j;
                ret.add(x);
            } else {
                long x = 0;
                for (long j=1; j<=i; j++) x += j;
                ret.add(x);
            }
        }
        return ret;
    }
    
    

}

