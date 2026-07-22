#include <iostream>
#include <map>
#include <string>

// ----------------------------------------------------
// Employee class
// ----------------------------------------------------
class Employee {
public:
    int    id;
    std::string name;
    double salary;

    Employee(int id, std::string name, double salary)
        : id(id), name(std::move(name)), salary(salary) {}
};

template <typename MapType>
void printMap(const std::string& label, const MapType& m) {
    std::cout << "\n--- " << label << " ---\n";
    for (const auto& [emp, salary] : m) {
        std::cout << "ID: " << emp.id << ", Name: " << emp.name
                   << " -> Salary: " << salary << "\n";
    }
}

// ==========================================================
// 1) COMPARATOR AS A PLAIN FUNCTION
//    Takes two Employee objects, compares by id (ascending)
// ==========================================================
bool compareEmployeeById(const Employee& a, const Employee& b) {
    return a.id < b.id;
}

void demoFunctionComparator() {
    // function comparator must be passed as a function POINTER type
    std::map<Employee, double, bool(*)(const Employee&, const Employee&)>
        empMap(compareEmployeeById);

    empMap.insert({Employee(103, "Ravi",  62000), 62000});
    empMap.insert({Employee(101, "Asha",  55000), 55000});
    empMap.insert({Employee(102, "Meena", 58000), 58000});

    printMap("Function comparator (Employee objects, by id)", empMap);
}

// ==========================================================
// 2) COMPARATOR AS A CLASS (functor)
//    Takes two Employee objects, compares by name (alphabetical)
// ==========================================================
class CompareEmployeeByName {
public:
    bool operator()(const Employee& a, const Employee& b) const {
        return a.name < b.name;
    }
};

void demoClassComparator() {
    std::map<Employee, double, CompareEmployeeByName> empMap;

    empMap.insert({Employee(103, "Ravi",  62000), 62000});
    empMap.insert({Employee(101, "Asha",  55000), 55000});
    empMap.insert({Employee(104, "Jo",    48000), 48000});
    empMap.insert({Employee(102, "Meena", 58000), 58000});

    printMap("Class functor comparator (Employee objects, by name)", empMap);
}

// ==========================================================
// 3) COMPARATOR AS A STRUCT
//    Takes two Employee objects, compares by id (descending)
// ==========================================================
struct CompareEmployeeByIdDesc {
    bool operator()(const Employee& a, const Employee& b) const {
        return a.id > b.id;   // descending
    }
};

void demoStructComparator() {
    std::map<Employee, double, CompareEmployeeByIdDesc> empMap;

    empMap.insert({Employee(101, "Asha",  55000), 55000});
    empMap.insert({Employee(103, "Ravi",  62000), 62000});
    empMap.insert({Employee(102, "Meena", 58000), 58000});

    printMap("Struct comparator (Employee objects, by id, descending)", empMap);
}

int main() {
    demoFunctionComparator();
    demoClassComparator();
    demoStructComparator();
    return 0;
}


//map<k,vector<>>