## Arrays

- Store of a collection of elements of (usually) the same datatype
- Elements stored in contiguous memory locations
- Elements accessed using zero based indexing

### Fixed Sized Array

💾 C++

```cpp
int arr[size];
```

💾 Python

```python
arr = [element] * length
```

### Multi-Dimensions

💾 C++

```cpp
//two dimensions
int arr[size][size];
//three dimensions
int arr[size][size][size];
```

💾 Python

```python
#two dimensions
arr = [][]
#three dimensions
arr = [][][]
```

### Dynamic Arrays

💾 C++

```cpp
vector<T> vec;
```

💾 Python

```python
arr = []
```

💾 JavaScript

```jsx
let arr = new Array();
```

### Complexity

`Insertion` - End of array $O(1)$, otherwise $O(n)$

`Deletion` - End of array $O(1)$, otherwise $O(n)$

`Traversal` - $O(n^d)$ *where d is the array dimensions*