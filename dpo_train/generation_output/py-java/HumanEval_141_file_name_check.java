### Python version

def file_name_check(file_name: str) -> str:
    suf = ['txt', 'exe', 'dll']
    lst = file_name.split(sep='.')
    if len(lst) != 2:
        return 'No'
    if not lst[1] in suf:
        return 'No'
    if len(lst[0]) == 0:
        return 'No'
    if not lst[0][0].isalpha():
        return 'No'
    t = len([x for x in lst[0] if x.isdigit()])
    if t > 3:
        return 'No'
    return 'Yes'

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String fileNameCheck(String file_name) {
        if (file_name.endsWith(".java")) {
            return file_name;
        } else {
            return file_name + ".java";
        }
    }
}

class Problem2 {
    public static String fileNameCheck(String file_name) {
        if (file_name.endsWith(".java")) {
            return file_name;
        } else {
            return file_name + ".java";
        }
    }
}

class Problem3 {
    public static String fileNameCheck(String file_name) {
        if (file_name.endsWith(".java")) {
            return file_name;
        } else {
            return file_name + ".java";
        }
    }
}

class Problem4 {
    public static String fileNameCheck(String file_name) {
        if (file_name.endsWith(".java")) {
            return file_name;
        } else {
            return file_name + ".java";
        }
    }
}

class Problem5 {
    public static String fileNameCheck(String file_name) {
        if (file_name.endsWith(".java")) {
            return file_name;
        } else {
            return file_name + ".java";
        }
    }
}

class Problem6 {
    public static String fileNameCheck(String file_name) {
        if (file_name.endsWith(".java")) {
            return file_name;
        } else {
            return file_name + ".java";
        }
    }
}

class Problem7 {
    public static String fileNameCheck(String file_name) {
        if (file_name.endsWith(".java")) {
            return file_name;
        } else {
            return file_name + ".java";
        }
    }
}

class Problem8 {
    public static String fileNameCheck(String file_name) {
        if (file_name.endsWith(".java")) {
            return file_name;
        } else {
            return file_name + ".java";
        }
    }
}

class Problem9 {
    public static String fileNameCheck(String file_name) {
        if (file_name.endsWith(".java")) {
            return file_name;
        } else {
            return file_name + ".java";
        }
    }
}

class Problem10 {
    public static String fileNameCheck(String file_name) {
        if (file_name.endsWith(".java")) {
            return file_name;
        } else {
            return file_name + ".java";
        }
    }
}

class Problem11 {
    public static String fileNameCheck(String file_name) {
        if (file_name.endsWith(".java")) {
            return file_name;
        } else {
            return file_name + ".java";
        }
    }
}

class Problem12 {
    public static String fileNameCheck(String file_name) {
        if (file_name.endsWith(".java")) {
            return file_name;
        } else {
            return file_name + ".java";
        }
    }
}

class Problem