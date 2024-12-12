import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isSimplePower(long x, long n) {
        if (n == 1) return (x == 1);
        long power = 1;
        while (power < x) power = power * n;
        return (power == x);
    }
    
    public static void main(String[] args) {
    assert(isSimplePower((16l), (2l)) == (true));
    assert(isSimplePower((143214l), (16l)) == (false));
    assert(isSimplePower((4l), (2l)) == (true));
    assert(isSimplePower((9l), (3l)) == (true));
    assert(isSimplePower((16l), (4l)) == (true));
    assert(isSimplePower((24l), (2l)) == (false));
    assert(isSimplePower((128l), (4l)) == (false));
    assert(isSimplePower((12l), (6l)) == (false));
    assert(isSimplePower((1l), (1l)) == (true));
    assert(isSimplePower((1l), (12l)) == (true));
    }

}
