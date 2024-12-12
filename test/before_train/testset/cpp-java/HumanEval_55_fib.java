import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long fib(long n) {
        if (n == 0) {
            return 0;
        }
        long result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
    public static void main(String[] args) {
    assert(fib((10l)) == (55l));
    assert(fib((1l)) == (1l));
    assert(fib((8l)) == (21l));
    assert(fib((11l)) == (89l));
    assert(fib((12l)) == (144l));
    }

}
