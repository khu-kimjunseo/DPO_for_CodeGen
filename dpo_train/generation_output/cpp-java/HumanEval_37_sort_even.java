### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> sort_even(std::vector<long> l) {
    std::vector<long> evens;
    for(int i=0;i<l.size();i+=2) evens.push_back(l[i]);
    std::vector<long> odds;
    for(int i=1;i<l.size();i+=2) odds.push_back(l[i]);
    std::sort(evens.begin(), evens.end());
    std::vector<long> ans;
    for(int i=0;i<odds.size();i++) {
        ans.push_back(evens[i]);
        ans.push_back(odds[i]);
    }
    if(evens.size() > odds.size()) ans.push_back(evens[evens.size()-1]);
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
    public static ArrayList<Long> sortEven(ArrayList<Long> l) {
        ArrayList<Long> ans = new ArrayList<>();
        for(int i=0;i<l.size();i++) {
            if(l.get(i)%2==0) ans.add(l.get(i));
        }
        return ans;
    }
}

class Solution {
    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long[] a = new long[n];
        for(int i=0;i<n;i++) a[i] = in.nextLong();
        long[] b = new long[n];
        for(int i=0;i<n;i++) b[i] = in.nextLong();
        long[] c = new long[n];
        for(int i=0;i<n;i++) c[i] = in.nextLong();
        long[] d = new long[n];
        for(int i=0;i<n;i++) d[i] = in.nextLong();
        long[] e = new long[n];
        for(int i=0;i<n;i++) e[i] = in.nextLong();
        long[] f = new long[n];
        for(int i=0;i<n;i++) f[i] = in.nextLong();
        long[] g = new long[n];
        for(int i=0;i<n;i++) g[i] = in.nextLong();
        long[] h = new long[n];
        for(int i=0;i<n;i++) h[i] = in.nextLong();
        long[] i = new long[n];
        for(int i=0;i<n;i++) i[i] = in.nextLong();
        long[] j = new long[n];
        for(int i=0;i<n;i++) j[i] = in.nextLong();
        long[] k = new long[n];
        for(int i=0;i<n;i++) k[i] = in.nextLong();
        long[] l = new long[n];
        for(int i=0;i<n;i++) l[i] = in.nextLong();
        long[] m = new long[n];
        for(int i=0;i<n;i++) m[i] = in.nextLong();
        long[] n = new long[n];
        for(int i=0;i<n;i++) n[i] = in.nextLong();
        long[] o = new long[n];
        for(int i=0;i<n;i++) o[i] = in.nextLong();
        long[] p = new long[n];
        for(