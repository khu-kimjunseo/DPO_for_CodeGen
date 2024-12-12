### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> selectWords(String s, long n) {
        ArrayList<String> result = new ArrayList<String>();
        for (String word : s.split(" ")) {
            long n_consonants = 0;
            for (int i = 0; i < word.length(); i++) {
                if (!"aeiouAEIOU".contains(String.valueOf(word.charAt(i)))) {
                    n_consonants++;
                }
            }
            if (n_consonants == n) {
                result.add(word);
            }
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
std::vector<std::string> select_words(std::string s, long n) {
    std::vector<std::string> result;
    std::regex r("[aeiouAEIOU]");
    std::smatch m;
    std::regex_search(s, m, r);
    if (m.size() == 0) {
        return result;
    }
    std::string word = m.str(0);
    long n_consonants = 0;
    for (int i = 0; i < word.length(); i++) {
        if (!"aeiouAEIOU".contains(String.valueOf(word.charAt(i)))) {
            n_consonants++;
        }
    }
    if (n_consonants == n) {
        result.push_back(word);
    }
    return result;
}

#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cassert>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
