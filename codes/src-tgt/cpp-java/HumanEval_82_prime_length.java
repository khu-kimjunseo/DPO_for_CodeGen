### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool prime_length(std::string string) {
    int l = string.size();
    if (l == 0 || l == 1) {
        return false;
    }
    for (int i = 2; i < l; i++) {
        if (l % i == 0) {
            return false;
        }
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
    public static boolean primeLength(String string) {
        int l = string.length();
        if (l <= 1) {
            return false;
        }
        for (int i = 2; i < l; i++) {
            if (l % i == 0) {
                return false;
            }
        }
        return true;
    }
    

}

