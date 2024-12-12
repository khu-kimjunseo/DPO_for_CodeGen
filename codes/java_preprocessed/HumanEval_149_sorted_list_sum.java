import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> sortedListSum(ArrayList<String> lst) {
        lst.sort(null);
        ArrayList<String> new_lst = new ArrayList<String>();
        for (String i : lst) {
            if (i.length() % 2 == 0) {
                new_lst.add(i);
            }
        }
        new_lst.sort((a, b) -> a.length() - b.length());
        return new_lst;
    }
    

}
