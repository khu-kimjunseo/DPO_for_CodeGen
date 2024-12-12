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
    

}
