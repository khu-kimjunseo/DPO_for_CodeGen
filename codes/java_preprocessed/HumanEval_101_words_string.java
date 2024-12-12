import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> wordsString(String s) {
        if (s.isEmpty()) {
            return new ArrayList<String>();
        }

        ArrayList<String> sList = new ArrayList<String>();

        for (char c : s.toCharArray()) {
            if (c == ',') {
                sList.add(" ");
            } else {
                sList.add(Character.toString(c));
            }
        }

        String joinedString = String.join("", sList);
        return new ArrayList<String>(Arrays.asList(joinedString.split("\\s+")));
    }
    

}
