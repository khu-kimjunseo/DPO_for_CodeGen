### Python version

def circular_shift(x: int, shift: int) -> str:
    s = str(x)
    if shift > len(s):
        return s[::-1]
    else:
        return s[len(s) - shift:] + s[:len(s) - shift]

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
std::string circular_shift(long x, long shift) {
    std::stringstream ss;
    ss << x;
    std::string s = ss.str();
    if (shift > len(s)) {
        return s[::-1];
    } else {
        return s[len(s) - shift:] + s[:len(s) - shift] + s;
    }
}

#include<iostream>
#include<fstream>
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
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<iomanip>
#include<cmath>
#include<cstdint>
#include<cassert>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<cstdint>
#include<cstring>
#include<iostream>
#include<sstream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<utility>
#include<functional>
#include<utility>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<sstream>
#include<iomanip>
#include<fstream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<utility>
#include<functional>
#include<utility>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cstring>