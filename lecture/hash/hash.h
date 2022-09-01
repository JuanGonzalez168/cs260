

class HashTable
{
private:
    int mArraySize;
    Entry[] mEntries; // dynamically allocated array

    int hashFunction(char* k);
    
public:
    HashTable();
    add();
    remove();
    lookup();
    // etc.
	
    
};
