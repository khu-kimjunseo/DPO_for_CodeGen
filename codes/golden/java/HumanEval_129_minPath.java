import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> minPath(ArrayList<ArrayList<Long>> grid, long k) {
        long n = grid.size();
        long val = n * n + 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid.get(i).get(j) == 1) {
                    ArrayList<Long> temp = new ArrayList<>();
                    if (i != 0) {
                        temp.add(grid.get(i - 1).get(j));
                    }
                    if (j != 0) {
                        temp.add(grid.get(i).get(j - 1));
                    }
                    if (i != n - 1) {
                        temp.add(grid.get(i + 1).get(j));
                    }
                    if (j != n - 1) {
                        temp.add(grid.get(i).get(j + 1));
                    }
                    val = Collections.min(temp);
                }
            }
        }
        ArrayList<Long> ans = new ArrayList<>();
        for (int i = 0; i < k; i++) {
            if (i % 2 == 0) {
                ans.add(1L);
            } else {
                ans.add(val);
            }
        }
        return ans;
    }
    public static void main(String[] args) {
    assert(minPath((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)4l, (long)5l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)7l, (long)8l, (long)9l))))), (3l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)1l)))));
    assert(minPath((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)5l, (long)9l, (long)3l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)4l, (long)1l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)7l, (long)8l, (long)2l))))), (1l)).equals((new ArrayList<Long>(Arrays.asList((long)1l)))));
    assert(minPath((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)5l, (long)6l, (long)7l, (long)8l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)9l, (long)10l, (long)11l, (long)12l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)13l, (long)14l, (long)15l, (long)16l))))), (4l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)1l, (long)2l)))));
    assert(minPath((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)6l, (long)4l, (long)13l, (long)10l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)5l, (long)7l, (long)12l, (long)1l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)3l, (long)16l, (long)11l, (long)15l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)8l, (long)14l, (long)9l, (long)2l))))), (7l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)10l, (long)1l, (long)10l, (long)1l, (long)10l, (long)1l)))));
    assert(minPath((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)8l, (long)14l, (long)9l, (long)2l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)6l, (long)4l, (long)13l, (long)15l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)5l, (long)7l, (long)1l, (long)12l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)3l, (long)10l, (long)11l, (long)16l))))), (5l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)7l, (long)1l, (long)7l, (long)1l)))));
    assert(minPath((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)11l, (long)8l, (long)7l, (long)2l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)5l, (long)16l, (long)14l, (long)4l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)9l, (long)3l, (long)15l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)12l, (long)13l, (long)10l, (long)1l))))), (9l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)6l, (long)1l, (long)6l, (long)1l, (long)6l, (long)1l, (long)6l, (long)1l)))));
    assert(minPath((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)12l, (long)13l, (long)10l, (long)1l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)9l, (long)3l, (long)15l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)5l, (long)16l, (long)14l, (long)4l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)11l, (long)8l, (long)7l, (long)2l))))), (12l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)6l, (long)1l, (long)6l, (long)1l, (long)6l, (long)1l, (long)6l, (long)1l, (long)6l, (long)1l, (long)6l)))));
    assert(minPath((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)2l, (long)7l, (long)4l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)3l, (long)1l, (long)5l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)6l, (long)8l, (long)9l))))), (8l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)1l, (long)3l, (long)1l, (long)3l, (long)1l, (long)3l)))));
    assert(minPath((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)6l, (long)1l, (long)5l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)3l, (long)8l, (long)9l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)2l, (long)7l, (long)4l))))), (8l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)5l, (long)1l, (long)5l, (long)1l, (long)5l, (long)1l, (long)5l)))));
    assert(minPath((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)3l, (long)4l))))), (10l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)1l, (long)2l, (long)1l, (long)2l, (long)1l, (long)2l, (long)1l, (long)2l)))));
    assert(minPath((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)3l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)3l, (long)2l))))), (10l)).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)3l, (long)1l, (long)3l, (long)1l, (long)3l, (long)1l, (long)3l, (long)1l, (long)3l)))));
    }

}
