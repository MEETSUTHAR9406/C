# DailyLog is about my Learning throughout the day.<br><br>

# Day - 1 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-  Learned about Void Pointer and NULL pointer.<br>
(04/07/2025)<br><br>

==========================================================================================<br><br>

## Void Pointer: A generic pointer<br>
It is a Pointer that can hold any data type address, but we need to exclusively define it.<br><br>

### Example:<br><br>

<pre><code>int x = 10;
void *ptr = &x;

printf("%d", *(int *)ptr); // 10
printf("%d", *ptr); // Can't do like this.
</code></pre>

## NULL Pointer: It is like defining NULL to pointer then assigning values whenever need it.<br>
// If we don't declare NULL then it might print Garbage Value.<br><br>

### Example:<br><br>

<pre><code>int *ptr = NULL;
int choice = 1;

if(choice) {
  ptr = (int *)malloc(sizeof(int));
  *ptr = 42;
}

if(ptr != NULL) 
  printf("%d", *ptr); // 42
else
  printf("This pointer is NULL.");
</code></pre>

<br>

# Day - 2 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-  Learned about Dangling Pointer & Wild Pointer.   <br>
(05/07/2025)<br><br>

==========================================================================================<br><br>

## Dangling Pointer: It is like freeing the Pointer and then trying to access it.<br>
If we try to access it we might get Garbage Value.<br><br>

### Example:<br><br>

<pre><code>int a = 10;
int *ptr = (int *) malloc(sizeof(int));
free(ptr);
printf("%d", *ptr); // This is Dangling Pointer
ptr = NULL; // This becomes NULL Pointer now
</code></pre>

## Wild Pointer : It is like not assigning value to the pointer but then trying to dereference it.<br><br>

### Example:<br><br>

<pre><code>int a = 24;
int *ptr;

printf("%d", *ptr); // This is a Wild Pointer.
</code></pre>

<br>

# Day - 3 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-  Did Matrix Multiplication.<br>
(06/07/2025)<br><br>

==========================================================================================<br><br>

## Matrix Multiplication  <br>
- Tried doing Matrix Multiplication of 2D matrix and got succeeded.  <br>
- Used functions and user inputs to get the size of the Matrix.<br><br>

## Preprocessor Directives  <br>
Learned about:  <br>
<code>#include</code>, <code>#define</code>, <code>#undef</code>, <code>#ifdef</code>, <code>#ifndef</code>, <code>#if</code>, <code>#else</code>, <code>#elif</code>, <code>#endif</code><br><br>

<b>#include</b> <br>
- To include another file.  <br>
<pre><code>#include &lt;stdio.h&gt;
#include "myfile.h"
</code></pre>

<b>#define</b><br>
- To define a constant or macro.<br>
<pre><code>#define PI 3.14
</code></pre>

<b>#undef</b><br>
- To undefine a macro which was defined earlier.<br>
<pre><code>#undef PI
</code></pre>

<b>#ifdef</b><br>
- To check if macro is actually defined.<br>
<pre><code>#define DEBUG

#ifdef DEBUG
  printf("It is defined.");
#endif
</code></pre>

<b>#ifndef</b><br>
- To check if macro is not defined. If not defined you can define it.<br>
<pre><code>#ifndef PI
#define PI 3.14
#endif
</code></pre>

<b>#if, #else, #elif, #endif</b><br>
- Used for conditional compilation for macros.<br>
<pre><code>#define VALUE 5

#if VALUE == 5
  printf("The value is 5\n");
#elif VALUE == 10
  printf("The value is 10\n");
#else 
  printf("Value is something else.");
#endif // Closes all blocks like #if, #ifdef, #ifndef.
</code></pre>

# Day - 4 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-  Did Matrix Multiplication.<br>
(07/07/2025)<br><br>

==========================================================================================<br><br>

## Palindrome Numbers  <br>
- Tried the logic of Palindrome numbers using functions.  <br>

## File Input/Output <br>
Learned about:  <br>
<code>fopen()</code>, <code>fclose()</code>, <code>fgetc()</code>, <code>fgets()</code>
- Tried making a bill replacing string in Pre-written file.

# Day - 5 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Completed Bill Generator using File I/O  
(08/07/2025)

==========================================================================================

## 🗃️ File Input/Output

Learned in detail about:
`fopen()`, `fclose()`, `fgetc()`, `fgets()`, `fputc()`, `fputs()`

Completed a **bill generator** by reading and replacing placeholders in a pre-written file.

---

### `fopen()`
- Opens any file (Text or Binary).
- Modes include: `r`, `w`, `r+`, `w+`, `rb`, etc.

### `fclose()`
- Closes a file that was opened using `fopen()`.
- Mandatory after file operations to prevent memory leaks.

---

# Day - 6 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- File Modes Recap + Command Line Arguments  
(09/07/2025)

==========================================================================================

## File Functions Recap

### `fgetc()`
- Reads a **single character** from a file.

### `fgets()`
- Reads a **string of characters** from a file (used for lines).

### `fputc()`
- Writes a **single character** to a file.
- If in `"w"` mode, it first **clears** existing content.

### `fputs()`
- Writes a **string** to a file.
- Works like `fputc()` but handles multiple characters.

---

## Command Line Arguments in C

Practiced how to handle **command line arguments** using `argc` and `argv[]`.

### Program Overview
A mini calculator that:
- Accepts:  
  `add`, `subtract`, `multiply`, `divide`
- Uses:  
  `argv[]` to access arguments  
  `atoi()` to convert strings to integers

---

### Example Command:
```bash
./calculator add 10 5
```
# Day - 7         -  Practiced C problems & patterns.  
(10/07/2025)

==========================================================================================

## C Problem Solving
- Print N natural numbers  
- Sum of digits of a number  
- Reverse a number  
- Check even or odd  
- Check prime or not  
- Factorial using loop  
- Print Fibonacci series up to N  
- Check palindrome number  
- Print multiplication table of N  
- Count number of digits in a number  
- Find max of 3 numbers using if-else  
- Simple calculator (menu-based)  
- Patterns:
- Check if character is vowel or consonant  
- Sum of first N odd numbers

  _Practiced locally, not yet uploaded to GitHub._


# Day - 8         -  Started Web Development + Practiced C Array  
(11/07/2025)

==========================================================================================

## Web Development  
- Created base folder structure for `HTML`, `CSS`, and `JS`.  
- Started learning basic HTML: tags, structure, usage.

## C Practice  
- Find second largest element in an array.  
- Organizing files & folders (many commits due to setup work).

# Day - 9         -  Continued HTML/CSS and String Exercises in C  
(12/07/2025)

==========================================================================================

## Web Development  
- Practiced basic HTML & CSS.  
- Used tags for headings, paragraphs, images, lists, and links.

## C Programming  
- Check if string is palindrome  
- Count vowels, consonants, digits in a string  

