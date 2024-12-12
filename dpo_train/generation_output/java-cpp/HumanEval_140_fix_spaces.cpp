### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String fixSpaces(String text) {
        String newText = "";
        int i = 0;
        int start = 0, end = 0;
        while (i < text.length()) {
            if (text.charAt(i) == ' ') {
                end++;
            } else {
                if (end - start > 2) {
                    newText += "-"+text.charAt(i);
                } else if (end - start > 0) {
                    newText += "_".repeat(end - start)+text.charAt(i);
                } else {
                    newText += text.charAt(i);
                }
                start = i+1; end = i+1;
            }
            i++;
        }
        if (end - start > 2) {
            newText += "-";
        } else if (end - start > 0) {
            newText += "_";
        }
        return newText;
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
std::string fix_spaces(std::string text) {
    std::string newText = "";
    int i = 0;
    int start = 0, end = 0;
    while (i < text.length()) {
        if (text.charAt(i) == ' ') {
            end++;
        } else {
            if (end - start > 2) {
                newText += "-"+text.charAt(i);
            } else if (end - start > 0) {
                newText += "_".repeat(end - start)+text.charAt(i);
            } else {
                newText += text.charAt(i);
            }
            start = i+1; end = i+1;
        }
        i++;
    }
    if (end - start > 2) {
        newText += "-";
    } else if (end - start > 0) {
        newText += "_";
    }
    return newText;
}

int main() {
    std::string text = "Hello World!";
    std::string newText = fix_spaces(text);
    std::cout << "The new text is: " << newText << std::endl;
    return 0;
}
