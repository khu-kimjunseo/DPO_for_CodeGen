def simplify(x: str, n: str) -> bool:
    if x == n:
        return True
    elif x == n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n:
        return True
    elif x == n + "/" + n + "/" + n + "/" + n + "/" + n + "/" + n + "/"
def check(candidate):
    assert candidate('1/5', '5/1') == True
    assert candidate('1/6', '2/1') == False
    assert candidate('5/1', '3/1') == True
    assert candidate('7/10', '10/2') == False
    assert candidate('2/10', '50/10') == True
    assert candidate('7/2', '4/2') == True
    assert candidate('11/6', '6/1') == True
    assert candidate('2/3', '5/2') == False
    assert candidate('5/2', '3/5') == False
    assert candidate('2/4', '8/4') == True
    assert candidate('2/4', '4/2') == True
    assert candidate('1/5', '5/1') == True
    assert candidate('1/5', '1/5') == False

def test_check():
    check(simplify)

test_check()
