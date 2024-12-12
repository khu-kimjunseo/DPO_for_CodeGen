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
