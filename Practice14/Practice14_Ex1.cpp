#include <iostream>

// Simple struct
struct Item {
    int id;
};

// Simple repository
class SimpleRepo {
public:
    Item* data;
    int count;
    int capacity;

    SimpleRepo() {
        capacity = 2;
        count = 0;
        data = new Item[capacity];
    }

    ~SimpleRepo() {
        delete[] data;
    }

    Item* ensureCapacity() {
        if (count < capacity) return data;
        int newCap = capacity * 2;
        Item* newData = new Item[newCap];
        for (int i = 0; i < count; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        capacity = newCap;
        return newData;
    }

    void add(const Item& item) {
        data = ensureCapacity();
        data[count] = item;
        count++;
    }
};

int main() {
    SimpleRepo repo;
    for (int i = 1; i <= 5; i++) {
        Item it{ i };
        repo.add(it);
        std::cout << "Added id=" << it.id
                  << " -> count=" << repo.count
                  << " capacity=" << repo.capacity << std::endl;
    }
    return 0;
}