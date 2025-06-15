#실습 11

try:
    fname = input('파일 이름 입력: ')
    infile = open(fname, 'r')
    print(infile.read())

except FileNotFoundError:
    print(fname + '파일 없음!')

finally:
    print('종료')


