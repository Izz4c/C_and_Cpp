import matplotlib.pyplot as plt
import time
import random
import numpy as np # Needed only for plotting the parabola

# Simple bubble sort code
def bubble_sort(array):
    p = 1                               # Number of passes
    sorted = 0                          # This will be non-zero when our array is sorted, so we can exit loop 
    while(not sorted):                  # Loop until sorted is non-zero
        sorted=1                        # Set sorted=1, if this goes unchanged, we will exit the loop before the next pass
        for i in range(len(array)-p):   # Traverse through the array upto the p'th last element
            if(array[i]>array[i+1]):    # If two adjacent elements are unordered
                temp = array[i+1]       # Swap them
                array[i+1] = array[i]
                array[i] = temp
                sorted = 0              # And set sorted back to zero because we know the array wasn't sorted by the last pass.

# Generates an array of random elements with length=size
def generate_array(size):
    array = []                               # Empty array at first, we will append random elements
    for i in range(size):                    # Repeat 'size' number of times
        array.append(random.randint(1,100))  # Append a random number between 1 and 100
    return array                             # Return the array

# Returns the execution time to sort an array of random elements with length=size
def bubble_time(size,samples):
    sum = 0
    for i in range(samples):    # We can take multiple samples of exectime 
                                # (since its a random variable because we are working with random arrays)
                                # and then return the average of the exectime
        
        random.seed()           # Change the random seed
        a = generate_array(size)# Generate random array of size=size
        start = time.time()     # Record the time before bubble sorting
        bubble_sort(a)          # Bubble sort
        end = time.time()       # Record the time after bubble sorting
        sum += end-start        # Add the time to sum variable

    return sum/samples          # Average execution time, increase samples for more accuracy
                                # It will look like a smoother parabola

# Stores the x values (array sizes)
inputsize = []
# Stores the y values (execution times)
exectime  = []

'''
x = np.linspace(0, 1000, 100)
a = 4.1742*10**(-8)
b = -2.0301*10**(-6)
c = 7.7866*10**(-5)
y = a * (x**2) + b * x + c
'''

plt.ion()               # Interactive mode ON, so we see the plot update in real time

fig, ax = plt.subplots()# Fig = window, Ax = the plot

for i in range(0,2000,10):    # We will check execution time for array sizes(i) = 0,10,20,30,...,990,1000
    inputsize.append(i)       # Append the current array size to inputsize array                  
    diff = bubble_time(i,10)     # Find the execution time when array size = i and take only one sample
    exectime.append(diff)     # Append the current execution time when bubble sorting an array with size = i
    # Note : You can also find multiple execution time for the same array size i and take its average so the curve looks smoother
    # To do this, just increase the number of samples in the bubble_time function

    ax.clear()                # Clear the plot before drawing
    
    ax.plot(inputsize, exectime, color="#ff2020",marker='o',linestyle='none') # Plot all the points we have recorded so far
    plt.pause(0.01)  # small delay so you can see it "grow"

a,b,c = np.polyfit(inputsize, exectime, 2)
x_smooth = np.linspace(min(inputsize), max(inputsize), 100)
y_smooth = a * x_smooth**2 + b * x_smooth + c
plt.plot(x_smooth, y_smooth, label=f"y = {a}x² + {b}x + {c}", color="#2020ff", linewidth=1)

plt.xlabel("Input size")                              # X-Axis name
plt.ylabel("Execution time")                          # Y-Axis name
plt.title("Bubble sort execution time vs input size") # Name of plot

plt.ioff()                                            # Turn OFF interactive mode
input()
