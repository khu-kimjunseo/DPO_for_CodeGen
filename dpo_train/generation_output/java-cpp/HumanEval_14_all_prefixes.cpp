### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> allPrefixes(String string) {
        ArrayList<String> result = new ArrayList<>();

        for (int i = 0; i < string.length(); i++) {
            result.add(string.substring(0, i+1));
        }
        return result;
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
std::vector<std::string> all_prefixes(std::string string) {
    std::vector<std::string> result;
    std::stringstream ss(string);
    std::string word;
    while (std::getline(ss, word, ' ')) {
        result.push_back(word);
    }
    return result;
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
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdint>
#include<iomanip>
#include<iostream>
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
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdint>
#include<iomanip>
#include<iostream>
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
#include<cctype>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdint>
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
#include