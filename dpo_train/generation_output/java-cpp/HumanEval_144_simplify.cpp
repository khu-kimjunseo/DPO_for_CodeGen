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
    std::stringstream ss(x);
    std::stringstream nn(n);
    std::string s;
    std::string t;
    std::stringstream ss2;
    std::stringstream nn2;
    std::stringstream ss3;
    std::stringstream nn3;
    std::stringstream ss4;
    std::stringstream nn4;
    std::stringstream ss5;
    std::stringstream nn5;
    std::stringstream ss6;
    std::stringstream nn6;
    std::stringstream ss7;
    std::stringstream nn7;
    std::stringstream ss8;
    std::stringstream nn8;
    std::stringstream ss9;
    std::stringstream nn9;
    std::stringstream ss10;
    std::stringstream nn10;
    std::stringstream ss11;
    std::stringstream nn11;
    std::stringstream ss12;
    std::stringstream nn12;
    std::stringstream ss13;
    std::stringstream nn13;
    std::stringstream ss14;
    std::stringstream nn14;
    std::stringstream ss15;
    std::stringstream nn15;
    std::stringstream ss16;
    std::stringstream nn16;
    std::stringstream ss17;
    std::stringstream nn17;
    std::stringstream ss18;
    std::stringstream nn18;
    std::stringstream ss19;
    std::stringstream nn19;
    std::stringstream ss20;
    std::stringstream nn20;
    std::stringstream ss21;
    std::stringstream nn21;
    std::stringstream ss22;
    std::stringstream nn22;
    std::stringstream ss23;
    std::stringstream nn23;
    std::stringstream ss24;
    std::stringstream nn24;
    std::stringstream ss25;
    std::stringstream nn25;
    std::stringstream ss26;
    std::stringstream nn26;
    std::stringstream ss27;
    std::stringstream nn27;
    std::stringstream ss28;
    std::stringstream nn28;
    std::stringstream ss29;
    std::stringstream nn29;
    std::stringstream ss30;
    std::stringstream nn30;
    std::stringstream ss31;
    std::stringstream nn31;
    std::stringstream ss32;
    std::stringstream nn32;
    std::stringstream ss33;
    std::stringstream nn33;
    std::stringstream ss34;
    std::stringstream nn34;
    std::stringstream ss35;
    std::stringstream nn35;
    std::stringstream ss36;
    std::stringstream nn36;
    std::stringstream ss37;
    std::stringstream nn37;
    std::stringstream ss38;
    std::stringstream nn38;
    std::stringstream ss39;
    std::stringstream nn39;
    std::stringstream ss