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
        String[] suf = {"txt", "exe", "dll"};
        String[] lst = file_name.split("\\.");
        if (lst.length != 2) {
            return "No";
        }
        if (!Arrays.asList(suf).contains(lst[1])) {
            return "No";
        }
        if (lst[0].length() == 0 || !Character.isLetter(lst[0].charAt(0))) {
            return "No";
        }
        int t = lst[0].replaceAll("\\D", "").length();
        if (t > 3) {
            return "No";
        }
        return "Yes";
    }
}

### Python version

def file_name_check(file_name: str) -> str:
    if (file_name.endswith(".py")):
        return file_name
    return file_name + ".py"

def file_name_check_python(file_name: str) -> str:
    if (file_name.endswith(".py")):
        return file_name
    return file_name + ".py"

def file_name_check_java(file_name: str) -> str:
    if (file_name.endswith(".java")):
        return file_name
    return file_name + ".java"

def file_name_check_java_exe(file_name: str) -> str:
    if (file_name.endswith(".java")):
        return file_name
    return file_name + ".exe"

def file_name_check_java_dll(file_name: str) -> str:
    if (file_name.endswith(".java")):
        return file_name
    return file_name + ".dll"

def file_name_check_java_exe_dll(file_name: str) -> str:
    if (file_name.endswith(".java")):
        return file_name
    return file_name + ".exe.dll"

def file_name_check_java_exe_dll_exe(file_name: str) -> str:
    if (file_name.endswith(".java")):
        return file_name
    return file_name + ".exe.dll"

def file_name_check_java_exe_dll_exe_exe(file_name: str) -> str:
    if (file_name.endswith(".java")):
        return file_name
    return file_name + ".exe.dll.exe"

def file_name_check_java_exe_dll_exe_exe(file_name: str) -> str:
    if (file_name.endswith(".java")):
        return file_name
    return file_name + ".exe.dll.exe"

def file_name_check_java_exe_dll_exe_exe_exe(file_name: str) -> str:
    if (file_name.endswith(".java")):
        return file_name
    return file_name + ".exe.dll.exe.exe"

def file_name_check_java_exe_dll_exe_exe_exe(file_name: str) -> str:
    if (file_name.endswith(".java")):
        return file_name
    return file_name + ".exe.dll.exe.exe"

def file_name_check_java_exe_dll_exe_exe_exe(file_name: str) -> str:
    if (file_name.endswith(".java")):
        return file_name
    return file_name + ".exe.dll.exe.exe"

def file_name_check_java_exe_dll_exe_exe_exe(file_name: str) -> str:
    if (file_name.endswith(".java")):
        return file_name
