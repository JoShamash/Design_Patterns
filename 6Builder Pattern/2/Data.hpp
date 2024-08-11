//
// Created by xu183 on 2024/8/7.
//

#ifndef BP_DATA_HPP
#define BP_DATA_HPP

#include <iostream>
#include <vector>

using namespace std;
using pss = pair<wstring, vector<wstring>>;
using vpss = vector<pss>;

class Data {
public:
    vpss self_information_0;
    vpss today_work_content_1;
    vpss meet_solve_problem_2;
    vpss tomorrow_work_plan_3;
    vpss need_support_help_4;
    vpss remarks_5;
};

#endif //BP_DATA_HPP
