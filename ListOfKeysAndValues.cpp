#include "ListOfKeysAndValues.h"


template <typename K, typename V>
void ListOfKeysAndValues<K, V>::addKeyValuePair(const K& key, const V& value) 
{
    keys.push_back(key);
    values.push_back(value);
}


template <typename K, typename V>
pair<K, V> ListOfKeysAndValues<K, V>::getPair(size_t index) const 
{
    if (index >= keys.size() || index >= values.size()) 
    {
        throw out_of_range("Index out of range");
    }
    return make_pair(keys[index], values[index]);
}


template <typename K, typename V>
V ListOfKeysAndValues<K, V>::getValue(const K& key) const 
{
    for (size_t i = 0; i < keys.size(); ++i) 
    {
        if (keys[i] == key) 
        {
            return values[i];
        }
    }
    throw invalid_argument("Key not found");
}


template class ListOfKeysAndValues<int, string>;