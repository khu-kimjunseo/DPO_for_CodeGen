### Python version

def is_bored(S: str) -> int:
    import re
    sentences = re.split(r'[.?!]\s*', S)
    return sum(sentence[0:2] == 'I ' for sentence in sentences)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long isBored(String S) {
        return is_bored(S.toLowerCase());
    }
}

class Solution {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.isBored("I am bored"));
    }
}

class Solution {
    public static boolean isBored(String S) {
        return S.length() > 1 && S.charAt(0) == 'I' && S.charAt(1) == 'm' && S.charAt(2) == 'e' && S.charAt(3) == 'b' && S.charAt(4) == 'e' && S.charAt(5) == 'o' && S.charAt(6) == 'r' && S.charAt(7) == 'y' && S.charAt(8) == 'e' && S.charAt(9) == 'd' && S.charAt(10) == 'e' && S.charAt(11) == 'd' && S.charAt(12) == 'o' && S.charAt(13) == 'r' && S.charAt(14) == 'y' && S.charAt(15) == 'e' && S.charAt(16) == 'd' && S.charAt(17) == 'e' && S.charAt(18) == 'd' && S.charAt(19) == 'o' && S.charAt(20) == 'r' && S.charAt(21) == 'y' && S.charAt(22) == 'e' && S.charAt(23) == 'd' && S.charAt(24) == 'o' && S.charAt(25) == 'r' && S.charAt(26) == 'y' && S.charAt(27) == 'e' && S.charAt(28) == 'd' && S.charAt(29) == 'o' && S.charAt(30) == 'r' && S.charAt(31) == 'y' && S.charAt(32) == 'e' && S.charAt(33) == 'd' && S.charAt(34) == 'o' && S.charAt(35) == 'r' && S.charAt(36) == 'y' && S.charAt(37) == 'e' && S.charAt(38) == 'd' && S.charAt(39) == 'o' && S.charAt(40) == 'r' && S.charAt(41) == 'y' && S.charAt(42) == 'e' && S.charAt(43) == 'd' && S.charAt(44) == 'o' && S.charAt(45) == 'r' && S.charAt(46) == 'y' && S.charAt(47) == 'e' && S.charAt(48) == 'd' && S.charAt(49) == 'o' && S.charAt(50) == 'r' && S.charAt(51) == 'y' && S.charAt(52) == 'e' && S.charAt(53) == 'd' && S.charAt(54) == 'o' && S.charAt(55) == 'r' && S.charAt(56) == 'y' && S.charAt(57) == 'e' && S.charAt(58) == 'd' && S.charAt(59) == 'o' && S.charAt(60) == 'r' && S.charAt(61) == 'y' && S.charAt(62) == 'e' && S.charAt(63) == 'd' && S.charAt(64) == 'o' && S.charAt