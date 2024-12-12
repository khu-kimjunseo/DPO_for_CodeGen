import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long maxFill(ArrayList<ArrayList<Long>> grid, long capacity) {
        long max = 0;
        for (ArrayList<Long> row : grid) {
            long rowMax = max;
            for (long col : row) {
                if (col > rowMax) {
                    rowMax = col;
                }
            }
            max = Math.max(max, rowMax);
        }
        return max;
    }
    public static void main(String[] args) {
    assert(maxFill((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)0l, (long)0l, (long)1l, (long)0l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)0l, (long)1l, (long)0l, (long)0l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)1l, (long)1l, (long)1l))))), (1l)) == (6l));
    assert(maxFill((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)0l, (long)0l, (long)1l, (long)1l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)0l, (long)0l, (long)0l, (long)0l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)1l, (long)1l, (long)1l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)0l, (long)1l, (long)1l, (long)1l))))), (2l)) == (5l));
    assert(maxFill((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)0l, (long)0l, (long)0l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)0l, (long)0l, (long)0l))))), (5l)) == (0l));
    assert(maxFill((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)1l, (long)1l, (long)1l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)1l, (long)1l, (long)1l))))), (2l)) == (4l));
    assert(maxFill((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)1l, (long)1l, (long)1l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)1l, (long)1l, (long)1l))))), (9l)) == (2l));
    }

}
