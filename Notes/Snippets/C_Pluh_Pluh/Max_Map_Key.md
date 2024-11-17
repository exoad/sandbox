# Max Map Key

Returns the biggest Key Value pair in a map where the value is the largest (numerical)

## `std::unordered_map`

```cxx
#include <unordered_map>
#include <algorithm>
#include <utility>

template<class K,class V>
std::pair<K,V> max_kv(std::unordered_map<K,V> const &x)
{
    return *std::max_element(x.begin(),x.end(),[](const std::pair<K,V> &a,const std::pair<K,V> &b){return a.second<b.second;});
}
```

## `std::map`

```cxx
#include <map>
#include <algorithm>
#include <utility>

template<class K,class V>
std::pair<K,V> max_kv(std::map<K,V> const &x)
{
    return *std::max_element(x.begin(),x.end(),[](const std::pair<K,V> &a,const std::pair<K,V> &b){return a.second<b.second;});
}
```

[Reference](https://stackoverflow.com/a/55961383)
