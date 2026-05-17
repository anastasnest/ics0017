#include <iostream>
#include <fstream>
#include <string>

struct Person {
    int id = 0;
    std::string name;
};

std::string toLine(const Person& p) {
    return std::to_string(p.id) + " " + p.name;
}

class Repository {
public:
    Person* data;
    int count;
    int capacity;

    Repository() {
        capacity = 4;
        count = 0;
        data = new Person[capacity];
        std::cout << "Repository created" << std::endl;
    }

    ~Repository() {
        delete[] data;
        std::cout << "Repository destroyed" << std::endl;
    }

    Person* ensureCapacity() {
        if (count < capacity) return data;
        int newCap = capacity * 2;
        Person* newData = new Person[newCap];
        for (int i = 0; i < count; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        capacity = newCap;
        return newData;
    }

    void add(const Person& p) {
        data = ensureCapacity();
        data[count++] = p;
    }

    void readRepo() const {
        for (int i = 0; i < count; i++)
            std::cout << toLine(data[i]) << std::endl;
    }
};

int main() {
    {
        Repository repo;
        repo.add(Person{1, "John"});
        repo.add(Person{2, "Anna"});
        std::cout << "2 items added" << std::endl;
        std::cout << "Inside repository:" << std::endl;
        repo.readRepo();
    } // repo goes out of scope here, destructor is called
    std::cout << "End of main" << std::endl;
    return 0;
}
