#실습 6

import pandas as pd

data = pd.read_excel('input3.xls', sheet_name='1월')
print(data)

data.to_excel('output.xls', sheet_name = '결과', index=False)
