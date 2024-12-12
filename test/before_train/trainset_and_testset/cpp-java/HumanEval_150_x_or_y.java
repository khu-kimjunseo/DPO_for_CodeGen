import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long xOrY(long n, long x, long y) {
        if (n == 1) {
            return y;
        }
        for (long i = 2; i < n; i++) {
            if (n % i == 0) {
                return y;
            }
        }
        return x;
    }
    public static void main(String[] args) {
    assert(xOrY((7l), (34l), (12l)) == (34l));
    assert(xOrY((15l), (8l), (5l)) == (5l));
    assert(xOrY((3l), (33l), (5212l)) == (33l));
    assert(xOrY((1259l), (3l), (52l)) == (3l));
    assert(xOrY((7919l), (-1l), (12l)) == (-1l));
    assert(xOrY((3609l), (1245l), (583l)) == (583l));
    assert(xOrY((91l), (56l), (129l)) == (129l));
    assert(xOrY((6l), (34l), (1234l)) == (1234l));
    assert(xOrY((1l), (2l), (0l)) == (0l));
    assert(xOrY((2l), (2l), (0l)) == (2l));
    }

}