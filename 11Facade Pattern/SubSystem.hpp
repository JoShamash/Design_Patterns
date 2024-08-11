//
// Created by xu183 on 2024/8/10.
//

#ifndef FP_SUBSYSTEM_HPP
#define FP_SUBSYSTEM_HPP

#include <iostream>

using namespace std;

// 单例模板类
template <typename T>
class Singleton {
public:
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;

    static T &getInstance() {
        static T instance;
        return instance;
    }

protected:
    Singleton() = default;
    ~Singleton() = default;
};

class graphic : public Singleton<graphic> {
    friend class Singleton<graphic>;

public:
    void display(bool enable) {
        cout << "图形全屏显示：" << (enable ? "Yes" : "No") << endl;
    }

    void effect(bool enable) {
        cout << "图形开启技能特效：" << (enable ? "Yes" : "No") << endl;
    }

    void antialiasing(bool enable) {
        cout << "图形开启抗锯齿：" << (enable ? "Yes" : "No") << endl;
    }

    void resolution(int index) {
        cout << "图形设置分辨率：" << (index == 0 ? "1920x1080" : "1280x720") << endl;
    }

private:
    graphic() = default;
    ~graphic() = default;
};

class sound : public Singleton<sound> {
    friend class Singleton<sound>;

public:
    void bgsound(bool enable) {
        cout << "声音开启背景音乐：" << (enable ? "Yes" : "No") << endl;
    }

    void envirsound(bool enable) {
        cout << "声音开启环境音效：" << (enable ? "Yes" : "No") << endl;
    }

    void expsound(bool enable) {
        cout << "声音开启表情音效：" << (enable ? "Yes" : "No") << endl;
    }

    void setvolum(int index) {
        cout << "声音设置音量大小：" << (index > 100 || index < 0 ? "default" : to_string(index)) << endl;
    }

private:
    sound() = default;
    ~sound() = default;
};

class chatvoice : public Singleton<chatvoice> {
    friend class Singleton<chatvoice>;

public:
    void micvolume(int index) {
        cout << "语音聊天麦克风设置音量大小：" << (index > 100 || index < 0 ? "default" : to_string(index)) << endl;
    }

    void micsens(int index) {
        cout << "语音聊天麦克风设置灵敏度大小：" << (index > 100 || index < 0 ? "default" : to_string(index)) << endl;
    }

    void chatvolume(int index) {
        cout << "语音聊天对话设置音量大小：" << (index > 100 || index < 0 ? "default" : to_string(index)) << endl;
    }

private:
    chatvoice() = default;
    ~chatvoice() = default;
};

#endif //FP_SUBSYSTEM_HPP
