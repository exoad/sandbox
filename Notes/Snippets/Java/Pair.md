# Pair

A simple tuple like structure that holds two values only.

## Pre-Java 16

```java
public class Pair<A,B>
{
    private A first;
    private B second;

    public Pair(A first,B second)
    {
        this.first=first;
        this.second=second;
    }

    public void setFirst(A first)
    {
        this.first=first;
    }

    public void setSecond(B second)
    {
        this.second=second;
    }

    public A getFirst()
    {
        return first;
    }

    public B getSecond()
    {
        return second;
    }

    @Override
    public String toString()
    {
        return "{"+(first==null?"null":first.toString())+", "+(second==null?"null":second.toString())+"}";
    }
}
```

### Java 16 and above

```java
public record Pair<A,B>(A first,B second)
{
}
```
