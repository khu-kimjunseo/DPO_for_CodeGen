### Python version

from typing import List

def do_algebra(operator: List[str], operand: List[int]) -> int:
    expression = str(operand[0])
    for oprt, oprn in zip(operator, operand[1:]):
        expression+= oprt + str(oprn)
    return eval(expression)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long doAlgebra(ArrayList<String> op, ArrayList<Long> operand) {
        long result = 0;
        for (int i = 0; i < op.size(); i++) {
            String oprt = op.get(i);
            for (int j = 0; j < operand.size(); j++) {
                String oprn = operand.get(j).toString();
                result += do_algebra(Arrays.asList(oprt), Arrays.asList(oprn));
            }
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<String> op = new ArrayList<>();
        ArrayList<Long> operand = new ArrayList<>();
        op.add("+");
        operand.add(1L);
        operand.add(2L);
        operand.add(3L);
        operand.add(4L);
        operand.add(5L);
        operand.add(6L);
        operand.add(7L);
        operand.add(8L);
        operand.add(9L);
        operand.add(10L);
        operand.add(11L);
        operand.add(12L);
        operand.add(13L);
        operand.add(14L);
        operand.add(15L);
        operand.add(16L);
        operand.add(17L);
        operand.add(18L);
        operand.add(19L);
        operand.add(20L);
        operand.add(21L);
        operand.add(22L);
        operand.add(23L);
        operand.add(24L);
        operand.add(25L);
        operand.add(26L);
        operand.add(27L);
        operand.add(28L);
        operand.add(29L);
        operand.add(30L);
        operand.add(31L);
        operand.add(32L);
        operand.add(33L);
        operand.add(34L);
        operand.add(35L);
        operand.add(36L);
        operand.add(37L);
        operand.add(38L);
        operand.add(39L);
        operand.add(40L);
        operand.add(41L);
        operand.add(42L);
        operand.add(43L);
        operand.add(44L);
        operand.add(45L);
        operand.add(46L);
        operand.add(47L);
        operand.add(48L);
        operand.add(49L);
        operand.add(50L);
        operand.add(51L);
        operand.add(52L);
        operand.add(53L);
        operand.add(54L);
        operand.add(55L);
        operand.add(56L);
        operand.add(57L);
        operand.add(58L);
        operand.add(59L);
        operand.add(60L);
        operand.add(61L);
        operand.add(62L);
        operand.add(63L);
        operand.add(64L);
        operand.add(65L);
        operand.add(66L);
        operand.add(67L);
        operand.add(68L);