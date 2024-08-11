//
// Created by xu183 on 2024/8/10.
//
#include <iostream>
#include <mutex>

class Singleton {
public:
    // 禁用拷贝构造函数和赋值操作符
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    // 私有构造函数，防止外部实例化
    Singleton() {
        std::cout << "Singleton Constructor" << std::endl;
    }
    ~Singleton() {
        std::cout << "Singleton Deconstructor" << std::endl;
    }
    // 静态内部类，用于持有 Singleton 实例
    class SingletonHolder {
    public:
        static Singleton instance;
    };

public:
    // 获取 Singleton 实例的静态方法
    static Singleton& getInstance() {
        return SingletonHolder::instance;
    }
};

// 定义并初始化静态内部类的静态成员
Singleton Singleton::SingletonHolder::instance;

int main() {
    std::cout << "Before calling getInstance()" << std::endl;
    Singleton& singleton1 = Singleton::getInstance();
    Singleton& singleton2 = Singleton::getInstance();
    std::cout << "After calling getInstance()" << std::endl;

    // 验证两个实例是否相同
    if (&singleton1 == &singleton2) {
        std::cout << "Both instances are the same" << std::endl;
    } else {
        std::cout << "Instances are different" << std::endl;
    }

    return 0;
}
