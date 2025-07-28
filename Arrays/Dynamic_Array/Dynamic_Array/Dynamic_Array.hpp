#pragma once
#include <initializer_list>
#include <stdexcept>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Dynamic_Array
{
    T *arr;
    size_t size;
    T *resize(size_t, size_t);

public:
    // empty, initialise 0, null
    Dynamic_Array();
    // initialise (size) (value) values
    Dynamic_Array(size_t, T element = T());
    // initialiser_list - for `arr = {x, y, z}` assignments
    Dynamic_Array(initializer_list<T>);
    // destructor - free
    ~Dynamic_Array();

    // size
    size_t get_size() const;
    bool is_empty() const;

    // access
    T &operator[](int);
    T &at(int);
    T &first();
    T &last();

    // methods
    void print();
    string toString();

    // modifiers
    void insert_at(int, T &);
    void remove_at(int);
    void push(T);
    T pop();
    void flush();
    void append(initializer_list<T>);
};

#include "Dynamic_Array.tpp"