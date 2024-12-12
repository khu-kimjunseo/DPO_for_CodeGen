import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String fileNameCheck(String file_name) {
        String[] suf = {"txt", "exe", "dll"};
        String[] lst = file_name.split("\\.");
        if (lst.length != 2) {
            return "No";
        }
        if (!Arrays.asList(suf).contains(lst[1])) {
            return "No";
        }
        if (lst[0].length() == 0 || !Character.isLetter(lst[0].charAt(0))) {
            return "No";
        }
        int t = lst[0].replaceAll("\\D", "").length();
        if (t > 3) {
            return "No";
        }
        return "Yes";
    }
    

}
