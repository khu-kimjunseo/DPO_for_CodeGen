def correct_bracketing(brackets: str) -> bool:
    if not brackets:
        return true;
    if not brackets.startswith("<"):
        return false;
    if brackets.endswith(">"):
        return false;
    if brackets.endswith("<"):
        return true;
    return correct_bracketing(brackets.rstrip("<>").rstrip(">").rstrip("<"))

def check(candidate):
    assert candidate('<>') == True
    assert candidate('<<><>>') == True
    assert candidate('<><><<><>><>') == True
    assert candidate('<><><<<><><>><>><<><><<>>>') == True
    assert candidate('<<<><>>>>') == False
    assert candidate('><<>') == False
    assert candidate('<') == False
    assert candidate('<<<<') == False
    assert candidate('>') == False
    assert candidate('<<>') == False
    assert candidate('<><><<><>><>><<>') == False
    assert candidate('<><><<><>><>>><>') == False

def test_check():
    check(correct_bracketing)

test_check()
