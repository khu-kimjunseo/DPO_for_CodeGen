### Python version

from typing import List

def make_a_pile(n: int) -> List[int]:
    return [n + 2*i for i in range(n)]

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> makeAPile(long n) {
        ArrayList<Long> a = new ArrayList<>();
        for (long i = 1; i <= n; i++) {
            a.add(i);
        }
        return a;
    }
}

class Solution {
    public static void main(String[] args) {
        long n = Long.parseLong(args[0]);
        Solution s = new Solution();
        ArrayList<Long> a = s.makeAPile(n);
        for (int i = 0; i < a.size(); i++) {
            System.out.println(a.get(i));
        }
    }
}
