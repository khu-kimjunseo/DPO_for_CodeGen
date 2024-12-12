import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean checkDictCase(HashMap<String,String> dict) {
        if (dict.keySet().size() == 0) {
            return false;
        } else {
            String state = "start";
            for (String key : dict.keySet()) {
                if (!(key instanceof String)) {
                    state = "mixed";
                    break;
                }
                if (state == "start") {
                    if (key.matches("^[A-Z]+$")) {
                        state = "upper";
                    } else if (key.matches("^[a-z]+$")) {
                        state = "lower";
                    } else {
                        break;
                    }
                } else if ((state == "upper" && !key.matches("^[A-Z]+$")) || (state == "lower" && !key.matches("^[a-z]+$"))) {
                    state = "mixed";
                    break;
                } else {
                    break;
                }
            }
            return state == "upper" || state == "lower";
        }
    }
    
    

}
