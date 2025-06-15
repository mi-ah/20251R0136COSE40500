import re

## conf
INPUT = "./input.txt"
OUTPUT = "./output.txt"

def main():
    fres = open(OUTPUT, 'w', encoding = "UTF-8")
    with open(INPUT, 'r', encoding = "UTF-8") as fp:
        body = ''.join(fp.readlines())
        #print("** UNPROTECTED INPUT **")
        #print (body) # Check the input file.

        ############################
        reg_num_list = re.findall(r'\d{6}\s?-?\s?\d{7}', body)
        for reg_num in reg_num_list:
            result = verify_rrn(reg_num)
            if result is True:
                reg_num_str = '******-*******'
                body = re.sub(reg_num, reg_num_str, body)
        
        ############################
        # Please store the body with protected registration numbers
        protectedBody = body
        print ("** PROTECTED OUTPUT **")
        print (protectedBody)
        fres.write(protectedBody)
        fres.close()


def verify_rrn(rrn):
    # Regular expression for South Korean Resident Registration Number (RRN)
    rrn_pattern = re.compile(r'(\d{6})\s?-?\s?(\d{7})')
    match = rrn_pattern.match(rrn)
    # Check if the input matches the pattern
    
    if match:
        # Extract birth date and check its validity
        birth_date = match.group(1)
        gender_digit = int(match.group(2)[0])
        checksum_digit = match.group(2)
        if is_valid_date(birth_date) and is_valid_gender(birth_date, gender_digit) and is_valid_checksum(birth_date, gender_digit, checksum_digit):
            return True
    return False


def is_valid_date(birth_date):
    # Extract year, month, and day from the birth date
    year = int(birth_date[:2])
    month = int(birth_date[2:4])
    day = int(birth_date[4:6])

    # Validate year, month, and day
    if 0 <= year <= 99 and 0 < month <= 12:
        if month in [1, 3, 5, 7, 8, 10, 12]:
            return 0 < day <= 31
        elif month == 2:
            return 0 < day <= 28  # Non-leap year
        else:
            return 0 < day <= 30
    return False

def is_valid_gender(birth_date, gender_digit):
    year = int(birth_date[:2])

    if 23 < year < 100:
        return gender_digit in [1,2]
    elif 0 <= year < 24:
        return gender_digit in [3,4]
    return False


def is_valid_checksum(birth_date, gender_digit, checksum_digit):
    A = int(birth_date[0])
    B = int(birth_date[1])
    C = int(birth_date[2])
    D = int(birth_date[3])
    E = int(birth_date[4])
    F = int(birth_date[5])
    G = int(checksum_digit[0])
    H = int(checksum_digit[1])
    I = int(checksum_digit[2])
    J = int(checksum_digit[3])
    K = int(checksum_digit[4])
    L = int(checksum_digit[5])
    M = int(checksum_digit[6])

    X = A*2 + B*3 + C*4 + D*5 + E*6 + F*7 + G*8 + H*9 + I*2 + J*3 + K*4 + L*5
    Y = X % 11
    checksum_result = 11 - Y
    if checksum_result == 10:
        return M == 0
    elif checksum_result == 11:
        return M == 1
    return M == checksum_result

""" EXECUTE """
if __name__ == "__main__":
	main()
