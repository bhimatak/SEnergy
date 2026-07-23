#include <iostream>
#include <vector>
#include <initializer_list>

class NumberBox {
private:
    //std::vector<int> data;
    int x,y,z;
public:
    // Constructor accepting an initializer list
    // NumberBox(std::initializer_list<int> list) {
    //     for (int element : list) {
    //         data.push_back(element);
    //     }
    // }

    NumberBox(int x, int y, int z):x(x),y(y),z(z){}
    void print() {
        // for (int x : data) std::cout << x << " ";
        // std::cout << "\n";
        std::cout<<x<<"\t"<<y<<"\t"<<z<<std::endl;
    }
};

int main() {
    // Elegant initialization using a braced list
    //NumberBox box = {10, 20, 30, 40};
    //NumberBox box{10, 20, 30};
    NumberBox box(10, 20, 30);
    box.print(); // Output: 10 20 30 40
    NumberBox box1{11, 20, 31};
    box1.print(); // Output: 10 20 30 40
}
