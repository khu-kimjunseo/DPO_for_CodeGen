### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> separateParenGroups(String paren_string) {
        ArrayList<String> result = new ArrayList<String>();
        ArrayList<Character> current_string = new ArrayList<Character>();
        int current_depth = 0;

        for (int i = 0; i < paren_string.length(); i++) {
            char c = paren_string.charAt(i);
            if (c == '(') {
                current_depth += 1;
                current_string.add(c);
            } else if (c == ')') {
                current_depth -= 1;
                current_string.add(c);

                if (current_depth == 0) {
                    StringBuilder sb = new StringBuilder(current_string.size());
                    for (Character ch : current_string) {
                        sb.append(ch);
                    }
                    result.add(sb.toString());
                    current_string.clear();
                }
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
std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::stringstream ss(paren_string);
    std::string current_string;
    while (std::getline(ss, current_string)) {
        if (current_string.find("(") != std::string::npos) {
            result.push_back(current_string);
        }
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
#include<functional>
#include<cmath>
#include<ctime>
#include<cctype>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include