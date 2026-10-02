import matplotlib.pyplot as plt

# Datasets
data1 = [19, 24, 12, 19, 18, 24, 8, 5, 9, 20, 13, 11, 1, 12, 11, 10, 22, 21, 7, 16, 15, 15, 26, 16, 1,
         13, 21, 21, 20, 19]
data2 = [17, 24, 21, 22, 26, 22, 19, 21, 23, 11, 19, 14, 23, 25, 26, 15, 17, 26, 21, 18, 19, 21, 24,
         18, 16, 20, 21, 20, 23, 33]
data3 = [56, 52, 13, 34, 33, 18, 44, 41, 48, 75, 24, 19, 35, 27, 46, 62, 71, 24, 66, 94, 40, 18, 15,
         39, 53, 23, 41, 78, 15, 35]

# Plotting
fig, axs = plt.subplots(1, 3, figsize=(18, 5))

axs[0].hist(data1, bins=10, color='skyblue', edgecolor='black')
axs[0].set_title('Dataset 1 Histogram')
axs[0].set_xlabel('Value')
axs[0].set_ylabel('Frequency')

axs[1].hist(data2, bins=10, color='salmon', edgecolor='black')
axs[1].set_title('Dataset 2 Histogram')
axs[1].set_xlabel('Value')

axs[2].hist(data3, bins=10, color='lightgreen', edgecolor='black')
axs[2].set_title('Dataset 3 Histogram')
axs[2].set_xlabel('Value')

plt.tight_layout()
plt.show()
