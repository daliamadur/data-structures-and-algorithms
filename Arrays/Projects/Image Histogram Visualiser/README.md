# Image Histogram Visualiser

Generates ascii style bar graph that shows a visual distribution of gray values for an input image

📄 [`image_histogram_visualiser.py`](image_histogram_visualiser.py)



## Methods
### `add(a, b)`
**Description:**  
Adds two numbers and returns the sum.

**Parameters:**
- `a` *(int)* – The first number.
- `b` *(int)* – The second number.

**Returns:**  
- *(int)* – The sum of `a` and `b`.

**Example:**
```cpp
int result = add(5, 3);
```


## Example
### 📥 Input
`image.png` *(enlarged for viewing purposes, original is 5px x 5px)*

![enlarged_image_png](image%20(enlarged).png)
```py
dir = os.path.dirname(__file__)
path = os.path.join(dir, "image.png")

values_dict = get_values_dict(path)
print_histogram(values_dict)
```

### 📤 Output
```
GRAY LEVEL   NUMBER OF PIXELS
0            | 1     | ■
58           | 5     | ■■■■■
86           | 6     | ■■■■■■
128          | 5     | ■■■■■
188          | 1     | ■
204          | 3     | ■■■
255          | 4     | ■■■■
```

