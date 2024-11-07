# Bitwise Operations

## Definition

Manipulation of bits (bit manipulation) at the bit level. Most of the time they are used for their ability to be primitive and thus resulting in them being quite fast.

There are 6 bitwise operators:

1. AND `&` (LOGICAL)
2. OR `|` (LOGICAL)
3. XOR `^`(LOGICAL)
4. NOT `~` (LOGICAL)
5. LEFT_SHIFT `<<` (SHIFT)
6. RIGHT_SHIFT `>>` (SHIFT)

> Note that in some languages like Dart, Java, and JavaScript, there is an additional operator known as the "Unsigned Right Shift" `>>>` which will not be covered here.

### Intuition

You can try to think of `1` as `TRUE` and `0` as `FALSE` and treating some of the logical operators as just like regular boolean operations.

### *LOGICAL* AND $\&$

> This is a binary operation, meaning it requires 2 inputs.

Takes two binary representations (**of equal length**) and for each pair of bits that are both `1` results in a `1` otherwise `0`.

$$
\begin{array}{cccc}
``44" & \& &``29" & \rightarrow & ``12" \\ \hline
1 & \& & 0 & \rightarrow & 0 \\
0 & \& & 1 & \rightarrow & 0 \\
1 & \& & 1 & \rightarrow & 1 \\
1 & \& & 1 & \rightarrow & 1 \\
0 & \& & 0 & \rightarrow & 0 \\
0 & \& & 1 & \rightarrow & 0 \\ \hline
101100 & \& & 011101 & \rightarrow & 001100 \\
\end{array}
$$

### *LOGICAL* OR $\small|$

> This is a binary operation, meaning it requires 2 inputs.

Takes two binary representations (**of equal length**) and for each pair of bits that contains at least `1` bit, it results in a `1` bit.

$$
\begin{array}{cccc}
``44" & \small| &``29" & \rightarrow & ``61" \\ \hline
1 & \small| & 0 & \rightarrow & 1 \\
0 & \small| & 1 & \rightarrow & 1 \\
1 & \small| & 1 & \rightarrow & 1 \\
1 & \small| & 1 & \rightarrow & 1 \\
0 & \small| & 0 & \rightarrow & 0 \\
0 & \small| & 1 & \rightarrow & 1 \\ \hline
101100 & \small| & 011101 & \rightarrow & 111101 \\
\end{array}
$$

### *LOGICAL* XOR $\oplus$

> This is a binary operation, meaning it requires 2 inputs.

Also known as the *exclusive OR*. It takes two binary representations (**of equal length**) and for each pair of bits, if both bits are either `0` or `1`, then `0`, else `1`. **In short, it is only true if both bits differ.**

> It is commonly denoted with the $\oplus$ symbol.

$$
\begin{array}{cccc}
``44" & \oplus &``29" & \rightarrow & ``49" \\ \hline
1 & \oplus & 0 & \rightarrow & 1 \\
0 & \oplus & 1 & \rightarrow & 1 \\
1 & \oplus & 1 & \rightarrow & 0 \\
1 & \oplus & 1 & \rightarrow & 0 \\
0 & \oplus & 0 & \rightarrow & 0 \\
0 & \oplus & 1 & \rightarrow & 1 \\ \hline
101100 & \oplus & 011101 & \rightarrow & 110001 \\
\end{array}
$$

XOR can be derived from the other logical operators. [Here](#xor)

### *LOGICAL* NOT $\neg$

> This is an unary operation, meaning that only one input is required.

Given a binary representation it flips each bit to its complement. Meaning `0` becomes `1` and `1` becomes `0`. It is also known as the *bitwise complement*. In many popular programming languages it is represented with the symbol `~`.

$$
\begin{array}{cccc}
``44" & \neg & \rightarrow &``-45" \\ \hline
1 & \neg & \rightarrow & 0 \\
0 & \neg & \rightarrow & 1 \\
1 & \neg & \rightarrow & 0 \\
1 & \neg & \rightarrow & 0 \\
0 & \neg & \rightarrow & 1 \\
0 & \neg & \rightarrow & 1 \\ \hline
101100 & \neg & \rightarrow & (-)010011
\end{array}
$$

It can also be simplified to the following expression:

$$
\neg{x}:=-x-1
$$

### Example

Sample code

## Sample

### Adding two numbers

#### C++

```cpp
int add(int a,int b)
{
    return 2*(a&b)+(a^b);
}
```


### XOR 

#### C++

```cpp
int xor(int a,int b)
{
    return ~(a&b)&(a|b);
}
```

## Additional References

1. [Codeforces: Errichto's blog on Bitwise operations](https://codeforces.com/blog/entry/73490)
2. [USACO Guide: Intro to Bitwise](https://usaco.guide/silver/intro-bitwise)