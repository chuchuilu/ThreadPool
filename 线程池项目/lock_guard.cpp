#include <mutex>
#include <iostream>

std::mutex mtx; // 全局互斥量

void print_block(int n, char c) {
    // std::lock_guard<std::mutex> lck(mtx); // 当前作用域内自动锁定mtx
    for (int i = 0; i < n; ++i) { std::cout << c; }
    std::cout << '\n';
    // 当函数结束时，lck的析构函数自动释放锁
}

int main() {
    print_block(50, '*');
    print_block(50, '#');
    return 0;
}
