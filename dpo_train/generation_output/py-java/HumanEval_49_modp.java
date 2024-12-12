### Python version

def modp(n: int, p: int) -> int:
    ret = 1
    for i in range(n):
        ret = (2 * ret) % p
    return ret

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long modp(long n, long p) {
        return (n % p);
    }
}

class Solution {
    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int p = in.nextInt();
        long ans = Problem.modp(n, p);
        System.out.println(ans);
    }
}
