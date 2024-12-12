### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String StrongestExtension(String class_name, ArrayList<String> extensions) {
        String strong = extensions.get(0);
        int myVal = extensions.get(0).replaceAll("[^A-Z]", "").length() - extensions.get(0).replaceAll("[^a-z]", "").length();
        for (String s : extensions) {
            int val = s.replaceAll("[^A-Z]", "").length() - s.replaceAll("[^a-z]", "").length();
            if (val > myVal) {
                strong = s;
                myVal = val;
            }
        }
        return class_name + "." + strong;
    }
    

}


### Python version

from typing import List

def Strongest_Extension(class_name: str, extensions: List[str]) -> str:
    strong = extensions[0]
    my_val = len([x for x in extensions[0] if x.isalpha() and x.isupper()]) - len([x for x in extensions[0] if x.isalpha() and x.islower()])
    for s in extensions:
        val = len([x for x in s if x.isalpha() and x.isupper()]) - len([x for x in s if x.isalpha() and x.islower()])
        if val > my_val:
            strong = s
            my_val = val

    ans = class_name + "." + strong
    return ans
