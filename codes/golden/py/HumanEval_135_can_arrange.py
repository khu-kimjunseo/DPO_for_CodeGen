from typing import List

def can_arrange(arr: List[int]) -> int:
    ind=-1
    i=1
    while i<len(arr):
      if arr[i]<arr[i-1]:
        ind=i
      i+=1
    return ind