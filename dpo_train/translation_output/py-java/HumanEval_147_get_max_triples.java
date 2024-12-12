import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long getMaxTriples(long n) {
        return getMaxTriples(n, n);
    }

    public static long getMaxTriples(long n, long m) {
        long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (i+1)*(i+1) - (i+1)*(i+1) + (i+1)*(i+1) + (i+1)*(i+1);
        }
        for (int i = 0; i < m; i++) {
            ans += (i+1)*(i+1) - (i+1)*(i+1) + (i+1)*(i+1) + (i+1)*(i+1);
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
