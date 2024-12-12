import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long fibfib(long n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        return fibfib(n - 1) + fibfib(n - 2) + fibfib(n - 3);
    }
    public static void main(String[] args) {
    assert(fibfib((2l)) == (1l));
    assert(fibfib((1l)) == (0l));
    assert(fibfib((5l)) == (4l));
    assert(fibfib((8l)) == (24l));
    assert(fibfib((10l)) == (81l));
    assert(fibfib((12l)) == (274l));
    assert(fibfib((14l)) == (927l));
    }

}
