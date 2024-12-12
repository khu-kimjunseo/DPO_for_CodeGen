### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static float triangleArea(long a, long b, long c) {
        float s = (a + b + c) / 2.0f;
        float area = (float) Math.sqrt(s * (s - a) * (s - b) * (s - c));
        return a + b <= c || a + c <= b || b + c <= a ? -1 : Math.round(area * 100.0f) / 100.0f;
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
float triangle_area(long a, long b, long c) {
    assert(a < b && a < c);
    assert(b < c);
    return (float) (triangleArea(a, b, c) + triangleArea(b, c, a));
}

int main() {
    std::vector<long> a;
    std::vector<long> b;
    std::vector<long> c;
    std::vector<long> d;
    std::vector<long> e;
    std::vector<long> f;
    std::vector<long> g;
    std::vector<long> h;
    std::vector<long> i;
    std::vector<long> j;
    std::vector<long> k;
    std::vector<long> l;
    std::vector<long> m;
    std::vector<long> n;
    std::vector<long> o;
    std::vector<long> p;
    std::vector<long> q;
    std::vector<long> r;
    std::vector<long> s;
    std::vector<long> t;
    std::vector<long> u;
    std::vector<long> v;
    std::vector<long> w;
    std::vector<long> x;
    std::vector<long> y;
    std::vector<long> z;
    std::vector<long> a1;
    std::vector<long> a2;
    std::vector<long> a3;
    std::vector<long> a4;
    std::vector<long> a5;
    std::vector<long> a6;
    std::vector<long> a7;
    std::vector<long> a8;
    std::vector<long> a9;
    std::vector<long> a10;
    std::vector<long> a11;
    std::vector<long> a12;
    std::vector<long> a13;
    std::vector<long> a14;
    std::vector<long> a15;
    std::vector<long> a16;
    std::vector<long> a17;
    std::vector<long> a18;
    std::vector<long> a19;
    std::vector<long> a20;
    std::vector<long> a21;
    std::vector<long> a22;
    std::vector<long> a23;
    std::vector<long> a24;
    std::vector<long> a25;
    std::vector<long> a26;
    std::vector<long> a27;
    std::vector<long> a28;
    std::vector<long> a29;
    std::vector<long> a30;
    std::vector<long> a31;
    std::vector<long> a32;
    std::vector<long> a33;
    std::vector<long> a34;
    std::vector<long> a35;
    std::vector<long> a36;
    std::vector<long> a37;
    std::vector<long> a38;
    std::vector<long> a39;
    std::vector<long> a