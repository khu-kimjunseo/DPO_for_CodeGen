### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
float triangle_area(long a, long b, long c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return -1;
    }
    float s = (a + b + c) / 2.0;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    area = round(area * 100) / 100;
    return area;
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
    public static float triangleArea(long a, long b, long c) {
        float s = (a + b + c) / 2.0f;
        float area = (float) Math.sqrt(s * (s - a) * (s - b) * (s - c));
        return a + b <= c || a + c <= b || b + c <= a ? -1 : Math.round(area * 100.0f) / 100.0f;
    }
    

}

