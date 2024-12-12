def valid_date(date: str) -> bool:
    try:
        date = date.trim();
        String[] parts = date.split("-");
        int month = Integer.parseInt(parts[0]);
        int day = Integer.parseInt(parts[1]);
        int year = Integer.parseInt(parts[2]);
        if (month < 1 || month > 12) {
            return false;
        }
        if (Arrays.asList(1,3,5,7,8,10,12).contains(month) && (day < 1 || day > 31)) {
            return false;
        }
        if (Arrays.asList(4,6,9,11).contains(month) && (day < 1 || day > 30)) {
            return false;
        }
        if (month == 2 && (day < 1 || day > 29)) {
            return false;
        }
    } catch (Exception e) {
        return false;
    }
    return true;

def check(candidate):
    assert candidate('03-11-2000') == True
    assert candidate('15-01-2012') == False
    assert candidate('04-0-2040') == False
    assert candidate('06-04-2020') == True
    assert candidate('01-01-2007') == True
    assert candidate('03-32-2011') == False
    assert candidate('') == False
    assert candidate('04-31-3000') == False
    assert candidate('06-06-2005') == True
    assert candidate('21-31-2000') == False
    assert candidate('04-12-2003') == True
    assert candidate('04122003') == False
    assert candidate('20030412') == False
    assert candidate('2003-04') == False
    assert candidate('2003-04-12') == False
    assert candidate('04-2003') == False

def test_check():
    check(valid_date)

test_check()
