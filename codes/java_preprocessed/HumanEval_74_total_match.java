import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> totalMatch(ArrayList<String> lst1, ArrayList<String> lst2) {
        int l1 = lst1.stream().mapToInt(String::length).sum();
        int l2 = lst2.stream().mapToInt(String::length).sum();
        return l1 <= l2 ? lst1 : lst2;
    }
    

}
