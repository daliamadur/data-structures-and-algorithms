# <img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/cplusplus/cplusplus-original.svg" height="30vh"> Dynamic_Array
```cpp
template<typename T>
class Dynamic_Array
```
A simplified dynamic array implementation

---

## Functions
### Size
<table>
<tr>
<th> Function </th> <th> Desctiption </th>
</tr>
<tr>
<td>

```cpp
size_t get_size() const;
```

</td>
<td>

Returns  `size_t` number of elements in the array

</td>
</tr>
<tr>
<td>

```cpp
bool is_empty() const;
```
  
</td>
<td>

Returns `bool` whether the array is currently empty or not

</td>
</tr>
</table>

### Access
<table>
<tr>
<th> Function </th> <th> Desctiption </th>
</tr>
<tr>
<td>

```cpp
T &operator[](int);
```
```cpp
T &at(int);
```

</td>
<td>

Returns  `T` element at specified index

</td>
</tr>
<tr>
<td>

```cpp
T &first();
```
  
</td>
<td>

Returns `T` the first element in the array

</td>
</tr>
<tr>
<td>

```cpp
T &last();
```
  
</td>
<td>

Returns `T` the last element in the array

</td>
</tr>
</table>

### Modifiers
<table>
<tr>
<th> Function </th> <th> Desctiption </th>
</tr>
<tr>
<td>

```cpp
void insert_at(int, T&);
```
  
</td>
<td>

Inserts a given `T` element at a given `int` index

</td>
</tr>
<tr>
<td>

```cpp
void remove_at(int);
```
  
</td>
<td>

Removes the element at a given `int` index

</td>
</tr>
<tr>
<td>

```cpp
void push(T);
```
  
</td>
<td>

Inserts a given `T` element at the end of the array

</td>
</tr>
<tr>
<td>

```cpp
T pop();
```
  
</td>
<td>

Removes the `T` element at the end of the array and returns it

</td>
</tr>
<tr>
<td>

```cpp
void flush();
```
  
</td>
<td>

Empties the array's individual elements

</td>
</tr>
<tr>
<td>

```cpp
void append(initializer_list<T>);
```
  
</td>
<td>

Appends a given `list` onto the end of the array

</td>
</tr>
</table>

### Other methods
<table>
<tr>
<th> Function </th> <th> Desctiption </th>
</tr>
<tr>
<td>

```cpp
void print();
```
  
</td>
<td>

Prints out the contents of the array

</td>
</tr>
<tr>
<td>

```cpp
string toString();
```
  
</td>
<td>

Returns the contents of the array as a `string`

</td>
</tr>
</table>
