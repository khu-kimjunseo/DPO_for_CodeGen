import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean validDate(String date) {
        try {
            date = date.trim();
            String[] parts = date.split("-");
            int month = Integer.parseInt(parts[0]);
            int day = Integer.parseInt(parts[1]);
            int year = Integer.parseInt(parts[2]);
            if (month < 1 || month > 12) {
                return false;
            }
            if (Arrays.asList(1,3,5,7,8,10,12).contains(month) && (day < 1 || day > 31)) {
                return false;
            }
            if (Arrays.asList(4,6,9,11).contains(month) && (day < 1 || day > 30)) {
                return false;
            }
            if (month == 2 && (day < 1 || day > 29)) {
                return false;
            }
        } catch (Exception e) {
            return false;
        }
        return true;
    }
    

}
