### Python version

from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_number = min(numbers)
    max_number = max(numbers)
    return [(x - min_number) / (max_number - min_number) for x in numbers]

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Float> rescaleToUnit(ArrayList<Float> numbers) {
        ArrayList<Float> res = new ArrayList<>();
        for (int i = 0; i < numbers.size(); i++) {
            res.add(numbers.get(i) * rescale_to_unit(numbers.subList(i, numbers.size())));
        }
        return res;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<Float> numbers = new ArrayList<>();
        numbers.add(1.0f);
        numbers.add(2.0f);
        numbers.add(3.0f);
        numbers.add(4.0f);
        numbers.add(5.0f);
        numbers.add(6.0f);
        numbers.add(7.0f);
        numbers.add(8.0f);
        numbers.add(9.0f);
        numbers.add(10.0f);
        numbers.add(11.0f);
        numbers.add(12.0f);
        numbers.add(13.0f);
        numbers.add(14.0f);
        numbers.add(15.0f);
        numbers.add(16.0f);
        numbers.add(17.0f);
        numbers.add(18.0f);
        numbers.add(19.0f);
        numbers.add(20.0f);
        numbers.add(21.0f);
        numbers.add(22.0f);
        numbers.add(23.0f);
        numbers.add(24.0f);
        numbers.add(25.0f);
        numbers.add(26.0f);
        numbers.add(27.0f);
        numbers.add(28.0f);
        numbers.add(29.0f);
        numbers.add(30.0f);
        numbers.add(31.0f);
        numbers.add(32.0f);
        numbers.add(33.0f);
        numbers.add(34.0f);
        numbers.add(35.0f);
        numbers.add(36.0f);
        numbers.add(37.0f);
        numbers.add(38.0f);
        numbers.add(39.0f);
        numbers.add(40.0f);
        numbers.add(41.0f);
        numbers.add(42.0f);
        numbers.add(43.0f);
        numbers.add(44.0f);
        numbers.add(45.0f);
        numbers.add(46.0f);
        numbers.add(47.0f);
        numbers.add(48.0f);
        numbers.add(49.0f);
        numbers.add(50.0f);
        numbers.add(51.0f);
        numbers.add(52.0f);
        numbers.add(53.0f);
        numbers.add(54.0f);
        numbers.add(55.0f);
        numbers.add(56.0f);
        numbers.add(57.0f);
        numbers.add(58.0f);
        numbers.add(59.0f);
        numbers.add(60.0f);
        numbers.add(61.0f);
        numbers.add(62.0f);
