import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long sumSquares(ArrayList<Long> lst) {
        long result = 0;
        for (int i = 0; i < lst.size(); i++) {
            result += lst.get(i);
        }
        return result;
    }
    public static void main(String[] args) {
    assert(sumSquares((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l)))) == (6l));
    assert(sumSquares((new ArrayList<Long>(Arrays.asList((long)1l, (long)4l, (long)9l)))) == (14l));
    assert(sumSquares((new ArrayList<Long>(Arrays.asList()))) == (0l));
    assert(sumSquares((new ArrayList<Long>(Arrays.asList((long)1l, (long)1l, (long)1l, (long)1l, (long)1l, (long)1l, (long)1l, (long)1l, (long)1l)))) == (9l));
    assert(sumSquares((new ArrayList<Long>(Arrays.asList((long)-1l, (long)-1l, (long)-1l, (long)-1l, (long)-1l, (long)-1l, (long)-1l, (long)-1l, (long)-1l)))) == (-3l));
    assert(sumSquares((new ArrayList<Long>(Arrays.asList((long)0l)))) == (0l));
    assert(sumSquares((new ArrayList<Long>(Arrays.asList((long)-1l, (long)-5l, (long)2l, (long)-1l, (long)-5l)))) == (-126l));
    assert(sumSquares((new ArrayList<Long>(Arrays.asList((long)-56l, (long)-99l, (long)1l, (long)0l, (long)-2l)))) == (3030l));
    assert(sumSquares((new ArrayList<Long>(Arrays.asList((long)-1l, (long)0l, (long)0l, (long)0l, (long)0l, (long)0l, (long)0l, (long)0l, (long)-1l)))) == (0l));
    assert(sumSquares((new ArrayList<Long>(Arrays.asList((long)-16l, (long)-9l, (long)-2l, (long)36l, (long)36l, (long)26l, (long)-20l, (long)25l, (long)-40l, (long)20l, (long)-4l, (long)12l, (long)-26l, (long)35l, (long)37l)))) == (-14196l));
    assert(sumSquares((new ArrayList<Long>(Arrays.asList((long)-1l, (long)-3l, (long)17l, (long)-1l, (long)-15l, (long)13l, (long)-1l, (long)14l, (long)-14l, (long)-12l, (long)-5l, (long)14l, (long)-14l, (long)6l, (long)13l, (long)11l, (long)16l, (long)16l, (long)4l, (long)10l)))) == (-1448l));
    }

}
