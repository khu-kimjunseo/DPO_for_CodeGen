### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> make_a_pile(long n) {
    std::vector<long> ans;
    for(long i=0;i<n;i++) {
        ans.push_back(n+2*i);
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
    public static ArrayList<Long> makeAPile(long n) {
        ArrayList<Long> ans = new ArrayList<>();
        for(long i=0;i<n;i++) {
            ans.add(n+2*i);
        }
        return ans;
    }
    public static ArrayList<Long> makeAPile(long n, long m) {
        ArrayList<Long> ans = new ArrayList<>();
        for(long i=0;i<n;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<m;i++) {
            ans.add(n+2*i);
        }
        return ans;
    }
    public static ArrayList<Long> makeAPile(long n, long m, long k) {
        ArrayList<Long> ans = new ArrayList<>();
        for(long i=0;i<n;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<m;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<k;i++) {
            ans.add(n+2*i);
        }
        return ans;
    }
    public static ArrayList<Long> makeAPile(long n, long m, long k, long l) {
        ArrayList<Long> ans = new ArrayList<>();
        for(long i=0;i<n;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<m;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<k;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<l;i++) {
            ans.add(n+2*i);
        }
        return ans;
    }
    public static ArrayList<Long> makeAPile(long n, long m, long k, long l, long m2) {
        ArrayList<Long> ans = new ArrayList<>();
        for(long i=0;i<n;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<m;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<k;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<l;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<m2;i++) {
            ans.add(n+2*i);
        }
        return ans;
    }
    public static ArrayList<Long> makeAPile(long n, long m, long k, long l, long m2, long n2) {
        ArrayList<Long> ans = new ArrayList<>();
        for(long i=0;i<n;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<m;i++) {
            ans.add(n+2*i);
        }
        for(long i=0;i<k;i++) {
            ans.add(n+2