### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long how_many_times(std::string string, std::string substring) {
    long times = 0;
    for (int i = 0; i < string.size() - substring.size() + 1; i++) {
        if (string.substr(i, substring.size()) == substring) {
            times += 1;
        }
    }
    return times;
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
    public static long howManyTimes(String string, String substring) {
        long times = 0;
        for (int i = 0; i <= string.length() - substring.length(); i++) {
            if (string.substring(i, i + substring.length()).equals(substring)) {
                times++;
            }
        }
        return times;
    }
    

}

