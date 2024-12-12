### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> strange_sort_list(std::vector<long> lst) {
    std::vector<long> res;
    bool switch_ = true;
    while (lst.size()) {
        res.push_back(switch_ ? *std::min_element(lst.begin(), lst.end()) : *std::max_element(lst.begin(), lst.end()));
        lst.erase(std::find(lst.begin(), lst.end(), res.back()));
        switch_ = !switch_;
    }
    return res;
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
    public static ArrayList<Long> strangeSortList(ArrayList<Long> lst) {
        ArrayList<Long> res = new ArrayList<>();
        boolean switch_ = true;
        while (!lst.isEmpty()) {
            res.add(switch_ ? Collections.min(lst) : Collections.max(lst));
            lst.remove(res.get(res.size() - 1));
            switch_ = !switch_;
        }
        return res;
    }
    

}

