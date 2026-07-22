#include <iostream>
#include <map>
#include <string>

// ----------------------------------------------------
// Employee class (used in all three demos)
// ----------------------------------------------------
class Employee {
public:
    int    id;
    std::string name;
    double salary;

    Employee(int id, std::string name, double salary)
        : id(id), name(std::move(name)), salary(salary) {}
};

void printMap(const std::string& label, const auto& m) {
    std::cout << "\n--- " << label << " ---\n";
    for (const auto& [key, emp] : m) {
        std::cout << key << " -> " << emp.name << " (Salary: " << emp.salary << ")\n";
    }
}

// ==========================================================
// 1) COMPARATOR AS A PLAIN FUNCTION
//    map key = Employee id, ordered descending by id
// ==========================================================
bool compareByIdDesc(const int& a, const int& b) {
    return a > b;   // descending order
}

void demoFunctionComparator() {
    // Note: function comparator must be passed as a function POINTER type
    std::map<int, Employee, bool(*)(const int&, const int&)> empMap(compareByIdDesc); //refer p8.cpp
    

    empMap.insert({101, Employee(101, "Asha", 55000)});
    empMap.insert({103, Employee(103, "Ravi", 62000)});
    empMap.insert({102, Employee(102, "Meena", 58000)});

    printMap("Function comparator (map key=id, descending)", empMap);
}

// ==========================================================
// 2) COMPARATOR AS A CLASS (functor with private state / constructor)
//    map key = Employee name, ordered by string length then alpha
// ==========================================================
class CompareByNameLength {
public:
    bool operator()(const std::string& a, const std::string& b) const {
        if (a.size() != b.size())
            return a.size() < b.size();
        return a < b;
    }
};

void demoClassComparator() {
    std::map<std::string, Employee, CompareByNameLength> empMap;

    empMap.insert({"Ravi",  Employee(103, "Ravi",  62000)});
    empMap.insert({"Asha",  Employee(101, "Asha",  55000)});
    empMap.insert({"Jo",    Employee(104, "Jo",    48000)});
    empMap.insert({"Meena", Employee(102, "Meena", 58000)});

    printMap("Class functor comparator (map key=name, by length)", empMap);
}

// ==========================================================
// 3) COMPARATOR AS A STRUCT (public by default, common idiom)
//    map key = Employee salary, ordered descending by salary
// ==========================================================
struct CompareBySalaryDesc {
    bool operator()(const double& a, const double& b) const {
        return a > b;   // descending order
    }
};

void demoStructComparator() {
    std::map<double, Employee, CompareBySalaryDesc> empMap;

    empMap.insert({55000, Employee(101, "Asha",  55000)});
    empMap.insert({62000, Employee(103, "Ravi",  62000)});
    empMap.insert({58000, Employee(102, "Meena", 58000)});

    printMap("Struct comparator (map key=salary, descending)", empMap);
}

int main() {
    demoFunctionComparator();
    demoClassComparator();
    demoStructComparator();
    return 0;
}