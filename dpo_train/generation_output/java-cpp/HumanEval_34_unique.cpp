### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> unique(ArrayList<Long> l) {
        return new ArrayList<Long>(new HashSet<Long>(l));
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
std::vector<long> unique(std::vector<long> l) {
    std::vector<long> v;
    std::unordered_map<long, long> m;
    std::unordered_set<long> s;
    std::unordered_map<long, long> m2;
    std::unordered_set<long> s2;
    for(long i=0; i<l.size(); i++) {
        if(m.find(l[i])==m.end()) {
            m[l[i]]=i;
            v.push_back(l[i]);
        }
    }
    for(long i=0; i<l.size(); i++) {
        if(s.find(l[i])==s.end()) {
            s.insert(l[i]);
            m2[l[i]]=i;
        }
    }
    for(long i=0; i<l.size(); i++) {
        if(m2.find(l[i])==m2.end()) {
            m2[l[i]]=i;
            s2.insert(l[i]);
        }
    }
    for(long i=0; i<l.size(); i++) {
        if(s2.find(l[i])==s2.end()) {
            s2.insert(l[i]);
        }
    }
    for(long i=0; i<l.size(); i++) {
        if(m2.find(l[i])==m2.end()) {
            m2[l[i]]=i;
        }
    }
    for(long i=0; i<l.size(); i++) {
        if(s2.find(l[i])==s2.end()) {
            s2.insert(l[i]);
        }
    }
    for(long i=0; i<l.size(); i++) {
        if(m2.find(l[i])==m2.end()) {
            m2[l[i]]=i;
        }
    }
    for(long i=0; i<l.size(); i++) {
        if(s2.find(l[i])==s2.end()) {
            s2.insert(l[i]);
        }
    }
    for(long i=0; i<l.size(); i++) {
        if(m2.find(l[i])==m2.end()) {
            m2[l[i]]=i;
        }
    }
    for(long i=0; i<l.size(); i++) {
        if(s2.find(l[i])==s2.end()) {
            s2.insert(l[i]);
        }
    }
    for(long i=0; i<l.size(); i++) {
        if(m2.find(l[i])==m2.end()) {
            m2[l[i]]=i;
        }
    }
    for(long i=0; i<l.size(); i++) {
        if(s2.find(l[i])==s2.end()) {
            s2.insert(l[i]);
        }
    }
    for(long i=0; i<l.size(); i++) {
        if(m2.find(l[i])==m2.end()) {
            m2[l[i]]=i;
        }
    }
    for(long