### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string change_base(long x, long base) {
    std::string ret;
    while (x > 0) {
        ret = std::to_string(x % base) + ret;
        x /= base;
    }
    return ret;
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
    public static String changeBase(long x, long base) {
        return change_base(x, base);
    }
    public static String changeBase(long x, long base, long base2) {
        return change_base(x, base, base2);
    }
    public static String changeBase(long x, long base, long base2, long base3) {
        return change_base(x, base, base2, base3);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4) {
        return change_base(x, base, base2, base3, base4);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5) {
        return change_base(x, base, base2, base3, base4, base5);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6) {
        return change_base(x, base, base2, base3, base4, base5, base6);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6, long base7) {
        return change_base(x, base, base2, base3, base4, base5, base6, base7);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6, long base7, long base8) {
        return change_base(x, base, base2, base3, base4, base5, base6, base7, base8);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6, long base7, long base8, long base9) {
        return change_base(x, base, base2, base3, base4, base5, base6, base7, base8, base9);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6, long base7, long base8, long base9, long base10) {
        return change_base(x, base, base2, base3, base4, base5, base6, base7, base8, base9, base10);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6, long base7, long base8, long base9, long base10, long base11) {
        return change_base(x, base, base2, base3, base4, base5, base6, base7, base8, base9, base10, base11);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4, long base5, long base6, long base7, long base8, long base9, long base10, long base11, long base12) {
        return change_base(x, base, base2, base3, base4, base5, base6, base7, base8, base9, base10, base11, base12);
    }
    public static String changeBase(long x, long base, long base2, long base3, long base4,