import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long search(ArrayList<Long> lst) {
        long ans = 0;
        for (int i = 0; i < lst.size(); i++) {
            ans += lst.get(i);
        }
        return ans;
    }
    public static void main(String[] args) {
    assert(search((new ArrayList<Long>(Arrays.asList((long)5l, (long)5l, (long)5l, (long)5l, (long)1l)))) == (1l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)4l, (long)1l, (long)4l, (long)1l, (long)4l, (long)4l)))) == (4l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)3l, (long)3l)))) == (-1l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)8l, (long)8l, (long)8l, (long)8l, (long)8l, (long)8l, (long)8l, (long)8l)))) == (8l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)2l, (long)3l, (long)3l, (long)2l, (long)2l)))) == (2l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)2l, (long)7l, (long)8l, (long)8l, (long)4l, (long)8l, (long)7l, (long)3l, (long)9l, (long)6l, (long)5l, (long)10l, (long)4l, (long)3l, (long)6l, (long)7l, (long)1l, (long)7l, (long)4l, (long)10l, (long)8l, (long)1l)))) == (1l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)3l, (long)2l, (long)8l, (long)2l)))) == (2l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)6l, (long)7l, (long)1l, (long)8l, (long)8l, (long)10l, (long)5l, (long)8l, (long)5l, (long)3l, (long)10l)))) == (1l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)8l, (long)8l, (long)3l, (long)6l, (long)5l, (long)6l, (long)4l)))) == (-1l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)6l, (long)9l, (long)6l, (long)7l, (long)1l, (long)4l, (long)7l, (long)1l, (long)8l, (long)8l, (long)9l, (long)8l, (long)10l, (long)10l, (long)8l, (long)4l, (long)10l, (long)4l, (long)10l, (long)1l, (long)2l, (long)9l, (long)5l, (long)7l, (long)9l)))) == (1l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)1l, (long)9l, (long)10l, (long)1l, (long)3l)))) == (1l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)6l, (long)9l, (long)7l, (long)5l, (long)8l, (long)7l, (long)5l, (long)3l, (long)7l, (long)5l, (long)10l, (long)10l, (long)3l, (long)6l, (long)10l, (long)2l, (long)8l, (long)6l, (long)5l, (long)4l, (long)9l, (long)5l, (long)3l, (long)10l)))) == (5l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)1l)))) == (1l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)8l, (long)8l, (long)10l, (long)6l, (long)4l, (long)3l, (long)5l, (long)8l, (long)2l, (long)4l, (long)2l, (long)8l, (long)4l, (long)6l, (long)10l, (long)4l, (long)2l, (long)1l, (long)10l, (long)2l, (long)1l, (long)1l, (long)5l)))) == (4l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)2l, (long)10l, (long)4l, (long)8l, (long)2l, (long)10l, (long)5l, (long)1l, (long)2l, (long)9l, (long)5l, (long)5l, (long)6l, (long)3l, (long)8l, (long)6l, (long)4l, (long)10l)))) == (2l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)1l, (long)6l, (long)10l, (long)1l, (long)6l, (long)9l, (long)10l, (long)8l, (long)6l, (long)8l, (long)7l, (long)3l)))) == (1l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)9l, (long)2l, (long)4l, (long)1l, (long)5l, (long)1l, (long)5l, (long)2l, (long)5l, (long)7l, (long)7l, (long)7l, (long)3l, (long)10l, (long)1l, (long)5l, (long)4l, (long)2l, (long)8l, (long)4l, (long)1l, (long)9l, (long)10l, (long)7l, (long)10l, (long)2l, (long)8l, (long)10l, (long)9l, (long)4l)))) == (4l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)2l, (long)6l, (long)4l, (long)2l, (long)8l, (long)7l, (long)5l, (long)6l, (long)4l, (long)10l, (long)4l, (long)6l, (long)3l, (long)7l, (long)8l, (long)8l, (long)3l, (long)1l, (long)4l, (long)2l, (long)2l, (long)10l, (long)7l)))) == (4l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)9l, (long)8l, (long)6l, (long)10l, (long)2l, (long)6l, (long)10l, (long)2l, (long)7l, (long)8l, (long)10l, (long)3l, (long)8l, (long)2l, (long)6l, (long)2l, (long)3l, (long)1l)))) == (2l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)5l, (long)5l, (long)3l, (long)9l, (long)5l, (long)6l, (long)3l, (long)2l, (long)8l, (long)5l, (long)6l, (long)10l, (long)10l, (long)6l, (long)8l, (long)4l, (long)10l, (long)7l, (long)7l, (long)10l, (long)8l)))) == (-1l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)10l)))) == (-1l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)9l, (long)7l, (long)7l, (long)2l, (long)4l, (long)7l, (long)2l, (long)10l, (long)9l, (long)7l, (long)5l, (long)7l, (long)2l)))) == (2l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)5l, (long)4l, (long)10l, (long)2l, (long)1l, (long)1l, (long)10l, (long)3l, (long)6l, (long)1l, (long)8l)))) == (1l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)7l, (long)9l, (long)9l, (long)9l, (long)3l, (long)4l, (long)1l, (long)5l, (long)9l, (long)1l, (long)2l, (long)1l, (long)1l, (long)10l, (long)7l, (long)5l, (long)6l, (long)7l, (long)6l, (long)7l, (long)7l, (long)6l)))) == (1l));
    assert(search((new ArrayList<Long>(Arrays.asList((long)3l, (long)10l, (long)10l, (long)9l, (long)2l)))) == (-1l));
    }

}
