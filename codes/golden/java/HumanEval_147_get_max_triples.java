import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long getMaxTriples(long n) {
        long ans = 0;
        long[] A = new long[(int)n+1];
        for (int i = 1; i <= n; i++) {
            A[i] = i*i-i+1;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = i+1; j <= n; j++) {
                for (int k = j+1; k <= n; k++) {
                    if ((A[i]+A[j]+A[k])%3 == 0) {
                        ans++;
                    }
                }
            }
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
