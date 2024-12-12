### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string solve(long N) {
    std::string s = std::to_string(N);
    long sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i] - '0';
    }
    std::bitset<64> b(sum);
    return b.to_string().substr(b.to_string().find('1'));
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
    public static String solve(long N) {
        String s = "";
        long sum = 0;
        for (int i = 0; i < N; i++) {
            sum += i;
        }
        s = "0" + solve(sum);
        return s;
    }
}

class Solution {
    public static void main(String[] args) {
        long N = Long.parseLong(args[0]);
        long M = Long.parseLong(args[1]);
        long K = Long.parseLong(args[2]);
        long N1 = Long.parseLong(args[3]);
        long N2 = Long.parseLong(args[4]);
        long N3 = Long.parseLong(args[5]);
        long N4 = Long.parseLong(args[6]);
        long N5 = Long.parseLong(args[7]);
        long N6 = Long.parseLong(args[8]);
        long N7 = Long.parseLong(args[9]);
        long N8 = Long.parseLong(args[10]);
        long N9 = Long.parseLong(args[11]);
        long N10 = Long.parseLong(args[12]);
        long N11 = Long.parseLong(args[13]);
        long N12 = Long.parseLong(args[14]);
        long N13 = Long.parseLong(args[15]);
        long N14 = Long.parseLong(args[16]);
        long N15 = Long.parseLong(args[17]);
        long N16 = Long.parseLong(args[18]);
        long N17 = Long.parseLong(args[19]);
        long N18 = Long.parseLong(args[20]);
        long N19 = Long.parseLong(args[21]);
        long N20 = Long.parseLong(args[22]);
        long N21 = Long.parseLong(args[23]);
        long N22 = Long.parseLong(args[24]);
        long N23 = Long.parseLong(args[25]);
        long N24 = Long.parseLong(args[26]);
        long N25 = Long.parseLong(args[27]);
        long N26 = Long.parseLong(args[28]);
        long N27 = Long.parseLong(args[29]);
        long N28 = Long.parseLong(args[30]);
        long N29 = Long.parseLong(args[31]);
        long N30 = Long.parseLong(args[32]);
        long N31 = Long.parseLong(args[33]);
        long N32 = Long.parseLong(args[34]);
        long N33 = Long.parseLong(args[35]);
        long N34 = Long.parseLong(args[36]);
        long N35 = Long.parseLong(args[37]);
        long N36 = Long.parseLong(args[38]);
        long N37 = Long.parseLong(args[39]);
        long N38 = Long.parseLong(args[40]);
        long N39 = Long.parseLong(args[41]);
        long N40 = Long.parseLong(args[42]);
        long N41 = Long.parseLong(args[43]);
        long N42 = Long.parseLong(args[44]);
        long N43 = Long.parseLong(args[45]);
        long N44 = Long.parseLong(args[46]);
        long N45 = Long