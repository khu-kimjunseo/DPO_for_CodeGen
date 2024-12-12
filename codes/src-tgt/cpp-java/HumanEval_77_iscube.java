### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool iscube(long a) {
    a = abs(a);
    return pow(round(pow(a, 1. / 3)), 3) == a;
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
    public static boolean iscube(long a) {
        a = Math.abs(a);
        return Math.pow(Math.round(Math.cbrt(a)), 3) == a;
    }
    
    

}

