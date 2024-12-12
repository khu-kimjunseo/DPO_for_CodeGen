import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> byLength(ArrayList<Long> arr) {
        String[] dic = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        ArrayList<Long> sortedArr = (ArrayList<Long>) arr.stream().sorted(Comparator.reverseOrder()).collect(Collectors.toList());
        ArrayList<String> newArr = new ArrayList<String>();
        for (Long var : sortedArr) {
            if (var >= 1 && var <= 9) {
                newArr.add(dic[var.intValue()-1]);
            }
        }
        return newArr;
    }
    

}
