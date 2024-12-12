### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long search(std::vector<long> lst) {
    std::vector<long> frq(*std::max_element(lst.begin(), lst.end()) + 1, 0);
    for (auto i : lst) {
        frq[i]++;
    }
    long ans = -1;
    for (int i = 1; i < frq.size(); i++) {
        if (frq[i] >= i) {
            ans = i;
        }
    }
    return ans;
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
    public static long search(ArrayList<Long> lst) {
        long ans = 0;
        for (int i = 0; i < lst.size(); i++) {
            ans += lst.get(i);
        }
        return ans;
    }
}

class Solution {
    public static void main(String[] args) {
        long[] lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(search(lst));
    }
}

class Solution2 {
    public static void main(String[] args) {
        long[] lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(search(lst));
    }
}

class Solution3 {
    public static void main(String[] args) {
        long[] lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(search(lst));
    }
}

class Solution4 {
    public static void main(String[] args) {
        long[] lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(search(lst));
    }
}

class Solution5 {
    public static void main(String[] args) {
        long[] lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(search(lst));
    }
}

class Solution6 {
    public static void main(String[] args) {
        long[] lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(search(lst));
    }
}

class Solution7 {
    public static void main(String[] args) {
        long[] lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(search(lst));
    }
}

class Solution8 {
    public static void main(String[] args) {
        long[] lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(search(lst));
    }
}

class Solution9 {
    public static void main(String[] args) {
        long[] lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(search(lst));
    }
}

class Solution10 {
    public static void main(String[] args) {
        long[] lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(search(lst));
    }
}

class Solution11 {
    public static void main(String[] args) {
        long[] lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        System.out.println(search(lst));
    }
}

class Solution12