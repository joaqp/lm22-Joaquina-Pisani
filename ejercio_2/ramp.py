import numpy as np
import csv
import matplotlib.pyplot as plt

y=[0]

for i in range(1, 64):
    y.append(y[i-1]+int((3300/64)))


print(list(y))
plt.stem(y, y)
plt.xlabel('  n--->  ')
plt.ylabel('Amplitude ----> ')
plt.title('Unit ramp Signal')
plt.grid(True)
plt.show()

sourceFile = open('.\ejercio_2\sgn.h', 'w')
print(*y, sep = ",", file = sourceFile)
sourceFile.close()