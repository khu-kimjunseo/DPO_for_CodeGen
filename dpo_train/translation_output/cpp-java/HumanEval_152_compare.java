import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> compare(ArrayList<Long> game, ArrayList<Long> guess) {
        ArrayList<Long> res = new ArrayList<>();
        for(int i=0;i<game.size();i++){
            res.add(abs(game[i]-guess[i]));
        }
        return res;
    }
    public static void main(String[] args) {
    assert(compare((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)5l, (long)1l))), (new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l, (long)2l, (long)-2l)))).equals((new ArrayList<Long>(Arrays.asList((long)0l, (long)0l, (long)0l, (long)0l, (long)3l, (long)3l)))));
    assert(compare((new ArrayList<Long>(Arrays.asList((long)0l, (long)0l, (long)0l, (long)0l, (long)0l, (long)0l))), (new ArrayList<Long>(Arrays.asList((long)0l, (long)0l, (long)0l, (long)0l, (long)0l, (long)0l)))).equals((new ArrayList<Long>(Arrays.asList((long)0l, (long)0l, (long)0l, (long)0l, (long)0l, (long)0l)))));
    assert(compare((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l))), (new ArrayList<Long>(Arrays.asList((long)-1l, (long)-2l, (long)-3l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)4l, (long)6l)))));
    assert(compare((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)5l))), (new ArrayList<Long>(Arrays.asList((long)-1l, (long)2l, (long)3l, (long)4l)))).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)0l, (long)0l, (long)1l)))));
    }

}