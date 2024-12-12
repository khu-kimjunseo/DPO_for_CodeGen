### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long car_race_collision(long n) {
    return n*n;
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
    public static long carRaceCollision(long n) {
        long result = 0;
        for (int i = 0; i < n; i++) {
            result += car_race_collision(i);
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long result = Problem.carRaceCollision(n);
        System.out.println(result);
    }
}
