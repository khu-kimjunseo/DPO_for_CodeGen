import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long largestPrimeFactor(long n) {
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        if (n % 2 == 0) {
            return 3;
        }
        if (n % 3 == 0) {
            return 4;
        }
        if (n % 5 == 0) {
            return 5;
        }
        if (n % 7 == 0) {
            return 6;
        }
        if (n % 11 == 0) {
            return 7;
        }
        if (n % 13 == 0) {
            return 8;
        }
        if (n % 17 == 0) {
            return 9;
        }
        if (n % 19 == 0) {
            return 10;
        }
        if (n % 23 == 0) {
            return 11;
        }
        if (n % 29 == 0) {
            return 12;
        }
        if (n % 31 == 0) {
            return 13;
        }
        if (n % 37 == 0) {
            return 14;
        }
        if (n % 41 == 0) {
            return 15;
        }
        if (n % 43 == 0) {
            return 16;
        }
        if (n % 47 == 0) {
            return 17;
        }
        if (n % 53 == 0) {
            return 18;
        }
        if (n % 59 == 0) {
            return 19;
        }
        if (n % 61 == 0) {
            return 20;
        }
        if (n % 67 == 0) {
            return 21;
        }
        if (n % 71 == 0) {
            return 22;
        }
        if (n % 73 == 0) {
            return 23;
        }
        if (n % 79 == 0) {
            return 24;
        }
        if (n % 81 == 0) {
            return 25;
        }
        if (n % 83 == 0) {
            return 26;
        }
        if (n % 89 == 0) {
            return 27;
        }
        if (n % 91 == 0) {
            return 28;
        }
        if (n % 93 == 0) {
            return 29;
        }
        if (n % 99 == 0) {
            return 30;
        }
        if (n % 101 == 0) {
            return 31;
        }
        if (n % 103 == 0) {
            return 32;
        }
        if (n % 107 == 0) {
            return 33;
        }
        if (n % 109 == 0) {
            return 34;
        }
        if (n % 113 == 0) {
            return 35;
        }
        if (n % 127 == 0) {
            return 36;
        }
        if (n % 131 == 0) {
            return 37;
        }
        if (n % 137 == 0) {
            return 38;
        }
        if (n % 139 == 0) {
            return 39;
        }
        if (n % 143 == 0) {
            return 40;
        }
        if (n % 147 == 0) {
            return 41;
        }
        if (n % 149 == 0) {
            return 42;
        }
        if (n % 151 == 0) {
            return 43;
        }
        if (n % 157 == 0) {
            return 44;
    public static void main(String[] args) {
    assert(largestPrimeFactor((15l)) == (5l));
    assert(largestPrimeFactor((27l)) == (3l));
    assert(largestPrimeFactor((63l)) == (7l));
    assert(largestPrimeFactor((330l)) == (11l));
    assert(largestPrimeFactor((13195l)) == (29l));
    }

}
