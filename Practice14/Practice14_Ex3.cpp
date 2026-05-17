#include <fstream>
#include <string>

struct Person {
    int id = 0;
    std::string name;
};

std::string toLine(const Person& p) {
    return std::to_string(p.id) + " " + p.name;
}

class PersonRepo {
public:
    Person* data;
    int count;
    int capacity;

    PersonRepo() {
        capacity = 4;
        count = 0;
        data = new Person[capacity];
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

    void saveAll(const std::string& filename) const {
        std::ofstream file(filename);
        if (!file.is_open()) return;
        for (int i = 0; i < count; i++) {
            file << toLine(data[i]) << "\n";
        }
    }
};

int main() {
    PersonRepo repo;
    repo.add(Person{1, "John"});
    repo.add(Person{2, "Anna"});
    repo.add(Person{3, "Maria"});

    repo.saveAll("people.txt");

    return 0;
}
