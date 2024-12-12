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
long closest_integer(std::string value) {
    std::regex pattern("\\.0+$");
    value = std::regex_replace(value, pattern, "");
    double num = std::stod(value);
    if (value.back() == '5') {
        if (num > 0) {
            return std::ceil(num);
        } else {
            return std::floor(num);
        }
    } else {
        return std::round(num);
    }
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
    public static long closestInteger(String value) {
        if (value == null || value.length() == 0) return 0;
        if (value.indexOf('.') == -1) return Long.parseLong(value);
        value = value.replaceAll("0*$", "");
        double num = Double.parseDouble(value);
        if (value.endsWith(".5")) {
            return (long)(num > 0 ? Math.ceil(num) : Math.floor(num));
        } else {
            return Math.round(num);
        }
    }
    
    

}

