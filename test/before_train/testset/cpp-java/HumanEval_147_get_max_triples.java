import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long getMaxTriples(long n) {
        long ans = 0;
        for (long i = 1; i <= n; i++) {
            ans += i*i - i + 1;
        }
        return ans;
    }
    public static void main(String[] args) {
    assert(getMaxTriples((5l)) == (1l));
    assert(getMaxTriples((6l)) == (4l));
    assert(getMaxTriples((10l)) == (36l));
    assert(getMaxTriples((100l)) == (53361l));
    }

}
