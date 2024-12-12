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
#include<unordered_map>
#include<unordered_set>
std::vector<long> compare(std::vector<long> game, std::vector<long> guess) {
    std::vector<long> result;
    std::unordered_map<long, long> map;
    std::unordered_set<long> set;
    std::unordered_map<long, long>::iterator it;
    std::unordered_set<long>::iterator it2;
    std::unordered_map<long, long>::iterator it3;
    std::unordered_set<long>::iterator it4;
    std::unordered_map<long, long>::iterator it5;
    std::unordered_set<long>::iterator it6;
    std::unordered_map<long, long>::iterator it7;
    std::unordered_set<long>::iterator it8;
    std::unordered_map<long, long>::iterator it9;
    std::unordered_set<long>::iterator it10;
    std::unordered_map<long, long>::iterator it11;
    std::unordered_set<long>::iterator it12;
    std::unordered_map<long, long>::iterator it13;
    std::unordered_set<long>::iterator it14;
    std::unordered_map<long, long>::iterator it15;
    std::unordered_set<long>::iterator it16;
    std::unordered_map<long, long>::iterator it17;
    std::unordered_set<long>::iterator it18;
    std::unordered_map<long, long>::iterator it19;
    std::unordered_set<long>::iterator it20;
    std::unordered_map<long, long>::iterator it21;
    std::unordered_set<long>::iterator it22;
    std::unordered_map<long, long>::iterator it23;
    std::unordered_set<long>::iterator it24;
    std::unordered_map<long, long>::iterator it25;
    std::unordered_set<long>::iterator it26;
    std::unordered_map<long, long>::iterator it27;
    std::unordered_set<long>::iterator it28;
    std::unordered_map<long, long>::iterator it29;
    std::unordered_set<long>::iterator it30;
    std::unordered_map<long, long>::iterator it31;
    std::unordered_set<long>::iterator it32;
    std::unordered_map<long, long>::iterator it33;
    std::unordered_set<long>::iterator it34;
    std::unordered_map<long, long>::iterator it35;
    std::unordered_set<long>::iterator it36;
    std::unordered_map<long, long>::iterator it37;
    std::unordered_set<long>::iterator it38;
    std::unordered_map<long, long>::iterator it39;
    std::unordered_set<long>::iterator it40;
    std::unordered_map<long, long>::iterator it41;
    std::unordered_set<long>::iterator it42;
    std::unordered_map<long, long>::iterator it43;
    std::