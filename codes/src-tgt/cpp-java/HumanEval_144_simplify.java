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
bool simplify(std::string x, std::string n) {
    std::stringstream ss1(x), ss2(n);
    int a, b, c, d;
    char slash;
    ss1 >> a >> slash >> b;
    ss2 >> c >> slash >> d;
    int numerator = a * c;
    int denom = b * d;
    return numerator % denom == 0;
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
    public static boolean simplify(String x, String n) {
        String[] a = x.split("/");
        String[] b = n.split("/");
        int numerator = Integer.parseInt(a[0]) * Integer.parseInt(b[0]);
        int denom = Integer.parseInt(a[1]) * Integer.parseInt(b[1]);
        return numerator % denom == 0;
    }
    

}

