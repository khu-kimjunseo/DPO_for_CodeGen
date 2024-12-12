### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long closestInteger(String value) {
        if (value == null || value.length() == 0) return 0;
        if (value.indexOf('.') == -1) return Long.parseLong(value);
        value = value.replaceAll("0*$", "");
        double num = Double.parseDouble(value);
        if (value.endsWith(".5")) {
            return (long)(num > 0 ? Math.ceil(num) : Math.floor(num));
        } else {
            return Math.round(num);
        }
    }
    
    

}


### Python version

def closest_integer(value: str) -> int:
    from math import floor, ceil

    if value.count('.') == 1:
        # remove trailing zeros
        while (value[-1] == '0'):
            value = value[:-1]

    num = float(value)
    if value[-2:] == '.5':
        if num > 0:
            res = ceil(num)
        else:
            res = floor(num)
    elif len(value) > 0:
        res = int(round(num))
    else:
        res = 0

    return res
