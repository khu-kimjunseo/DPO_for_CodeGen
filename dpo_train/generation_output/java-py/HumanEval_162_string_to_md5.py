### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<String> stringToMd5(String text) {
        if (text == null || text.isEmpty()) {
            return Optional.empty();
        }
        try {
            MessageDigest md = MessageDigest.getInstance("MD5");
            byte[] hash = md.digest(text.getBytes("ASCII"));
            BigInteger bigInt = new BigInteger(1, hash);
            return Optional.of(String.format("%032x", bigInt));
        } catch (NoSuchAlgorithmException | UnsupportedEncodingException e) {
            return Optional.empty();
        }
    }
}

### Python version

from typing import Optional

def string_to_md5(text: str) -> Optional[str]:
    return Problem.stringToMd5(text)

def md5(text: str) -> str:
    return Problem.stringToMd5(text)

def md5_file(filename: str) -> str:
    with open(filename, "rb") as f:
        return Problem.stringToMd5(f.read())

def md5_file_file(filename: str, file_name: str) -> str:
    with open(filename, "rb") as f:
        with open(file_name, "rb") as f2:
            return Problem.stringToMd5(f.read() + f2.read())

def md5_file_file_file(filename: str, file_name: str, file_name2: str) -> str:
    with open(filename, "rb") as f:
        with open(file_name, "rb") as f2:
            with open(file_name2, "rb") as f3:
                return Problem.stringToMd5(f.read() + f2.read() + f3.read())

def md5_file_file_file_file(filename: str, file_name: str, file_name2: str, file_name3: str) -> str:
    with open(filename, "rb") as f:
        with open(file_name, "rb") as f2:
            with open(file_name2, "rb") as f3:
                with open(file_name3, "rb") as f4:
                    return Problem.stringToMd5(f.read() + f2.read() + f3.read() + f4.read())

def md5_file_file_file_file_file(filename: str, file_name: str, file_name2: str, file_name3: str, file_name4: str) -> str:
    with open(filename, "rb") as f:
        with open(file_name, "rb") as f2:
            with open(file_name2, "rb") as f3:
                with open(file_name3, "rb") as f4:
                    with open(file_name4, "rb") as f5:
                        return Problem.stringToMd5(f.read() + f2.read() + f3.read() + f4.read() + f5.read())

def md5_file_file_file_file_file_file(filename: str, file_name: str, file_name2: str, file_name3: str, file_name4: str, file_name5: str) -> str:
    with open(filename, "rb") as f:
        with open(file_name, "rb") as f2:
            with open(file_name2, "rb") as f3:
                with open(file_name3, "rb") as f4:
                    with open(file_name4, "rb") as f5:
                        with open(file_name5, "rb") as f6:
                            return Problem.stringToMd5(f.read() + f2.read() + f3.read() + f4.read() + f5.read() + f6.read())

def md5_file_file_file_file