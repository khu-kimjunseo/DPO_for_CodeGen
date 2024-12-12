import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long fib4(long n) {
        if (n == 0) {
            return 1;
        } else if (n == 1) {
            return 2;
        } else if (n == 2) {
            return 3;
        } else if (n == 3) {
            return 4;
        } else {
            return fib4(n - 1) + fib4(n - 2);
        }
    }
    public static void main(String[] args) {
    assert(fib4((5l)) == (4l));
    assert(fib4((8l)) == (28l));
    assert(fib4((10l)) == (104l));
    assert(fib4((12l)) == (386l));
    }

}
