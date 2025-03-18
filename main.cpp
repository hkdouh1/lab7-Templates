#include "ListOfKeysAndValues.h"

int main() {
   
    ListOfKeysAndValues<int, string> keyValueList;

   
    keyValueList.addKeyValuePair(1, "Apple");
    keyValueList.addKeyValuePair(2, "Banana");
    keyValueList.addKeyValuePair(3, "Cherry");

   
    try {
        auto pair = keyValueList.getPair(1); 
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    catch (const out_of_range& e) 
    {
        cerr << "Error: " << e.what() << endl;
    }

    
    try 
    {
        string value = keyValueList.getValue(3); 
        cout << "Value for key 3: " << value << endl;
    }
    catch (const invalid_argument& e) 
    {
        cerr << "Error: " << e.what() << endl;
    }

    
    try 
    {
        auto pair = keyValueList.getPair(5); 
    }
    catch (const out_of_range& e) 
    {
        cerr << "Error: " << e.what() << endl;
    }

    
    try 
    {
        string value = keyValueList.getValue(4); 
    }
    catch (const invalid_argument& e) 
    {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}