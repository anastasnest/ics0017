#include <iostream>

class IntRepo {
public:
    int* data;
    int count;
    int capacity;

    IntRepo(int cap = 5) {
        capacity = cap;
        count = 0;
        data = new int[capacity];
    }

    ~IntRepo() {
        delete[] data;
    }

    int* ensureCapacity() {
        if (count < capacity) return data;
        int newCap = capacity * 2;
        int* newData = new int[newCap];
        for (int i = 0; i < count; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        capacity = newCap;
        return newData;
    }

    void add(int value) {
        data = ensureCapacity();
        data[count++] = value;
    }

    void removeAt(int index) {
        if (index < 0 || index >= count) return;
        for (int i = index; i < count - 1; i++) {
            data[i] = data[i + 1];
        }
        count--;
    }

    void readRepo() const {
        for (int i = 0; i < count; i++)
            std::cout << "[" << data[i] << "]";
        std::cout << std::endl;
    }
};

int main() {
    IntRepo repo;
    repo.add(10);
    repo.add(20);
    repo.add(30);
    repo.add(40);
    repo.add(50);

    std::cout << "Before: ";
    repo.readRepo();

    repo.removeAt(2); // remove value 30

    std::cout << "After:  ";
    repo.readRepo();

    return 0;
}
