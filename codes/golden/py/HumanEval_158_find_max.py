from typing import List

def find_max(words: List[str]) -> str:
    return sorted(words, key = lambda x: (-len(set(x)), x))[0]