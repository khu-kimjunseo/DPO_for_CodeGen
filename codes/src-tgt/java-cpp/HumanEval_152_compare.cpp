### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> compare(ArrayList<Long> game, ArrayList<Long> guess) {
        return (ArrayList<Long>) IntStream.range(0, game.size()).mapToObj(i -> Math.abs(game.get(i) - guess.get(i))).collect(Collectors.toList());
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
std::vector<long> compare(std::vector<long> game, std::vector<long> guess) {
    std::vector<long> res;
    for(int i=0;i<game.size();i++){
        res.push_back(abs(game[i]-guess[i]));
    }
    return res;
}

