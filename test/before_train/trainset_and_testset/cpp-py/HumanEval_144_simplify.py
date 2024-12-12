def simplify(x: str, n: str) -> bool:
    if x == n:
        return True
    if x == "0":
        return False
    if x == "1":
        return simplify(x, n)
    if x == "2":
        return simplify(x, n)
    if x == "3":
        return simplify(x, n)
    if x == "4":
        return simplify(x, n)
    if x == "5":
        return simplify(x, n)
    if x == "6":
        return simplify(x, n)
    if x == "7":
        return simplify(x, n)
    if x == "8":
        return simplify(x, n)
    if x == "9":
        return simplify(x, n)
    if x == "10":
        return simplify(x, n)
    if x == "11":
        return simplify(x, n)
    if x == "12":
        return simplify(x, n)
    if x == "13":
        return simplify(x, n)
    if x == "14":
        return simplify(x, n)
    if x == "15":
        return simplify(x, n)
    if x == "16":
        return simplify(x, n)
    if x == "17":
        return simplify(x, n)
    if x == "18":
        return simplify(x, n)
    if x == "19":
        return simplify(x, n)
    if x == "20":
        return simplify(x, n)
    if x == "21":
        return simplify(x, n)
    if x == "22":
        return simplify(x, n)
    if x == "23":
        return simplify(x, n)
    if x == "24":
        return simplify(x, n)
    if x == "25":
        return simplify(x, n)
    if x == "26":
        return simplify(x, n)
    if x == "27":
        return simplify(x, n)
    if x == "28":
        return simplify(x, n)
    if x == "29":
        return simplify(x, n)
    if x == "30":
        return simplify(x, n)
    if x == "31":
        return simplify(x, n)
    if x == "32":
        return simplify(x, n)
    if x == "33":
        return simplify(x, n)
    if x == "34":
        return simplify(x, n)
    if x == "35":
        return simplify(x, n)
    if x == "36":
        return simplify(x, n)
    if x == "37":
        return simplify(x, n)
    if x == "38":
        return simplify(x, n)
    if x == "39":
        return simplify(x, n)
    if x == "40":
        return simplify(x, n)
    if x == "41":
        return simplify(x, n)
    if x == "42":
        return simplify(x, n)
    if x == "43":
        return simplify(x, n)
    if x == "44":
        return simplify(x, n)
    if x == "45":
        return simplify(x, n)
    if x == "46":
        return simplify(x, n)
    if x == "47":
        return simplify(x, n)
    if x
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
