import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean moveOneBall(ArrayList<Long> arr) {
        if (arr.size() == 0) {
            return true;
        }
        List<Long> sortedArray = new ArrayList<>(arr);
        Collections.sort(sortedArray);
        int minIndex = arr.indexOf(Collections.min(arr));
        List<Long> myArr = new ArrayList<>(arr.subList(minIndex, arr.size()));
        myArr.addAll(arr.subList(0, minIndex));
        for (int i = 0; i < arr.size(); i++) {
            if (!myArr.get(i).equals(sortedArray.get(i))) {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList((long)3l, (long)4l, (long)5l, (long)1l, (long)2l)))) == (true));
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList((long)3l, (long)5l, (long)10l, (long)1l, (long)2l)))) == (true));
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList((long)4l, (long)3l, (long)1l, (long)2l)))) == (false));
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList((long)3l, (long)5l, (long)4l, (long)1l, (long)2l)))) == (false));
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList()))) == (true));
    }

}
