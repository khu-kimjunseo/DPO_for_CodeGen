### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> parseNestedParens(String paren_string) {
        ArrayList<Long> result = new ArrayList<Long>();

        for (String s : paren_string.split(" ")) {
            long depth = 0;
            long max_depth = 0;

            for (int i = 0; i < s.length(); i++) {
                char c = s.charAt(i);
                if (c == '(') {
                    depth += 1;
                    max_depth = Math.max(depth, max_depth);
                } else {
                    depth -= 1;
                }
            }

            result.add(max_depth);
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
std::vector<long> parse_nested_parens(std::string paren_string) {
    std::vector<long> result;
    std::stringstream ss(paren_string);
    std::string s;
    while (std::getline(ss, s, '(')) {
        long depth = 0;
        long max_depth = 0;

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '(') {
                depth += 1;
                max_depth = Math.max(depth, max_depth);
            } else {
                depth -= 1;
            }
        }

        result.push_back(max_depth);
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
#include<utility>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cassert>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cmath>
#include<cstdio>
