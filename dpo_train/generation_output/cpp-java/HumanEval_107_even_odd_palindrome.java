### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::tuple<long, long> even_odd_palindrome(long n) {
    auto is_palindrome = [](long n) -> bool {
        std::string s = std::to_string(n);
        return std::equal(s.begin(), s.end(), s.rbegin());
    };
    long even_palindrome_count = 0;
    long odd_palindrome_count = 0;
    for(long i=1; i<=n; i++) {
        if(i%2 == 1 && is_palindrome(i)) {
            odd_palindrome_count++;
        } else if(i%2 == 0 && is_palindrome(i)) {
            even_palindrome_count++;
        }
    }
    return std::make_tuple(even_palindrome_count, odd_palindrome_count);
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
    public static Pair<Long, Long> evenOddPalindrome(long n) {
        long odd_palindrome_count = 0;
        long even_palindrome_count = 0;
        for(long i=1; i<=n; i++) {
            if(i%2 == 1 && is_palindrome(i)) {
                odd_palindrome_count++;
            } else if(i%2 == 0 && is_palindrome(i)) {
                even_palindrome_count++;
            }
        }
        return std::make_pair(odd_palindrome_count, even_palindrome_count);
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long[] palindrome = new long[n];
        for(int i=0; i<n; i++) {
            palindrome[i] = in.nextLong();
        }
        long[] odd_palindrome = new long[n];
        for(int i=0; i<n; i++) {
            odd_palindrome[i] = in.nextLong();
        }
        long[] even_palindrome = new long[n];
        for(int i=0; i<n; i++) {
            even_palindrome[i] = in.nextLong();
        }
        System.out.println(Problem.evenOddPalindrome(n));
        System.out.println(Problem.oddOddPalindrome(n));
        System.out.println(Problem.evenOddPalindrome(n));
        System.out.println(Problem.oddOddPalindrome(n));
        System.out.println(Problem.evenOddPalindrome(n));
        System.out.println(Problem.oddOddPalindrome(n));
        System.out.println(Problem.evenOddPalindrome(n));
        System.out.println(Problem.oddOddPalindrome(n));
        System.out.println(Problem.evenOddPalindrome(n));
        System.out.println(Problem.oddOddPalindrome(n));
        System.out.println(Problem.evenOddPalindrome(n));
        System.out.println(Problem.oddOddPalindrome(n));
        System.out.println(Problem.evenOddPalindrome(n));
        System.out.println(Problem.oddOddPalindrome(n));
        System.out.println(Problem.evenOddPalindrome(n));
        System.out.println(Problem.oddOddPalindrome(n));
        System.out.println(Problem.evenOddPalindrome(n));
        System.out.println(Problem.oddOddPalindrome(