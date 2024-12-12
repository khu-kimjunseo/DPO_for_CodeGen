### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool check_if_last_char_is_a_letter(std::string txt) {
    std::string check = txt.substr(txt.find_last_of(' ') + 1);
    return (check.size() == 1 && std::isalpha(check[0]));
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
    public static boolean checkIfLastCharIsALetter(String txt) {
        String check = txt.substring(txt.lastIndexOf(' ')+1);
        return (check.length() == 1 && (97 <= Character.toLowerCase(check.charAt(0)) && Character.toLowerCase(check.charAt(0)) <= 122));
    }
    
    

}

