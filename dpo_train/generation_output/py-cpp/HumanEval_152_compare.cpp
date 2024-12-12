### Python version

from typing import List

def compare(game: List[int],guess: List[int]) -> List[int]:
    return [abs(x-y) for x,y in zip(game,guess)]

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
    std::unordered_map<long,long> map;
    std::unordered_set<long> set;
    std::stringstream ss;
    ss << game;
    std::string str = ss.str();
    std::stringstream ss2;
    ss2 << guess;
    std::string str2 = ss2.str();
    std::regex rx("^[0-9]+$");
    std::regex rx2("^[0-9]+$");
    std::regex rx3("^[0-9]+$");
    std::regex rx4("^[0-9]+$");
    std::regex rx5("^[0-9]+$");
    std::regex rx6("^[0-9]+$");
    std::regex rx7("^[0-9]+$");
    std::regex rx8("^[0-9]+$");
    std::regex rx9("^[0-9]+$");
    std::regex rx10("^[0-9]+$");
    std::regex rx11("^[0-9]+$");
    std::regex rx12("^[0-9]+$");
    std::regex rx13("^[0-9]+$");
    std::regex rx14("^[0-9]+$");
    std::regex rx15("^[0-9]+$");
    std::regex rx16("^[0-9]+$");
    std::regex rx17("^[0-9]+$");
    std::regex rx18("^[0-9]+$");
    std::regex rx19("^[0-9]+$");
    std::regex rx20("^[0-9]+$");
    std::regex rx21("^[0-9]+$");
    std::regex rx22("^[0-9]+$");
    std::regex rx23("^[0-9]+$");
    std::regex rx24("^[0-9]+$");
    std::regex rx25("^[0-9]+$");
    std::regex rx26("^[0-9]+$");
    std::regex rx27("^[0-9]+$");
    std::regex rx28("^[0-9]+$");
    std::regex rx29("^[0-9]+$");
    std::regex rx30("^[0-9]+$");
    std::regex rx31("^[0-9]+$");
    std::regex rx32("^[0-9]+$");
    std::regex rx33("^[0-9]+$");
    std::regex rx34("^[0-9]+$");
    std::regex rx35("^[0-9]+$");
    std::regex rx36("^[0-9]+$");
    std::regex rx37("^[0-9]+$");
    std::regex rx38("^[0-9]+$");
    std::regex rx39("^[0-9]+$");
    std::regex rx40("^[0-9]+$");
    std::regex rx41("^[0-9]+$");
    std::regex rx42("^[0-9]+$");
    std::regex rx43("^[0-9]+$");
    