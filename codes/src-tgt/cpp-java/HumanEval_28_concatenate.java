### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string concatenate(std::vector<std::string> strings) {
    return std::accumulate(strings.begin(), strings.end(), std::string(""));
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
    public static String concatenate(ArrayList<String> strings) {
        return String.join("", strings);
    }
    

}

