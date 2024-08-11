//
// Created by xu183 on 2024/8/7.
//

#ifndef BP_PROCESSFILE_HPP
#define BP_PROCESSFILE_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <codecvt>
#include "Data.hpp"

using namespace std;


class ProcessFile {
public:
    explicit ProcessFile(const string &name) : FileName(name) {}

    Data *get_Data() {
        wifstream ifs;
        ifs.imbue(std::locale(std::locale(), new std::codecvt_utf8<wchar_t>));
        ifs.open(FileName);
        if (!ifs.is_open()) {
            cerr << "ifstream open failed!" << endl;
            exit(1);
        }

        Data *doc = new Data;

        wstring buffer;
        unsigned i = 0, j = 0;
        while (getline(ifs, buffer)) {
            switch (i) {
                case 0: {
                    if (j == 0) {
                        size_t idx = find_next_word(buffer, L"日期：");
                        doc->self_information_0.emplace_back(L"日期：", vector<wstring>());
                        doc->self_information_0[0].second.emplace_back(buffer.substr(idx));
                    } else if (j == 1) {
                        size_t idx = find_next_word(buffer, L"姓名：");
                        doc->self_information_0.emplace_back(L"姓名：", vector<wstring>());
                        doc->self_information_0[1].second.emplace_back(buffer.substr(idx));
                    } else if (j == 2) {
                        size_t idx = find_next_word(buffer, L"岗位：");
                        doc->self_information_0.emplace_back(L"岗位：", vector<wstring>());
                        doc->self_information_0[2].second.emplace_back(buffer.substr(idx));
                    } else {
                        size_t idx = find_next_word(buffer, L"一、今日工作内容");
                        if (idx != 0) {
                            i++, j = 0;
                            break;
                        }
                    }
                    j++;
                    break;
                }
                case 1: {
                    wstring target1 = to_wstring(j + 1) + L". ";
                    wstring target2 = L"- ";
                    wstring target3 = to_wstring(j + 2) + L". ";
                    size_t idx1 = find_next_word(buffer, target1);
                    size_t idx2 = find_next_word(buffer, target2);
                    size_t idx3 = find_next_word(buffer, target3);
                    if (idx1 != 0) {
                        doc->today_work_content_1.emplace_back(buffer.substr(idx1), vector<wstring>());
                    } else if (idx2 != 0) {
                        doc->today_work_content_1[j].second.emplace_back(buffer.substr(idx2));
                    } else if (idx3 != 0) {
                        doc->today_work_content_1.emplace_back(buffer.substr(idx3), vector<wstring>());
                        j++;
                    } else {
                        size_t idx = find_next_word(buffer, L"二、遇到的问题及解决方案");
                        if (idx != 0) i++, j = 0;
                    }
                    break;
                }
                case 2: {
                    wstring target1 = to_wstring(j + 1) + L". ";
                    wstring target2 = L"- ";
                    wstring target3 = to_wstring(j + 2) + L". ";
                    size_t idx1 = find_next_word(buffer, target1);
                    size_t idx2 = find_next_word(buffer, target2);
                    size_t idx3 = find_next_word(buffer, target3);
                    if (idx1 != 0) {
                        doc->meet_solve_problem_2.emplace_back(buffer.substr(idx1), vector<wstring>());
                    } else if (idx2 != 0) {
                        doc->meet_solve_problem_2[j].second.emplace_back(buffer.substr(idx2));
                    } else if (idx3 != 0) {
                        doc->meet_solve_problem_2.emplace_back(buffer.substr(idx3), vector<wstring>());
                        j++;
                    } else {
                        size_t idx = find_next_word(buffer, L"三、明日工作计划");
                        if (idx != 0) i++, j = 0;
                    }
                    break;
                }
                case 3: {
                    wstring target1 = to_wstring(j + 1) + L". ";
                    wstring target2 = L"- ";
                    wstring target3 = to_wstring(j + 2) + L". ";
                    size_t idx1 = find_next_word(buffer, target1);
                    size_t idx2 = find_next_word(buffer, target2);
                    size_t idx3 = find_next_word(buffer, target3);
                    if (idx1 != 0) {
                        doc->tomorrow_work_plan_3.emplace_back(buffer.substr(idx1), vector<wstring>());
                    } else if (idx2 != 0) {
                        doc->tomorrow_work_plan_3[j].second.emplace_back(buffer.substr(idx2));
                    } else if (idx3 != 0) {
                        doc->tomorrow_work_plan_3.emplace_back(buffer.substr(idx3), vector<wstring>());
                        j++;
                    } else {
                        size_t idx = find_next_word(buffer, L"四、需要的支持与帮助");
                        if (idx != 0) i++, j = 0;
                    }
                    break;
                }
                case 4: {
                    wstring target1 = to_wstring(j + 1) + L". ";
                    wstring target2 = L"- ";
                    wstring target3 = to_wstring(j + 2) + L". ";
                    size_t idx1 = find_next_word(buffer, target1);
                    size_t idx2 = find_next_word(buffer, target2);
                    size_t idx3 = find_next_word(buffer, target3);
                    if (idx1 != 0) {
                        doc->need_support_help_4.emplace_back(buffer.substr(idx1), vector<wstring>());
                    } else if (idx2 != 0) {
                        doc->need_support_help_4[j].second.emplace_back(buffer.substr(idx2));
                    } else if (idx3 != 0) {
                        doc->need_support_help_4.emplace_back(buffer.substr(idx3), vector<wstring>());
                        j++;
                    } else {
                        size_t idx = find_next_word(buffer, L"五、备注");
                        if (idx != 0) i++, j = 0;
                    }
                    break;
                }
                case 5: {
                    wstring target1 = to_wstring(j + 1) + L". ";
                    wstring target2 = L"- ";
                    wstring target3 = to_wstring(j + 2) + L". ";
                    size_t idx1 = find_next_word(buffer, target1);
                    size_t idx2 = find_next_word(buffer, target2);
                    size_t idx3 = find_next_word(buffer, target3);
                    if (idx1 != 0) {
                        doc->remarks_5.emplace_back(buffer.substr(idx1), vector<wstring>());
                    } else if (idx2 != 0) {
                        doc->remarks_5[j].second.emplace_back(buffer.substr(idx2));
                    } else if (idx3 != 0) {
                        doc->remarks_5.emplace_back(buffer.substr(idx3), vector<wstring>());
                        j++;
                    }
                    break;
                }
                default:
                    break;
            }
        }
        ifs.close();
        return doc;
    }

private:
    static size_t find_next_word(const wstring &src, const wstring &target) {
        size_t idx = src.find(target);
        if (idx != wstring::npos) {
            return idx + target.length();
        } else {
            return 0;
        }
    }

    const string &FileName;
};

#endif //BP_PROCESSFILE_HPP