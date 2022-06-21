import numpy as np
import csv
import matplotlib.pyplot as plt

y = np.random.randint(1, 3300, 64)
y=np.sort(y)
    
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