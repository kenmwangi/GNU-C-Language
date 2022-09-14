# Learning C Language Basics

## Description

The purpose of section is to learn the basics of C Language as they are important in understanding how everything works or it is connected.

The concepts to consider are:

- types
- typescasting
- control flow structurs
- looping
- functions

# Standard I/O

- i/o stream for command line programs. Common in all Unix and Unix-like systems

## getchar() - reading input for next character from standard input.

synopsis

```
int getchar(void);
```
 Returns EOF at end file or error conditions encountered.

## putchar() - writing character typecasted to unsigned char to standard output

```
int putchar(int c);
```
## printf() - display formatted output to stdout.

```
printf(format_str, arg1, arg2, ...)
```

## scanf() - reading formatted input from stdinput

```
scanf(format_str, &arg1, &arg2, ...)
```

**NB**: args are *addresses* of variables that will store read values. The *format_str* tells **scanf()** how to format the input.




