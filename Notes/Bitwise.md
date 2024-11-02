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

### *LOGICAL* AND `&`

> This is a binary operation, meaning it requires 2 inputs.

Takes two binary representations (**of equal length**) and for each pair of bits that are both `1` results in a `1` otherwise `0`.

$$
\begin{array}{ccc}
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

### *LOGICAL* OR `|`

> This is a binary operation, meaning it requires 2 inputs.

Takes two binary representations (**of equal length**) and for each pair of bits that contains at least `1` bit, it results in a `1` bit.

$$
\begin{array}{ccc}
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

### *LOGICAL* XOR `^`

> This is a binary operation, meaning it requires 2 inputs.

Also known as the *exclusive OR*. It takes two binary representations (**of equal length**) and for each pair of bits, if both bits are either `0` or `1`, then `0`, else `1`. **In short, it is only true if both bits differ.**

> It is commonly denoted with the $\oplus$ symbol.

$$
\begin{array}{ccc}
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

### Example

Sample code

## Sample


## Additional References
