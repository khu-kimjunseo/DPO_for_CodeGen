### Python version

def any_int(x: float, y: float, z: float) -> bool:
    
    if isinstance(x,int) and isinstance(y,int) and isinstance(z,int):
        if (x+y==z) or (x+z==y) or (y+z==x):
            return True
        return False
    return False

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean anyInt(float x, float y, float z) {
        return any_int(x, y, z);
    }
}

class Solution {
    public static void main(String[] args) {
        System.out.println(Problem.anyInt(1.0, 1.0, 1.0));
    }
}
