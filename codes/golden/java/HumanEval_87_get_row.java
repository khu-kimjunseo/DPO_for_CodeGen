import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Pair<Long, Long>> getRow(ArrayList<ArrayList<Long>> lst, long x) {
        ArrayList<Pair<Long, Long>> coords = new ArrayList<Pair<Long, Long>>();
        for (int i = 0; i < lst.size(); i++) {
            for (int j = 0; j < lst.get(i).size(); j++) {
                if (lst.get(i).get(j) == x) {
                    coords.add(new Pair<Long, Long>((long)i, (long)j));
                }
            }
        }
        coords.sort((a, b) -> {
            if (a.getValue0() == b.getValue0()) {
                return b.getValue1().compareTo(a.getValue1());
            }
            return a.getValue0().compareTo(b.getValue0());
        });
        return coords;
    }
    
    public static void main(String[] args) {
    assert(getRow((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)1l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)1l))))), (1l)).equals((new ArrayList<Pair<Long, Long>>(Arrays.asList((Pair<Long, Long>)Pair.with(0l, 0l), (Pair<Long, Long>)Pair.with(1l, 4l), (Pair<Long, Long>)Pair.with(1l, 0l), (Pair<Long, Long>)Pair.with(2l, 5l), (Pair<Long, Long>)Pair.with(2l, 0l))))));
    assert(getRow((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)6l))))), (2l)).equals((new ArrayList<Pair<Long, Long>>(Arrays.asList((Pair<Long, Long>)Pair.with(0l, 1l), (Pair<Long, Long>)Pair.with(1l, 1l), (Pair<Long, Long>)Pair.with(2l, 1l), (Pair<Long, Long>)Pair.with(3l, 1l), (Pair<Long, Long>)Pair.with(4l, 1l), (Pair<Long, Long>)Pair.with(5l, 1l))))));
    assert(getRow((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)1l, (long)3l, (long)4l, (long)5l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)1l, (long)4l, (long)5l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)1l, (long)5l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)1l, (long)6l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)1l))))), (1l)).equals((new ArrayList<Pair<Long, Long>>(Arrays.asList((Pair<Long, Long>)Pair.with(0l, 0l), (Pair<Long, Long>)Pair.with(1l, 0l), (Pair<Long, Long>)Pair.with(2l, 1l), (Pair<Long, Long>)Pair.with(2l, 0l), (Pair<Long, Long>)Pair.with(3l, 2l), (Pair<Long, Long>)Pair.with(3l, 0l), (Pair<Long, Long>)Pair.with(4l, 3l), (Pair<Long, Long>)Pair.with(4l, 0l), (Pair<Long, Long>)Pair.with(5l, 4l), (Pair<Long, Long>)Pair.with(5l, 0l), (Pair<Long, Long>)Pair.with(6l, 5l), (Pair<Long, Long>)Pair.with(6l, 0l))))));
    assert(getRow((new ArrayList<ArrayList<Long>>(Arrays.asList())), (1l)).equals((new ArrayList<Pair<Long, Long>>(Arrays.asList()))));
    assert(getRow((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l))))), (2l)).equals((new ArrayList<Pair<Long, Long>>(Arrays.asList()))));
    assert(getRow((new ArrayList<ArrayList<Long>>(Arrays.asList((ArrayList<Long>)new ArrayList<Long>(Arrays.asList()), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l)), (ArrayList<Long>)new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l))))), (3l)).equals((new ArrayList<Pair<Long, Long>>(Arrays.asList((Pair<Long, Long>)Pair.with(2l, 2l))))));
    }

}
