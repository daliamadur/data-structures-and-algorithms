# Image Histogram Visualiser

Generates ascii style bar graph that shows a visual distribution of gray values for an input image

📄 [`image_histogram_visualiser.py`](image_histogram_visualiser.py)



## Methods
### `get_values_dict(image_path)`
**Description:**  
Converts input image to greyscale and returns a dictionary of all grey values (L) and their pixel count.

**Parameters:**
- `image_path` *(string)* – The file path of the image

**Returns:**  
- *(dict[int, int])* – Dictionary containing all grey value-pixel count pairs.

**Example:**
```py
values_dict = get_values_dict(".\image.png")
```
### `spaces(number)`
**Description:**  
Returns the digit count of a number, used to format spacing when printing.

**Parameters:**
- `number` *(int)* – The number to be considered

**Returns:**  
- *(int)* – Number of digits

**Example:**
```py
digits = spaces(34)
```

### `formatting(l_value, number)`
**Description:**  
Returns an f-string containing a visual representation of the grey value and number of pixels

**Parameters:**
- `l_value` *(int)* – The grey value contained in the image
- `number` *(int)* – The corresponding number of pixels for the given `l_value`

**Returns:**  
- *(f-string)* – Line of histogram containing the given `l_value` and its `number` of pixels, both as a number and as a bar

**Example:**
```py
line = formatting(128, 5)
```

### `print_histogram(values_dict, full_range)`
**Description:**  
Prints the histogram of all grey values and their pixel count given the input dictionary

**Parameters:**
- `values_dict` *(dict[int, int])* – The grey value and pixel count key-value pairs
- `full_range` *(bool)* – determines whether histogram contains all grey values, or just detected grey values from image *(set to false by default)*

**Example:**
```py
values_dict = {
    0: 1,
    58 :5,
    86 : 6,
    128 : 5,
    188 : 1,
    204 : 3,
    255 : 4
}

print_histogram(values_dict) #prints only keys in dict
print_histogram(values_dict, True) #prints all grey values 0-255
```

## Example
### 📥 Input
`image.png` *(enlarged for viewing purposes, original is 5x5)*

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

