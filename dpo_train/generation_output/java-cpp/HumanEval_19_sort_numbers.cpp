### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String sortNumbers(String numbers) {
        Map<String, Integer> valueMap = new HashMap<String, Integer>() {{
            put("zero", 0);
            put("one", 1);
            put("two", 2);
            put("three", 3);
            put("four", 4);
            put("five", 5);
            put("six", 6);
            put("seven", 7);
            put("eight", 8);
            put("nine", 9);
        }};
        return String.join(" ", Arrays.stream(numbers.split(" ")).filter(x -> !x.isEmpty()).sorted((x, y) -> valueMap.get(x) - valueMap.get(y)).toArray(String[]::new));
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
std::string sort_numbers(std::string numbers) {
    std::stringstream ss;
    std::vector<std::string> numbers_vector;
    std::regex regex("[0-9]*");
    std::regex_match<std::string::iterator> match;
    std::regex_search<std::string::iterator> search;
    std::stringstream ss;
    std::stringstream ss2;
    std::stringstream ss3;
    std::stringstream ss4;
    std::stringstream ss5;
    std::stringstream ss6;
    std::stringstream ss7;
    std::stringstream ss8;
    std::stringstream ss9;
    std::stringstream ss10;
    std::stringstream ss11;
    std::stringstream ss12;
    std::stringstream ss13;
    std::stringstream ss14;
    std::stringstream ss15;
    std::stringstream ss16;
    std::stringstream ss17;
    std::stringstream ss18;
    std::stringstream ss19;
    std::stringstream ss20;
    std::stringstream ss21;
    std::stringstream ss22;
    std::stringstream ss23;
    std::stringstream ss24;
    std::stringstream ss25;
    std::stringstream ss26;
    std::stringstream ss27;
    std::stringstream ss28;
    std::stringstream ss29;
    std::stringstream ss30;
    std::stringstream ss31;
    std::stringstream ss32;
    std::stringstream ss33;
    std::stringstream ss34;
    std::stringstream ss35;
    std::stringstream ss36;
    std::stringstream ss37;
    std::stringstream ss38;
    std::stringstream ss39;
    std::stringstream ss40;
    std::stringstream ss41;
    std::stringstream ss42;
    std::stringstream ss43;
    std::stringstream ss44;
    std::stringstream ss45;
    std::stringstream ss46;
    std::stringstream ss47;
    std::stringstream ss48;
    std::stringstream ss49;
    std::stringstream ss50;
    std::stringstream ss51;
    std::stringstream ss52;
    std::stringstream ss53;
    std::stringstream ss54;
    std::stringstream ss55;
    std::stringstream ss56;
    std::stringstream ss57;
    std::stringstream ss58;
    std::stringstream ss59;
    std::stringstream ss60;
    std::stringstream ss61;
    std::stringstream ss62;
    std::stringstream ss63;
    std::stringstream ss64;
    std::stringstream ss65;
    std::stringstream ss66;
    std::stringstream ss67;
    std::stringstream ss68;
    