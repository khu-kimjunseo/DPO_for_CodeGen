import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> allPrefixes(String string) {
        ArrayList<String> result = new ArrayList<>();

        for (int i = 0; i < string.length(); i++) {
            result.add(string.substring(0, i+1));
        }
        return result;
    }
    

}
