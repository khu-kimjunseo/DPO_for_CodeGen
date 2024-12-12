### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool right_angle_triangle(long a, long b, long c) {
    return a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b;
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
    public static boolean rightAngleTriangle(long a, long b, long c) {
        return a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b;
    }
    

}

