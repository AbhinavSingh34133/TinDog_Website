import random
import matplotlib.pyplot as plt
y = [1,2,3,4,5,6]
a = []
for i in range(0,6):
    a.append(0)
for i in range(0,100000):
    guess1 = random.randint(1,6)
    a[guess1-1] += 1
plt.pie(a,labels=y,autopct = '%1.1f%%')
plt.xlabel("Sum of number obtained")
plt.ylabel("Frequency")
plt.show()