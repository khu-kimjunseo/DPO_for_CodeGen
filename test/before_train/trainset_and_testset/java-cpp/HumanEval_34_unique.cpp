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
}
int main() {
    auto candidate = unique;
    assert(candidate((std::vector<long>({(long)5, (long)3, (long)5, (long)2, (long)3, (long)3, (long)9, (long)0, (long)123}))) == (std::vector<long>({(long)0, (long)2, (long)3, (long)5, (long)9, (long)123})));
}