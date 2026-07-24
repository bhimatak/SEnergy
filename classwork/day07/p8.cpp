#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
class ThreadSafeCounter {
    int count;
    mutable std::mutex mtx;
public:
    ThreadSafeCounter() : count(0) {}
    void increment() {
    std::lock_guard<std::mutex> lock(mtx);
    ++count;
    }
    int getCount() const {
    std::lock_guard<std::mutex> lock(mtx);
    return count;
    }
};


int main() {
    ThreadSafeCounter counter;
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; ++i) {
    threads.emplace_back([&counter]{
    for (int j = 0; j < 10000000; ++j) counter.increment();
    });
    }
    for (auto& t : threads) t.join();
    std::cout << "Final count: " << counter.getCount() <<
    std::endl;
    return 0;
}