#실습5

import matplotlib.pyplot as plt

plt.figure( figsize=(8,5) )             #graph's size
#plt.title( 'plotting' )
plt.rc( 'font', family= 'Malgun Gothic', size=15, weight='bold' )        #Batang/Gulim도 됨 
plt.title( '그래프', size=15, weight='bold' )
plt.axis([10,60,10,50])     #x,y axis range

plt.plot( [10,20,30,40], [12,43,25,15], marker='o', label='1st', color='skyblue', linestyle='-.')
plt.plot( [12,43,25,15], [10,20,30,40], marker="s", label='2nd', color='orange', ls=':')
plt.plot( [10,20,30,40], [20,20,20,20], marker=' ', label='3rd', color='olive', ls='--')

plt.text(15, 40, '최고')
plt.text(30, 25, '중간')
#adding text on the line
plt.xlabel('X 축', size=15, weight='bold')
plt.ylabel('Y 축', size=15, weight='bold')
#both axis' label
plt.xlim( [0,50] )
plt.ylim( [0,45] )
#limit of graph
plt.grid()
plt.legend(loc=1)       #loc(location of legend)
plt.savefig('1.png', dpi=600)

plt.show()

