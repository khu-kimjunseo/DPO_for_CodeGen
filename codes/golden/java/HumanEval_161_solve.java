import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String solve(String s) {
        int flg = 0;
        int idx = 0;
        char[] newStr = s.toCharArray();
        for (char c : s.toCharArray()) {
            if (Character.isLetter(c)) {
                newStr[idx] = Character.isUpperCase(c) ? Character.toLowerCase(c) : Character.toUpperCase(c);
                flg = 1;
            }
            idx++;
        }
        if (flg == 0) {
            return new StringBuilder(s).reverse().toString();
        }
        return new String(newStr);
    }
    public static void main(String[] args) {
    assert(solve(("AsDf")).equals(("aSdF")));
    assert(solve(("1234")).equals(("4321")));
    assert(solve(("ab")).equals(("AB")));
    assert(solve(("#a@C")).equals(("#A@c")));
    assert(solve(("#AsdfW^45")).equals(("#aSDFw^45")));
    assert(solve(("#6@2")).equals(("2@6#")));
    assert(solve(("#$a^D")).equals(("#$A^d")));
    assert(solve(("#ccc")).equals(("#CCC")));
    }

}
