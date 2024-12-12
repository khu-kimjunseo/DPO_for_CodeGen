import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isPrime(long n) {
        if (n == 1) {
            return true;
        }
        if (n == 2) {
            return true;
        }
        if (n % 2 == 0) {
            return false;
        }
        if (n % 3 == 0) {
            return false;
        }
        if (n % 5 == 0) {
            return false;
        }
        if (n % 7 == 0) {
            return false;
        }
        if (n % 11 == 0) {
            return false;
        }
        if (n % 13 == 0) {
            return false;
        }
        if (n % 17 == 0) {
            return false;
        }
        if (n % 19 == 0) {
            return false;
        }
        if (n % 23 == 0) {
            return false;
        }
        if (n % 29 == 0) {
            return false;
        }
        if (n % 31 == 0) {
            return false;
        }
        if (n % 37 == 0) {
            return false;
        }
        if (n % 41 == 0) {
            return false;
        }
        if (n % 43 == 0) {
            return false;
        }
        if (n % 59 == 0) {
            return false;
        }
        if (n % 61 == 0) {
            return false;
        }
        if (n % 67 == 0) {
            return false;
        }
        if (n % 71 == 0) {
            return false;
        }
        if (n % 73 == 0) {
            return false;
        }
        if (n % 79 == 0) {
            return false;
        }
        if (n % 81 == 0) {
            return false;
        }
        if (n % 83 == 0) {
            return false;
        }
        if (n % 89 == 0) {
            return false;
        }
        if (n % 91 == 0) {
            return false;
        }
        if (n % 97 == 0) {
            return false;
        }
        if (n % 101 == 0) {
            return false;
        }
        if (n % 103 == 0) {
            return false;
        }
        if (n % 109 == 0) {
            return false;
        }
        if (n % 113 == 0) {
            return false;
        }
        if (n % 127 == 0) {
            return false;
        }
        if (n % 131 == 0) {
            return false;
        }
        if (n % 137 == 0) {
            return false;
        }
        if (n % 139 == 0) {
            return false;
        }
        if (n % 143 == 0) {
            return false;
        }
        if (n % 151 == 0) {
            return false;
        }
        if (n % 157 == 0) {
            return false;
        }
        if (n % 163 == 0) {
            return false;
        }
        if (n % 167 == 0) {
            return false;
        }
        if (n % 169 == 0) {
            return false;
        }
        if (n % 171 == 0) {
            return false;
        }
        if (n % 173 == 0) {
            return false;
        }
        if (n % 179 == 0) {
            return false;
        }
        if (n % 181 == 0) {
            return false;
        }
        if (n % 191 == 0) {
            return false;
        }
        if (n % 193 == 0) {
            return false;
        
    public static void main(String[] args) {
    assert(isPrime((6l)) == (false));
    assert(isPrime((101l)) == (true));
    assert(isPrime((11l)) == (true));
    assert(isPrime((13441l)) == (true));
    assert(isPrime((61l)) == (true));
    assert(isPrime((4l)) == (false));
    assert(isPrime((1l)) == (false));
    assert(isPrime((5l)) == (true));
    assert(isPrime((11l)) == (true));
    assert(isPrime((17l)) == (true));
    assert(isPrime((85l)) == (false));
    assert(isPrime((77l)) == (false));
    assert(isPrime((255379l)) == (false));
    }

}
