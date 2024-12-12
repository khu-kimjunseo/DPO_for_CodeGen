### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean checkIfLastCharIsALetter(String txt) {
        String check = txt.substring(txt.lastIndexOf(' ')+1);
        return (check.length() == 1 && (97 <= Character.toLowerCase(check.charAt(0)) && Character.toLowerCase(check.charAt(0)) <= 122));
    }
    
    

}


### Python version

def check_if_last_char_is_a_letter(txt: str) -> bool:
 
    check = txt.split(' ')[-1]
    return True if len(check) == 1 and (97 <= ord(check.lower()) <= 122) else False
