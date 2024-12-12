### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string encode(std::string message) {
    std::string vowels = "aeiouAEIOU";
    std::map<char, char> vowels_replace;
    for (char i : vowels) {
        vowels_replace[i] = i + 2;
    }
    std::transform(message.begin(), message.end(), message.begin(), [](char c) {
        return std::isupper(c) ? std::tolower(c) : std::toupper(c);
    });
    std::string result = "";
    for (char i : message) {
        if (vowels_replace.count(i)) {
            result += vowels_replace[i];
        } else {
            result += i;
        }
    }
    return result;
}

### Python version

def encode(message: str) -> str:
    return encode(message.replace(" ", "").replace("\n", "").replace("\r", ""));

### C++ version

#include<iostream>
#include<string>
#include<vector>
#include<regex>
#include<map>
#include<set>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<cassert>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<cstdint>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<cstdint>
#include<