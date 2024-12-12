### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String removeVowels(String text) {
        return text.replaceAll("(?i)[aeiou]", "");
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
std::string remove_vowels(std::string text) {
    std::stringstream ss;
    std::regex r("[aeiou]");
    std::smatch m;
    ss << text;
    while (std::regex_search(ss.str(), m, r)) {
        ss << m.str();
    }
    return ss.str();
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<utility>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cassert>
#include<cctype>
#include<cstdlib>
#include<cmath>
#include<cstdint>
#include<iomanip>
#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<utility>
#include<cstdint>
#include<cstdlib>
#include<cmath>
#include<cstdint>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include