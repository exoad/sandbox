# String to Set

Converts a string to a `std::set`

## Function

```cxx

inline void stringToSet(std::set<std::string>& set,std::string str)
{
    std::for_each(str.begin(),str.end(),[&set](char c)-> void{set.insert(std::string({c}));});
}

```

## Basis

```cxx
#include <set>
#include <cstring>
...

std::string some_string=...;
std::set<string> string_set;
std::for_each(some_string.begin(),some_string.end(),[&string_set](char c)-> void{string_set.insert(std::string({c}));});
```

[Reference](https://stackoverflow.com/a/29780187)
