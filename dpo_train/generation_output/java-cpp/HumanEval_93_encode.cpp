### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String encode(String message) {
        String vowels = "aeiouAEIOU";
        Map<Character, Character> vowels_replace = new HashMap<>();
        for (char i : vowels.toCharArray()) {
            vowels_replace.put(i, (char)(i + 2));
        }
        message = swapCase(message);
        StringBuilder sb = new StringBuilder();
        for (char i : message.toCharArray()) {
            sb.append(vowels_replace.containsKey(i) ? vowels_replace.get(i) : i);
        }
        return sb.toString();
    }
    public static String swapCase(String str) {
        StringBuilder sb = new StringBuilder();
        for (char i : str.toCharArray()) {
            sb.append(Character.isUpperCase(i) ? Character.toLowerCase(i) : Character.toUpperCase(i));
        }
        return sb.toString();
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
std::string encode(std::string message) {
    std::stringstream ss;
    ss << message;
    return ss.str();
}

#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<bits>
#include<queue>
#include<stack>
#include<deque>
#include<algorithm>
#include<utility>
#include<functional>
#include<numeric>
#include<initializer_list>
#include<memory>
#include<iostream>
#include<fstream>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdarg>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cstdint>
#include<cstdlib>
