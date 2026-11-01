import matplotlib.pyplot as plt
import numpy as np
plt.figure("figsize=(10,6)")
x=(1,2,3,4,5,6)
y=(10,8,15,20,18)
plt.title("Sample line chart")
plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.plot(x,y,marker='.',linestyle='-',color='green')
plt.grid(True)
plt.show()