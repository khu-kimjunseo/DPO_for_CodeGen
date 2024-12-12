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
        ArrayList<Long> res = new ArrayList<>();
        for(int i=0;i<game.size();i++){
            res.add(abs(game[i]-guess[i]));
        }
        return res;
    }
}

class Solution {
    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] game = new int[n];
        int[] guess = new int[m];
        for(int i=0;i<n;i++){
            game[i] = in.nextInt();
        }
        for(int i=0;i<m;i++){
            guess[i] = in.nextInt();
        }
        ArrayList<Long> res = Problem.compare(new Solution().compare(game, guess), new Solution().compare(guess, game));
        for(int i=0;i<res.size();i++){
            System.out.println(res.get(i));
        }
    }
}
