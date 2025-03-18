#ifndef LISTOFKEYSANDVALUES_H
#define LISTOFKEYSANDVALUES_H

#include <vector>
#include <stdexcept>
#include <utility>
#include <iostream>

using namespace std; 


template <typename K, typename V>
class ListOfKeysAndValues 
{
private:
    vector<K> keys;   
    vector<V> values; 

public:
  
    void addKeyValuePair(const K& key, const V& value);

   
    pair<K, V> getPair(size_t index) const;


    V getValue(const K& key) const;
};

#endif 