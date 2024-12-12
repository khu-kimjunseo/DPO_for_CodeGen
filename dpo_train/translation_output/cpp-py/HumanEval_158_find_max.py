from typing import List

def find_max(words: List[str]) -> str:
    return find_max(words)

def check(candidate):
    assert candidate(['name', 'of', 'string']) == 'string'
    assert candidate(['name', 'enam', 'game']) == 'enam'
    assert candidate(['aaaaaaa', 'bb', 'cc']) == 'aaaaaaa'
    assert candidate(['abc', 'cba']) == 'abc'
    assert candidate(['play', 'this', 'game', 'of', 'footbott']) == 'footbott'
    assert candidate(['we', 'are', 'gonna', 'rock']) == 'gonna'
    assert candidate(['we', 'are', 'a', 'mad', 'nation']) == 'nation'
    assert candidate(['this', 'is', 'a', 'prrk']) == 'this'
    assert candidate(['b']) == 'b'
    assert candidate(['play', 'play', 'play']) == 'play'

def test_check():
    check(find_max)

test_check()
