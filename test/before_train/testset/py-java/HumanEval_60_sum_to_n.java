import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long sumToN(long n) {
        return sum_to_n(n);
    }
    public static void main(String[] args) {
    assert(sumToN((1l)) == (1l));
    assert(sumToN((6l)) == (21l));
    assert(sumToN((11l)) == (66l));
    assert(sumToN((30l)) == (465l));
    assert(sumToN((100l)) == (5050l));
    }

}
