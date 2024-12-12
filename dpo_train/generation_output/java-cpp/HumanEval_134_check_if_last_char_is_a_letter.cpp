### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean checkIfLastCharIsALetter(String txt) {
        String check = txt.substring(txt.lastIndexOf(' ')+1);
        return (check.length() == 1 && (97 <= Character.toLowerCase(check.charAt(0)) && Character.toLowerCase(check.charAt(0)) <= 122));
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
bool check_if_last_char_is_a_letter(std::string txt) {
    std::string check = txt.substr(txt.lastIndexOf(' ')+1);
    return (check.length() == 1 && (97 <= Character.toLowerCase(check.charAt(0)) && Character.toLowerCase(check.charAt(0)) <= 122));
}

int main() {
    std::string txt = "Hello World";
    std::string check = "Hello World";
    std::string check2 = "Hello World";
    std::string check3 = "Hello World";
    std::string check4 = "Hello World";
    std::string check5 = "Hello World";
    std::string check6 = "Hello World";
    std::string check7 = "Hello World";
    std::string check8 = "Hello World";
    std::string check9 = "Hello World";
    std::string check10 = "Hello World";
    std::string check11 = "Hello World";
    std::string check12 = "Hello World";
    std::string check13 = "Hello World";
    std::string check14 = "Hello World";
    std::string check15 = "Hello World";
    std::string check16 = "Hello World";
    std::string check17 = "Hello World";
    std::string check18 = "Hello World";
    std::string check19 = "Hello World";
    std::string check20 = "Hello World";
    std::string check21 = "Hello World";
    std::string check22 = "Hello World";
    std::string check23 = "Hello World";
    std::string check24 = "Hello World";
    std::string check25 = "Hello World";
    std::string check26 = "Hello World";
    std::string check27 = "Hello World";
    std::string check28 = "Hello World";
    std::string check29 = "Hello World";
    std::string check30 = "Hello World";
    std::string check31 = "Hello World";
    std::string check32 = "Hello World";
    std::string check33 = "Hello World";
    std::string check34 = "Hello World";
    std::string check35 = "Hello World";
    std::string check36 = "Hello World";
    std::string check37 = "Hello World";
    std::string check38 = "Hello World";
    std::string check39 = "Hello World";
    std::string check40 = "Hello World";
    std::string check41 = "Hello World";
    std::string check42 = "Hello World";
    std::string check43 = "Hello World";
    std::string check44 = "Hello World";
    std::string check45 = "Hello World";
    std::string check46 = "Hello World";
    std::string check47 = "Hello World";
    std::string check48 = "Hello World";
    std::string check49 = "Hello World";
    std::string check50 = "Hello World";
    std::string check51 = "Hello World";
    std::string check52 = "Hello World";
    std::string check53 = "Hello World";
    std::string check54 = "Hello World";
    std::string check55 = "Hello World";
    std::string check56 = "Hello World";
    std::string check57 = "Hello World";