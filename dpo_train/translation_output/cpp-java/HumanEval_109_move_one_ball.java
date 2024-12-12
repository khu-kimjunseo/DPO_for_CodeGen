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
        long min_value = *std::min_element(arr.begin(), arr.end());
        long min_index = std::find(arr.begin(), arr.end(), min_value) - arr.begin();
        long max_value = *std::max_element(arr.begin(), arr.end());
        long max_index = std::find(arr.begin(), arr.end(), max_value) - arr.begin();
        long sum = 0;
        for (long i = min_index; i < max_index; i++) {
            sum += arr[i];
        }
        long new_sum = sum + arr[max_index];
        if (new_sum == min_value) {
            return true;
        }
        return false;
    }
    public static void main(String[] args) {
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList((long)3l, (long)4l, (long)5l, (long)1l, (long)2l)))) == (true));
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList((long)3l, (long)5l, (long)10l, (long)1l, (long)2l)))) == (true));
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList((long)4l, (long)3l, (long)1l, (long)2l)))) == (false));
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList((long)3l, (long)5l, (long)4l, (long)1l, (long)2l)))) == (false));
    assert(moveOneBall((new ArrayList<Long>(Arrays.asList()))) == (true));
    }

}
