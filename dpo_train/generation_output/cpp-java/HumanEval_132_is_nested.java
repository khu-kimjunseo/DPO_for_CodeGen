### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_nested(std::string string) {
    std::vector<int> opening_bracket_index;
    std::vector<int> closing_bracket_index;
    for (int i = 0; i < string.length(); i++) {
        if (string[i] == '[') {
            opening_bracket_index.push_back(i);
        } else {
            closing_bracket_index.push_back(i);
        }
    }
    std::reverse(closing_bracket_index.begin(), closing_bracket_index.end());
    int cnt = 0;
    int i = 0;
    int l = closing_bracket_index.size();
    for (int idx : opening_bracket_index) {
        if (i < l && idx < closing_bracket_index[i]) {
            cnt++;
            i++;
        }
    }
    return cnt >= 2;
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
    public static boolean isNested(String string) {
        return is_nested(string.substring(0, string.length() - 1));
    }
    public static String getNestedString(String string) {
        return string.substring(0, string.length() - 1);
    }
    public static String getNestedString(String string, int index) {
        return string.substring(0, index);
    }
    public static String getNestedString(String string, int index, int length) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3, int length3) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3, int length3, int index4) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3, int length3, int index4, int length4) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3, int length3, int index4, int length4) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3, int length3, int index4, int length4, int index5) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int index3, int length3, int index4, int length4, int index5, int length5) {
        return string.substring(index, index + length);
    }
    public static String getNestedString(String string, int index, int length, int index2, int length2, int