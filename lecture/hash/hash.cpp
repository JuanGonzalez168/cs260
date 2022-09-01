

int HashTable::hashFunction(const char* key) {

    int x=0;

//    "abc"  ASCII a = 97, 98, 99
    
    int len = strlen(key);
    for (int i=0;i<len;i++) {
	x = x + (int)key[i];
    }

    x = x % mArraySize; 
    
    return x;
}

void HashTable::add(char* key,Entry value) {

    int idx = hashFunction(key);

    mEntries[idx] = value;
}
