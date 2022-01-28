#ifndef MY_HASH
#define MY_HASH
#include <iostream>

template <typename T>
class hashtable {
    public: 
        hashtable () {
            m = 100;
            arr = new T[m];
        }

        T get (int key);
        bool exists (int key);
        void remove (int key);
        void add (T key, T value);
        int hash (T k, int m) {
            return std::hash<T>(k) % m;
        }
    private: 
        T * arr;
        int m;
};

#endif