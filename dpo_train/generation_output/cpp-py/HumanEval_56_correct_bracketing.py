### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool correct_bracketing(std::string brackets) {
    int depth = 0;
    for (char b : brackets) {
        if (b == '<') {
            depth++;
        } else {
            depth--;
        }
        if (depth < 0) {
            return false;
        }
    }
    return depth == 0;
}

### Python version

def correct_bracketing(brackets: str) -> bool:
    if not brackets:
        return true;
    if not brackets.startswith("<"):
        return false;
    if brackets.endswith(">"):
        return false;
    if brackets.endswith("<"):
        return true;
    return correct_bracketing(brackets.rstrip("<>").rstrip(">").rstrip("<"))

### C++ version

#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<sstream>
#include<regex>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<ctime>
#include<cassert>
#include<cctype>
#include<cstdlib>
#include<cmath>
#include<iomanip>
#include<utility>
#include<sstream>
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib