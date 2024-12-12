def closest_integer(value: str) -> int:
    if (value == null || value.length() == 0) return 0
    if (value.indexOf('.') == -1) return Long.parseLong(value);
    value = value.replaceAll("0*$", "");
    double num = Double.parseDouble(value);
    if (value.endsWith(".5")) {
        return (int)(num > 0 ? Math.ceil(num) : Math.floor(num));
    } else {
        return Math.round(num);
    }

def check(candidate):
    assert candidate('10') == 10
    assert candidate('14.5') == 15
    assert candidate('-15.5') == -16
    assert candidate('15.3') == 15
    assert candidate('0') == 0

def test_check():
    check(closest_integer)

test_check()
