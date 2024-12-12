### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> get_odd_collatz(long n) {
    std::vector<long> odd_collatz;
    if (n%2==0) {
        odd_collatz = {}; 
    } else {
        odd_collatz = {n};
    }
    while (n > 1) {
        if (n % 2 == 0) {
            n = n/2;
        } else {
            n = n*3 + 1;
        }
        if (n%2 == 1) {
            odd_collatz.push_back(n);
        }
    }
    std::sort(odd_collatz.begin(), odd_collatz.end());
    return odd_collatz;
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
    public static ArrayList<Long> getOddCollatz(long n) {
        ArrayList<Long> odd_collatz = new ArrayList<>();
        long n_odd = 1;
        while (n_odd < n) {
            n_odd = n_odd * 2;
        }
        odd_collatz.add(n_odd);
        return odd_collatz;
    }
}

class Solution {
    public static void main(String[] args) {
        long n = Long.parseLong(args[0]);
        long n_odd = Long.parseLong(args[1]);
        long n_even = Long.parseLong(args[2]);
        long n_odd_collatz = Problem.getOddCollatz(n);
        long n_even_collatz = Problem.getOddCollatz(n_even);
        long n_odd_collatz_odd = Problem.getOddCollatz(n_odd);
        long n_even_collatz_odd = Problem.getOddCollatz(n_even_collatz);
        long n_odd_collatz_even = Problem.getOddCollatz(n_odd_collatz);
        long n_even_collatz_even = Problem.getOddCollatz(n_even_collatz);
        long n_odd_collatz_even_odd = Problem.getOddCollatz(n_odd_collatz_even);
        long n_even_collatz_even_odd = Problem.getOddCollatz(n_even_collatz_even);
        long n_odd_collatz_even_odd_odd = Problem.getOddCollatz(n_odd_collatz_even_odd);
        long n_even_collatz_even_odd_odd = Problem.getOddCollatz(n_even_collatz_even_odd);
        long n_odd_collatz_even_odd_odd_odd = Problem.getOddCollatz(n_odd_collatz_even_odd_odd);
        long n_even_collatz_even_odd_odd_odd = Problem.getOddCollatz(n_even_collatz_even_odd_odd);
        long n_odd_collatz_even_odd_odd_odd_odd = Problem.getOddCollatz(n_odd_collatz_even_odd_odd_odd);
        long n_even_collatz_even_odd_odd_odd_odd = Problem.getOddCollatz(n_even_collatz_even_odd_odd_odd);
        long n_odd_collatz_even_odd_odd_odd_odd_odd = Problem.getOddCollatz(n_odd_collatz_even_odd_odd_odd_odd);
        long n_even_collatz_even_odd_odd_odd_odd_odd = Problem.getOddCollatz(n_even_collatz_even_odd_odd_odd_odd);
        long n_odd_collatz_even_odd_odd_odd_odd_odd = Problem.getOdd