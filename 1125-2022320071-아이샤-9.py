#실습 9

f1 = open('apple.jpg', 'rb')
f2 = open('copy.jpg', 'wb')

#data = f.read(8)
data = f1.read()

#print(data)

#for i in range(8):
#    print(data[i])

f2.write(bytes(data))

f1.close()
f2.close()
