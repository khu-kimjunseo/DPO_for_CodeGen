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
long how_many_times(std::string string, std::string substring) {
    long times = 0;
    for (int i = 0; i <= string.length() - substring.length(); i++) {
        if (string.substring(i, i + substring.length()).equals(substring)) {
            times++;
        }
    }
    return times;
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
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<c