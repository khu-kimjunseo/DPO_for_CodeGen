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
    import hashlib
    return hashlib.md5(text.encode('ascii')).hexdigest() if text else None
