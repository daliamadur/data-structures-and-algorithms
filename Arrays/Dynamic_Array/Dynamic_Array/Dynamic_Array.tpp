#include "Dynamic_Array.hpp"

using namespace std;

// constructors
template <typename T>
// default size and pointer to null values
Dynamic_Array<T>::Dynamic_Array() : arr(NULL), size(0){};

// size and values input
template <typename T>
Dynamic_Array<T>::Dynamic_Array(size_t input_size, T value)
{
    // set size to input
    if (input_size > 0)
    {
        // allocate space for number of elements
        size = input_size;
        arr = new T[input_size];

        // initialise with 0s
        for (int i = 0; i < size; i++)
        {
            arr[i] = value;
        }
    }
    else
    {
        throw exception("Input size has to be positive :<");
    }
}

// initialiser list
template <typename T>
Dynamic_Array<T>::Dynamic_Array(initializer_list<T> list)
{
    size_t list_size = list.size();

    size = list_size;
    arr = new T[list_size];

    int i = 0;

    // copy values from init_list to array object :3
    for (const T &element : list)
    {
        arr[i] = element;
        i++;
    }
}

template <typename T>
size_t Dynamic_Array<T>::get_size() const { return size; }

template <typename T>
bool Dynamic_Array<T>::is_empty() const { return size == 0; }

// access
template <typename T>
T &Dynamic_Array<T>::operator[](int index)
{

    // throw error if index is out of bounds
    if (index >= size)
    {
        throw out_of_range("Index out of bounds :(");
    }
    // else return value at index :3
    return arr[index];
}

template <typename T>
T &Dynamic_Array<T>::at(int index)
{

    // throw error if index is out of bounds
    if (index >= size)
    {
        throw out_of_range("Index out of bounds :(");
    }
    // else return value at index :3
    return arr[index];
}

template <typename T>
T &Dynamic_Array<T>::first() { return arr[0]; }

template <typename T>
T &Dynamic_Array<T>::last() { return arr[size - 1]; }

// methods
template <typename T>
void Dynamic_Array<T>::print()
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        if (typeid(arr[i]) == typeid(string))
        {
            cout << char(34);
        }

        cout << arr[i];

        if (typeid(arr[i]) == typeid(string))
        {
            cout << char(34);
        }

        if (i < size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]";
}

// methods
template <typename T>
string Dynamic_Array<T>::toString()
{
    string out = "";

    out += "[";
    for (int i = 0; i < size; i++)
    {
        if (typeid(arr[i]) == typeid(string))
        {
            out += char(34);
        }

        out += arr[i];

        if (typeid(arr[i]) == typeid(string))
        {
            out += char(34);
        }

        if (i < size - 1)
        {
            out += ", ";
        }
    }
    out += "]";

    return out;
}

template <typename T>
T *Dynamic_Array<T>::resize(size_t old_size, size_t new_size)
{
    // create new array
    T *new_arr = new T[new_size];

    // copy elements
    for (int i = 0; i < new_size; i++)
    {
        if (i >= old_size)
        {
            new_arr[i] = T();
        }
        else
        {
            new_arr[i] = arr[i];
        }
    }

    arr = new_arr;

    return new_arr;
}

// modifiers
template <typename T>
void Dynamic_Array<T>::insert_at(int index, T &element)
{
    // before index - keep in place
    arr = resize(size, size + 1);

    size++;

    for (size_t i = size - 1; i >= index; i--)
    {
        if (i == index)
        {
            // at index - insert
            arr[i] = element;
        }
        else
        {
            // after index - shift to left
            arr[i] = arr[i - 1];
        }
    }
}

template <typename T>
void Dynamic_Array<T>::remove_at(int index)
{

    // shift all elements to left
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }

    // resize array
    arr = resize(size, size - 1);
    size--;
}

template <typename T>
void Dynamic_Array<T>::push(T element)
{
    resize(size, size + 1);
    arr[size] = element;
    size++;
}

template <typename T>
T Dynamic_Array<T>::pop()
{
    T element = arr[size - 1];
    resize(size, size - 1);
    size--;

    return element;
}

template <typename T>
void Dynamic_Array<T>::flush()
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = T();
    }
}

template <typename T>
void Dynamic_Array<T>::append(initializer_list<T> list)
{
    size_t new_size = size + list.size();
    resize(size, new_size);

    int i = size;
    for (const T &element : list)
    {
        arr[i] = element;
        i++;
    }

    size = new_size;
}

// destructor
template <typename T>
Dynamic_Array<T>::~Dynamic_Array()
{
    size = 0;
    delete[] arr;
}