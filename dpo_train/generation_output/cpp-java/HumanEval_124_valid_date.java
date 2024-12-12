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
bool valid_date(std::string date) {
    try {
        date = date.substr(0, date.find(' '));
        int month, day, year;
        sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year);
        if (month < 1 || month > 12) {
            return false;
        }
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 1 || day > 31)) {
            return false;
        }
        if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) {
            return false;
        }
        if (month == 2 && (day < 1 || day > 29)) {
            return false;
        }
    } catch (...) {
        return false;
    }
    return true;
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
    public static boolean validDate(String date) {
        return valid_date(date);
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] d = new int[n];
        for (int i = 0; i < n; i++) {
            d[i] = in.nextInt();
        }
        int[] d2 = new int[m];
        for (int i = 0; i < m; i++) {
            d2[i] = in.nextInt();
        }
        Solution sol = new Solution();
        for (int i = 0; i < n; i++) {
            System.out.println(sol.validDate(d[i]));
        }
        for (int i = 0; i < m; i++) {
            System.out.println(sol.validDate(d2[i]));
        }
    }
}
