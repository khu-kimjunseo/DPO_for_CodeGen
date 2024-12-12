### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Float> rescaleToUnit(ArrayList<Float> numbers) {
        float minNumber = Collections.min(numbers);
        float maxNumber = Collections.max(numbers);
        return numbers.stream().map(x -> (x - minNumber) / (maxNumber - minNumber)).collect(Collectors.toCollection(ArrayList::new));
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
std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    std::vector<float> res;
    for (auto x : numbers) {
        res.push_back(x);
    }
    return res;
}

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>
#include<deque>
#include<list>
#include<algorithm>
#include<utility>
#include<functional>
#include<numeric>
#include<cmath>
#include<cctype>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstdio>
#include<c