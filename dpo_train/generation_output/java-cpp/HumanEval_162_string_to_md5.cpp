### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<String> stringToMd5(String text) {
        if (text == null || text.isEmpty()) {
            return Optional.empty();
        }
        try {
            MessageDigest md = MessageDigest.getInstance("MD5");
            byte[] hash = md.digest(text.getBytes("ASCII"));
            BigInteger bigInt = new BigInteger(1, hash);
            return Optional.of(String.format("%032x", bigInt));
        } catch (NoSuchAlgorithmException | UnsupportedEncodingException e) {
            return Optional.empty();
        }
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
std::optional<std::string> string_to_md5(std::string text) {
    if (text == null || text.isEmpty()) {
        return std::optional<std::string>();
    }
    std::stringstream ss(text);
    std::string line;
    std::string md5;
    while (std::getline(ss, line)) {
        md5 = md5.append(line);
    }
    return std::optional<std::string>(md5);
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
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cstdint>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<