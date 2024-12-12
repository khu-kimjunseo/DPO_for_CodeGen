### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Pair<Long, Long>> getRow(ArrayList<ArrayList<Long>> lst, long x) {
        ArrayList<Pair<Long, Long>> coords = new ArrayList<Pair<Long, Long>>();
        for (int i = 0; i < lst.size(); i++) {
            for (int j = 0; j < lst.get(i).size(); j++) {
                if (lst.get(i).get(j) == x) {
                    coords.add(new Pair<Long, Long>((long)i, (long)j));
                }
            }
        }
        coords.sort((a, b) -> {
            if (a.getValue0() == b.getValue0()) {
                return b.getValue1().compareTo(a.getValue1());
            }
            return a.getValue0().compareTo(b.getValue0());
        });
        return coords;
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
std::vector<std::tuple<long, long>> get_row(std::vector<std::vector<long>> lst, long x) {
    std::vector<std::tuple<long, long>> coords;
    for (long i = 0; i < lst.size(); i++) {
        for (long j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                coords.push_back(std::make_tuple(i, j));
            }
        }
    }
    std::sort(coords.begin(), coords.end(), [](auto a, auto b) {
        if (std::get<0>(a) == std::get<0>(b)) {
            return std::get<1>(a) > std::get<1>(b);
        }
        return std::get<0>(a) < std::get<0>(b);
    });
    return coords;
}

