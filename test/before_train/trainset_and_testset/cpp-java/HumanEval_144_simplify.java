import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean simplify(String x, String n) {
        return simplify(x, n.toLowerCase());
    }
    public static boolean simplify(String x, String n) {
        if (x.length() == 0) return false;
        if (n.length() == 0) return true;
        if (n.length() == 1) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 2) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 3) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 4) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 5) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 6) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 7) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 8) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 9) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 10) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 11) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 12) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 13) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 14) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 15) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 16) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 17) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 18) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 19) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 20) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 21) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n.length() == 22) return simplify(x.substring(0, 1), n.substring(0, 1));
        if (n
    public static void main(String[] args) {
    assert(simplify(("1/5"), ("5/1")) == (true));
    assert(simplify(("1/6"), ("2/1")) == (false));
    assert(simplify(("5/1"), ("3/1")) == (true));
    assert(simplify(("7/10"), ("10/2")) == (false));
    assert(simplify(("2/10"), ("50/10")) == (true));
    assert(simplify(("7/2"), ("4/2")) == (true));
    assert(simplify(("11/6"), ("6/1")) == (true));
    assert(simplify(("2/3"), ("5/2")) == (false));
    assert(simplify(("5/2"), ("3/5")) == (false));
    assert(simplify(("2/4"), ("8/4")) == (true));
    assert(simplify(("2/4"), ("4/2")) == (true));
    assert(simplify(("1/5"), ("5/1")) == (true));
    assert(simplify(("1/5"), ("1/5")) == (false));
    }

}
