# [![My Skills](https://skillicons.dev/icons?i=py)](https://skillicons.dev) HashMap
```py
class HashMap
```
A simplified hashmap implementation

📄 [`HashMap.py`](./HashMap.py)

---

## Methods
### Private member functions
<table>

<tr>
<th> Function </th> <th> Desctiption </th>
</tr>

<tr>
<td>

```py
__create_buckets()
```

</td>
<td>

Initialises list of buckets to store values

</td>
</tr>

<tr>
<td>

```py
__find_key(key)
```

</td>
<td>

Linearlly searches for a given key in the list of buckets

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

```py
get_value(key)
```

</td>

<td>

Returns the value that corresponds to the input key

</td>
</tr>

<tr>
<td>

```py
get_keys()
```

</td>

<td>

Returns a list of all keys in the hashmap

</td>
</tr>

<tr>
<td>

```py
get_values()
```

</td>

<td>

Returns a list of all values

</td>
</tr>

<tr>
<td>

```py
get_items()
```

</td>

<td>

Returns a list of all key-value pairs as tuples

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

```py
set_value(key, value)
```

</td>
<td>

Appends given key-value pair to its designated bucket

</td>
</tr>

<tr>
<td>

```py
delete(key)
```

</td>
<td>

Deletes the key-value pair containing input key

</td>
</tr>

</table>
