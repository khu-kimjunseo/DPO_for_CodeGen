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
    
    public static void main(String[] args) {
    assert(fixSpaces(("Example")).equals(("Example")));
    assert(fixSpaces(("Mudasir Hanif ")).equals(("Mudasir_Hanif_")));
    assert(fixSpaces(("Yellow Yellow  Dirty  Fellow")).equals(("Yellow_Yellow__Dirty__Fellow")));
    assert(fixSpaces(("Exa   mple")).equals(("Exa-mple")));
    assert(fixSpaces(("   Exa 1 2 2 mple")).equals(("-Exa_1_2_2_mple")));
    }

}
