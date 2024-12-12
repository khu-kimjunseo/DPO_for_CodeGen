import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String stringSequence(long n) {
        String result = "";
        for (long i = 0; i <= n; i++) {
            result += std::to_string(i);
            if (i != n) {
                result += " ";
            }
        }
        return result;
    }
    public static void main(String[] args) {
    assert(stringSequence((0l)).equals(("0")));
    assert(stringSequence((3l)).equals(("0 1 2 3")));
    assert(stringSequence((10l)).equals(("0 1 2 3 4 5 6 7 8 9 10")));
    }

}
