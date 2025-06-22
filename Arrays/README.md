# Arrays
- Store of a collection of elements of (usually) the same datatype
- Elements stored in contiguous memory locations
- Elements accessed using zero based indexing
  
### 📦 Applications
- Caching
- Lists and Collections
- Image Processing
- Statistical Analysis

## 💻 Implementation
### `Fixed Sized Array`

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=plastic&logo=c%2B%2B&logoColor=white)
```cpp
int arr[size];
```

![Python](https://img.shields.io/badge/python-3670A0?style=plastic&logo=python&logoColor=white) 

```python
arr = array('i', [0] * size)
```

### `Multi-Dimensional Arrays`

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=plastic&logo=c%2B%2B&logoColor=white)

```cpp
//two dimensions
int arr[x][y];
//three dimensions
int arr[x][y][z];
```

![Python](https://img.shields.io/badge/python-3670A0?style=plastic&logo=python&logoColor=white) 

```python
#two dimensions
arr = [[0 for _ in range(y)] for _ in range (x)]
#three dimensions
arr = [[[0 for _ in range(z)] for _ in range (y)] for _ in range (x)]
```
> _Initalises a multi-dimensional array with all 0 elements_
### `Dynamic Arrays`

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=plastic&logo=c%2B%2B&logoColor=white)

```cpp
vector<T> vec;
```

![Python](https://img.shields.io/badge/python-3670A0?style=plastic&logo=python&logoColor=white) 

```python
arr = []
```

![JavaScript](https://img.shields.io/badge/JavaScript-F7DF1E?style=plastic&logo=javascript&logoColor=000)

```jsx
let arr = [];
```
> _JavaScript arrays are dynamic and only have a native 1D implementation_

## Complexity

`Insertion` - End of array $O(1)$, otherwise $O(n)$

`Deletion` - End of array $O(1)$, otherwise $O(n)$

`Traversal` - $O(n^d)$ *where d is the number of dimensions of the array*
