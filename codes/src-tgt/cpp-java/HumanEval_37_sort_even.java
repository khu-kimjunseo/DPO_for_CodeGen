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
        ArrayList<Long> evens = new ArrayList<Long>();
        ArrayList<Long> odds = new ArrayList<Long>();
        for (int i = 0; i < l.size(); i++) {
            if (i % 2 == 0) {
                evens.add(l.get(i));
            } else {
                odds.add(l.get(i));
            }
        }
        Collections.sort(evens);
        ArrayList<Long> ans = new ArrayList<Long>();
        for (int i = 0; i < evens.size(); i++) {
            ans.add(evens.get(i));
            if (i < odds.size()) {
                ans.add(odds.get(i));
            }
        }
        return ans;
    }
    

}

