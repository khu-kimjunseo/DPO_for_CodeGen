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
        try {
            date = date.trim();
            String[] parts = date.split("-");
            int month = Integer.parseInt(parts[0]);
            int day = Integer.parseInt(parts[1]);
            int year = Integer.parseInt(parts[2]);
            if (month < 1 || month > 12) {
                return false;
            }
            if (Arrays.asList(1,3,5,7,8,10,12).contains(month) && (day < 1 || day > 31)) {
                return false;
            }
            if (Arrays.asList(4,6,9,11).contains(month) && (day < 1 || day > 30)) {
                return false;
            }
            if (month == 2 && (day < 1 || day > 29)) {
                return false;
            }
        } catch (Exception e) {
            return false;
        }
        return true;
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
bool valid_date(std::string date) {
    std::regex r("^(\\d{4})-(\\d{2})-(\\d{2})$");
    std::smatch m;
    std::regex_search(date, m, r);
    if (m.size() != 4) {
        return false;
    }
    return true;
}

int main() {
    std::string date = "2015-01-01";
    std::vector<std::string> v = {"2015-01-01", "2015-01-02", "2015-01-03", "2015-01-04", "2015-01-05", "2015-01-06", "2015-01-07", "2015-01-08", "2015-01-09", "2015-01-10", "2015-01-11", "2015-01-12", "2015-01-13", "2015-01-14", "2015-01-15", "2015-01-16", "2015-01-17", "2015-01-18", "2015-01-19", "2015-01-20", "2015-01-21", "2015-01-22", "2015-01-23", "2015-01-24", "2015-01-25", "2015-01-26", "2015-01-27", "2015-01-28", "2015-01-29", "2015-01-30", "2015-01-31"};
    std::vector<std::string> v2 = {"2015-01-01", "2015-01-02", "2015-01-03", "2015-01-04", "2015-01-05", "2015-01-06", "2015-01-07", "2015-01-08", "2015-01-09", "2015-01-10", "2015-01-11", "2015-01-12", "2015-01-13", "2015-01-14", "2015-01-15", "2015-01-16", "2015-01-17", "2015-01-18", "2015-01-19", "2015-01-20", "2015-01-21", "2015-01-22", "2015-01-23", "2015-01-24", "2015-01-25", "2015-01-26", "2015-01-27", "2015-01-28", "2015-01-29", "2015-01-30", "2015-01-31"};
    std::vector<std::string> v3 = {"2015-01-01", "2015-01-02", "2015-01-03", "2015-01-04", "2015-01-05", "2015-01-06", "2015-01-07", "2015-01