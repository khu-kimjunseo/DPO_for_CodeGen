### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string string_xor(std::string a, std::string b) {
    std::string ans;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) ans += '0';
        else ans += '1';
    }
    return ans;
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
    public static String stringXor(String a, String b) {
        return IntStream.range(0, a.length()).mapToObj(i -> a.charAt(i) == b.charAt(i) ? "0" : "1").collect(Collectors.joining());
    }
    
    

}

