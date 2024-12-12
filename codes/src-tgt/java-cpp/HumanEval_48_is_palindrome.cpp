### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isPalindrome(String text) {
        StringBuilder sb = new StringBuilder(text);
        return text.equals(sb.reverse().toString());
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
bool is_palindrome(std::string text) {
    for (int i = 0; i < text.size(); i++) {
        if (text[i] != text[text.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

