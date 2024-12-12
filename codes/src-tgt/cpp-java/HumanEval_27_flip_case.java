### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string flip_case(std::string string) {
    for (auto& c : string) {
        if (isupper(c)) {
            c = tolower(c);
        } else {
            c = toupper(c);
        }
    }
    return string;
}


### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String flipCase(String string) {
        return Stream.of(string.split(""))
            .map(s -> s.equals(s.toUpperCase()) ? s.toLowerCase() : s.toUpperCase())
            .collect(Collectors.joining(""));
    }
    

}

