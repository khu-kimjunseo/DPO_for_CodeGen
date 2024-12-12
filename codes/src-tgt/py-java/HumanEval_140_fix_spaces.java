### Python version

def fix_spaces(text: str) -> str:
    new_text = ""
    i = 0
    start, end = 0, 0
    while i < len(text):
        if text[i] == " ":
            end += 1
        else:
            if end - start > 2:
                new_text += "-"+text[i]
            elif end - start > 0:
                new_text += "_"*(end - start)+text[i]
            else:
                new_text += text[i]
            start, end = i+1, i+1
        i+=1
    if end - start > 2:
        new_text += "-"
    elif end - start > 0:
        new_text += "_"
    return new_text

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String fixSpaces(String text) {
        String newText = "";
        int i = 0;
        int start = 0, end = 0;
        while (i < text.length()) {
            if (text.charAt(i) == ' ') {
                end++;
            } else {
                if (end - start > 2) {
                    newText += "-"+text.charAt(i);
                } else if (end - start > 0) {
                    newText += "_".repeat(end - start)+text.charAt(i);
                } else {
                    newText += text.charAt(i);
                }
                start = i+1; end = i+1;
            }
            i++;
        }
        if (end - start > 2) {
            newText += "-";
        } else if (end - start > 0) {
            newText += "_";
        }
        return newText;
    }
    
    

}

