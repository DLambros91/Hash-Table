
namespace myhash {
    template <typename T>
    class hashtable {
        public: 
            T get (int key);
            bool exists (int key);
            void remove (int key);
            void add (int key, T value);
            int hash (int k, int m);
        private: 
    };

}
