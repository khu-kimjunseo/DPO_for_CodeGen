### Java version

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


### Python version

from typing import Dict

def check_dict_case(dict: Dict[str, str]) -> bool:
    if len(dict.keys()) == 0:
        return False
    else:
        state = "start"
        for key in dict.keys():

            if isinstance(key, str) == False:
                state = "mixed"
                break
            if state == "start":
                if key.isupper():
                    state = "upper"
                elif key.islower():
                    state = "lower"
                else:
                    break
            elif (state == "upper" and not key.isupper()) or (state == "lower" and not key.islower()):
                    state = "mixed"
                    break
            else:
                continue
        return state == "upper" or state == "lower"
