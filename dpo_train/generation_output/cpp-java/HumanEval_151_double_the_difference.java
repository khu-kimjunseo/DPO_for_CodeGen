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
long double_the_difference(std::vector<float> lst) {
    long sum = 0;
    for (auto i : lst) {
        if (i > 0 && int(i)%2!=0 && i == int(i)) {
            sum += pow(i, 2);
        }
    }
    return sum;
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
    public static long doubleTheDifference(ArrayList<Float> lst) {
        long sum = 0;
        for (int i = 0; i < lst.size(); i++) {
            sum += lst.get(i);
        }
        return sum;
    }
}

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        ArrayList<Float> lst = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            lst.add(in.nextFloat());
        }
        long double_the_difference(lst);
        System.out.println(lst.size());
    }
}
