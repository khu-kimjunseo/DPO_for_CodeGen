import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean willItFly(ArrayList<Long> q, long w) {
        return will_it_fly(q, w, 0);
    }
    public static boolean will_it_fly(ArrayList<Long> q, long w, int i) {
        if (i == q.size()) {
            return true;
        }
        if (i == 0) {
            return false;
        }
        if (i == 1) {
            return will_it_fly(q, w);
        }
        if (i == 2) {
            return will_it_fly(q, w);
        }
        if (i == 3) {
            return will_it_fly(q, w);
        }
        if (i == 4) {
            return will_it_fly(q, w);
        }
        if (i == 5) {
            return will_it_fly(q, w);
        }
        if (i == 6) {
            return will_it_fly(q, w);
        }
        if (i == 7) {
            return will_it_fly(q, w);
        }
        if (i == 8) {
            return will_it_fly(q, w);
        }
        if (i == 9) {
            return will_it_fly(q, w);
        }
        if (i == 10) {
            return will_it_fly(q, w);
        }
        if (i == 11) {
            return will_it_fly(q, w);
        }
        if (i == 12) {
            return will_it_fly(q, w);
        }
        if (i == 13) {
            return will_it_fly(q, w);
        }
        if (i == 14) {
            return will_it_fly(q, w);
        }
        if (i == 15) {
            return will_it_fly(q, w);
        }
        if (i == 16) {
            return will_it_fly(q, w);
        }
        if (i == 17) {
            return will_it_fly(q, w);
        }
        if (i == 18) {
            return will_it_fly(q, w);
        }
        if (i == 19) {
            return will_it_fly(q, w);
        }
        if (i == 20) {
            return will_it_fly(q, w);
        }
        if (i == 21) {
            return will_it_fly(q, w);
        }
        if (i == 22) {
            return will_it_fly(q, w);
        }
        if (i == 23) {
            return will_it_fly(q, w);
        }
        if (i == 24) {
            return will_it_fly(q, w);
        }
        if (i == 25) {
            return will_it_fly(q, w);
        }
        if (i == 26) {
            return will_it_fly(q, w);
        }
        if (i == 27) {
            return will_it_fly(q, w);
        }
        if (i == 28) {
            return will_it_fly(q, w);
        }
        if (i == 29) {
            return will_it_fly(q, w);
        }
        if (i == 30) {
            return will_it_fly(q, w);
        }
        if (i == 31) {
            return will
    public static void main(String[] args) {
    assert(willItFly((new ArrayList<Long>(Arrays.asList((long)3l, (long)2l, (long)3l))), (9l)) == (true));
    assert(willItFly((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l))), (5l)) == (false));
    assert(willItFly((new ArrayList<Long>(Arrays.asList((long)3l))), (5l)) == (true));
    assert(willItFly((new ArrayList<Long>(Arrays.asList((long)3l, (long)2l, (long)3l))), (1l)) == (false));
    assert(willItFly((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l))), (6l)) == (false));
    assert(willItFly((new ArrayList<Long>(Arrays.asList((long)5l))), (5l)) == (true));
    }

}
