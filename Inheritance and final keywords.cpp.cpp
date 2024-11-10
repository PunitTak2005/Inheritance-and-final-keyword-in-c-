#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Base class
class Tea {
protected:
    string teaName;
    int servings;

public:
    Tea(string name, int serve) : teaName(name), servings(serve) {
        cout << "Tea constructor called for " << teaName << endl;
    }

    virtual void brew() const {
        cout << "Brewing " << teaName << " with a generic method" << endl;
    }

    virtual void serve() const {
        cout << "Serving " << servings << " cups of " << teaName << " with a generic method" << endl;
    }

    virtual ~Tea() {
        cout << "Tea destructor called for " << teaName << endl;
    }
};

// Derived class GreenTea
class GreenTea : public Tea {
public:
    GreenTea(int serve) : Tea("Green Tea", serve) {
        cout << "GreenTea constructor called" << endl;
    }

    void brew() const override {
        cout << "Brewing " << teaName << " with a specific method" << endl;
    }

    ~GreenTea() {
        cout << "GreenTea destructor called" << endl;
    }
};

// Derived class MasalaTea
class MasalaTea : public Tea {
public:
    MasalaTea(int serve) : Tea("Masala Tea", serve) {
        cout << "MasalaTea constructor called" << endl;
    }

    void brew() const override final {
        cout << "Brewing " << teaName << " with a specific method" << endl;
    }

    ~MasalaTea() {
        cout << "MasalaTea destructor called" << endl;
    }
};

int main() {
    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}
