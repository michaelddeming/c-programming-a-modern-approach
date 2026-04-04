
# Chapter 12 - Pointers and Arrays

## 12.1 - Pointer Arithmetic

- Pointer Arithmetic (address arithmetic): Can access the other elements of and array by:
    - Adding an integer to a pointer
    - Subtracting an integer from a pointer
    - Subtracting one pointer from another

- Adding an Integer to a Pointer: Adding an integer `j` to a pointer `p` yields a pointer to the element `j` places after the one that `p` current points to. 

![alt text](image.png)

- Subtracting an Integer from a Pointer: If `p` points to the array element `a[i]`, then `p - j` points to `a[i - j]`.

![alt text](image-1.png)

- Subtracting One Pointer from Another: When one pointer is subtracted from another, the result is the distance (measured in array elements) between the pointers.
    - If `p` points to `a[i]` and `q` points to `a[j]`, then `p - q` is equal to `i - j`.

![alt text](image-2.png)

- Comparing Pointers: We can compare pointers using the relational operators `<`, `<=`, `>`, `>=` and the equality operators (`==` and `!=`).
    - Using the relational operators to compare two pointers is meaninful only when both point to elements of the same array.

![alt text](image-3.png)

- Pointers to Compound Literals (C99): 

![alt text](image-4.png)

## 12.2 Using Pointers for Array Processing

![alt text](image-5.png)
![alt text](image-6.png)

- Combining the `*` and `++` Operators: When you combine the dereference operator `*` with increment/decrement (`++` / `--`) in C (or similar languages), the key is operator precedence and when the increment happens.

![alt text](image-7.png)

## 12.3 Using an Array Name as a Pointer

- The name of an array can be used as a pointer to the first elemetn in the array.

![alt text](image-8.png)

## 12.4 Pointers and Multidimensional Ararys 

# 12.5 Pointers and Variable-Length Arrays (C99)