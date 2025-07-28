# Slicing Window Maximum Visualised
Shows the steps and output for the Slicing Window Maximum algrorithm

📄 [Slicing Window Maximum Visualised.cpp](./Slicing%20Window%20Maximum%20Visualised/Slicing%20Window%20Maximum%20Visualised.cpp)

## Methods
### `printVec(vector<T> vec, int window_start, int k)`
**Description:**  
Prints the input vector and current slicing window to the terminal. If `window_start` and `k` are ommitted, the vector will print to the terminal without a visible slicing window

**Parameters:**
- `vec` *(vector&lt;T&gt;)* – vector to be printed
- `window_start` *(int)* – index of vector where the slicing window starts
- `k` *(int)* - size of the slicing window

**Example:**
```cpp
vector<int> vec = {1, 2, 3};
printVec(vec) //will print without slicing window
printVec(vec, 0, 2) //will print with slicing window
```

### `maxSlicingWindow(vector<int> vec, int k)`
**Description:**  
Runs the Maximum Slicing Window algorithm, printing the vector, slicing window, and output array at each step

**Parameters:**
- `vec` *(vector&lt;T&gt;)* – input vector
- `k` *(int)* - size of the slicing window

**Example:**
```cpp
vector<int> vec = {1, 2, 3};
maxSlicingWindow(vec, 2)
```

## Example
### 📥 Input
```cpp
vector<int> vec = { 3, 6, 3, 7, 3, 5, 2, 4 };
int k = 3;
```

### 📤 Output
```
--- MAX SLICING WINDOW ALGORITHM VISUALISED ---

You are given an array of integers nums and an integer k. There is a sliding window of size k that starts at the left edge of the array The window slides one position to the right until it reaches the right edge of the array.

Return a list that contains the maximum element in the window at each step.

----------------------------------------
Array = [3, 6, 3, 7, 3, 5, 2, 4] | k = 3
{x, y, z} => current window
----------------------------------------

Iteration 1
-----------
[{3, 6, 3}, 7, 3, 5, 2, 4]
max(3, 6, 3) = 6
output = [6]

Iteration 2
-----------
[3, {6, 3, 7}, 3, 5, 2, 4]
max(6, 3, 7) = 7
output = [6, 7]

Iteration 3
-----------
[3, 6, {3, 7, 3}, 5, 2, 4]
max(3, 7, 3) = 7
output = [6, 7, 7]

Iteration 4
-----------
[3, 6, 3, {7, 3, 5}, 2, 4]
max(7, 3, 5) = 7
output = [6, 7, 7, 7]

Iteration 5
-----------
[3, 6, 3, 7, {3, 5, 2}, 4]
max(3, 5, 2) = 5
output = [6, 7, 7, 7, 5]

Iteration 6
-----------
[3, 6, 3, 7, 3, {5, 2, 4}]
max(5, 2, 4) = 5
output = [6, 7, 7, 7, 5, 5]
```