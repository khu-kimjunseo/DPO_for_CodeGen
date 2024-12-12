import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long chooseNum(long x, long y) {
        return choose_num(x, y, 0);
    }

    public static long chooseNum(long x, long y, long z) {
        if (x == y) {
            return z;
        }
        if (x > y) {
            return choose_num(x, y, z);
        }
        return choose_num(x, y, z) + choose_num(x, y, z);
    }
    public static void main(String[] args) {
    assert(chooseNum((12l), (15l)) == (14l));
    assert(chooseNum((13l), (12l)) == (-1l));
    assert(chooseNum((33l), (12354l)) == (12354l));
    assert(chooseNum((5234l), (5233l)) == (-1l));
    assert(chooseNum((6l), (29l)) == (28l));
    assert(chooseNum((27l), (10l)) == (-1l));
    assert(chooseNum((7l), (7l)) == (-1l));
    assert(chooseNum((546l), (546l)) == (546l));
    }

}
