### Python version

from typing import List

def move_one_ball(arr: List[int]) -> bool:
    if len(arr)==0:
      return True
    sorted_array=sorted(arr)
    my_arr=[]
    
    min_value=min(arr)
    min_index=arr.index(min_value)
    my_arr=arr[min_index:]+arr[0:min_index]
    for i in range(len(arr)):
      if my_arr[i]!=sorted_array[i]:
        return False
    return True

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean moveOneBall(ArrayList<Long> arr) {
        if (arr.size() == 0) {
            return true;
        }
        List<Long> sortedArray = new ArrayList<>(arr);
        Collections.sort(sortedArray);
        int minIndex = arr.indexOf(Collections.min(arr));
        List<Long> myArr = new ArrayList<>(arr.subList(minIndex, arr.size()));
        myArr.addAll(arr.subList(0, minIndex));
        for (int i = 0; i < arr.size(); i++) {
            if (!myArr.get(i).equals(sortedArray.get(i))) {
                return false;
            }
        }
        return true;
    }
    

}

