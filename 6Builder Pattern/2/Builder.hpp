//
// Created by xu183 on 2024/8/7.
//

#ifndef BP_BUILDER_HPP
#define BP_BUILDER_HPP

#include "Product.hpp"

class Builder {
public:
    explicit Builder(const string &input, const string &output) : inputFile(input), outputFile(output) {
        ProcessFile pf(inputFile);
        pdata = pf.get_Data();
    }

    virtual ~Builder() {
        delete pdata;
        delete pProduct;
    }

    virtual void init_begin() = 0;

    virtual void load_0() = 0;

    virtual void load_1() = 0;

    virtual void load_2() = 0;

    virtual void load_3() = 0;

    virtual void load_4() = 0;

    virtual void load_5() = 0;

    virtual void init_end() = 0;

    void exportFile() {
        ofs.imbue(std::locale(std::locale(), new std::codecvt_utf8<wchar_t>));
        ofs.open(outputFile);
        if (!ofs.is_open()) {
            cerr << "ofstream open failed!" << endl;
            exit(1);
        }

        for (const auto &i: pProduct->content) {
            ofs << i << endl;
        }

        ofs.close();
    }

protected:
    const string &inputFile;
    const string &outputFile;
    Product *pProduct{};
    Data *pdata;
    wifstream ifs;
    wofstream ofs;
};

class HTML_Builder : public Builder {
public:
    explicit HTML_Builder(const string &input, const string &output = "work_daily_log.html") : Builder(input, output) {
        pProduct = new HTML_File;
        ifs.imbue(std::locale(std::locale(), new std::codecvt_utf8<wchar_t>));
        ifs.open(R"(G:\2024WDcpp54\Design_Patterns\6Builder Pattern\2\init_html.txt)");
        if (!ifs.is_open()) {
            cerr << "ifstream open failed!" << endl;
            exit(1);
        }
    }

    void init_begin() override {
        wstring buffer;
        while (getline(ifs, buffer)) {
            if (!buffer.empty())
                pProduct->content.emplace_back(buffer);
        }
        ifs.close();
    }

    void load_0() override {
        pProduct->content.emplace_back(L"<div class=\"header\">");
        pProduct->content.emplace_back(L"<h1>工作日报</h1>");
        for (const auto &i: pdata->self_information_0) {
            pProduct->content.emplace_back(L"<p>" + i.first + i.second[0] + L"</p>");
        }
        pProduct->content.emplace_back(L"</div>");
    }

    void load_1() override {
        pProduct->content.emplace_back(L"<div class=\"section\">");
        pProduct->content.emplace_back(L"<h2>今日工作内容</h2>");
        pProduct->content.emplace_back(L"<ul>");
        for (const auto &i: pdata->today_work_content_1) {
            pProduct->content.emplace_back(L"<li><strong>" + i.first + L"</strong>");
            pProduct->content.emplace_back(L"<ul>");
            for (const auto &j: i.second) {
                pProduct->content.emplace_back(L"<li>" + j + L"</li>");
            }
            pProduct->content.emplace_back(L"</ul>");
            pProduct->content.emplace_back(L"</li>");
        }
        pProduct->content.emplace_back(L"</ul>");
        pProduct->content.emplace_back(L"</div>");
    }

    void load_2() override {
        pProduct->content.emplace_back(L"<div class=\"section\">");
        pProduct->content.emplace_back(L"<h2>遇到的问题及解决方案</h2>");
        pProduct->content.emplace_back(L"<ul>");
        for (const auto &i: pdata->meet_solve_problem_2) {
            pProduct->content.emplace_back(L"<li><strong>" + i.first + L"</strong>");
            pProduct->content.emplace_back(L"<ul>");
            for (const auto &j: i.second) {
                pProduct->content.emplace_back(L"<li>" + j + L"</li>");
            }
            pProduct->content.emplace_back(L"</ul>");
            pProduct->content.emplace_back(L"</li>");
        }
        pProduct->content.emplace_back(L"</ul>");
        pProduct->content.emplace_back(L"</div>");
    }

    void load_3() override {
        pProduct->content.emplace_back(L"<div class=\"section\">");
        pProduct->content.emplace_back(L"<h2>明日工作计划</h2>");
        pProduct->content.emplace_back(L"<ul>");
        for (const auto &i: pdata->tomorrow_work_plan_3) {
            pProduct->content.emplace_back(L"<li><strong>" + i.first + L"</strong>");
            pProduct->content.emplace_back(L"<ul>");
            for (const auto &j: i.second) {
                pProduct->content.emplace_back(L"<li>" + j + L"</li>");
            }
            pProduct->content.emplace_back(L"</ul>");
            pProduct->content.emplace_back(L"</li>");
        }
        pProduct->content.emplace_back(L"</ul>");
        pProduct->content.emplace_back(L"</div>");
    }

    void load_4() override {
        pProduct->content.emplace_back(L"<div class=\"section\">");
        pProduct->content.emplace_back(L"<h2>需要的支持与帮助</h2>");
        pProduct->content.emplace_back(L"<ul>");
        for (const auto &i: pdata->need_support_help_4) {
            pProduct->content.emplace_back(L"<li><strong>" + i.first + L"</strong>");
            pProduct->content.emplace_back(L"<ul>");
            for (const auto &j: i.second) {
                pProduct->content.emplace_back(L"<li>" + j + L"</li>");
            }
            pProduct->content.emplace_back(L"</ul>");
            pProduct->content.emplace_back(L"</li>");
        }
        pProduct->content.emplace_back(L"</ul>");
        pProduct->content.emplace_back(L"</div>");
    }

    void load_5() override {
        pProduct->content.emplace_back(L"<div class=\"section\">");
        pProduct->content.emplace_back(L"<h2>备注</h2>");
        pProduct->content.emplace_back(L"<ul>");
        for (const auto &i: pdata->remarks_5) {
            pProduct->content.emplace_back(L"<li><strong>" + i.first + L"</strong>");
            pProduct->content.emplace_back(L"<ul>");
            for (const auto &j: i.second) {
                pProduct->content.emplace_back(L"<li>" + j + L"</li>");
            }
            pProduct->content.emplace_back(L"</ul>");
            pProduct->content.emplace_back(L"</li>");
        }
        pProduct->content.emplace_back(L"</ul>");
        pProduct->content.emplace_back(L"</div>");
    }

    void init_end() override {
        size_t idx = pdata->self_information_0[0].second[0].find(L'\x5E74');
        wstring year = pdata->self_information_0[0].second[0].substr(0, idx - 1);
        wstring name = pdata->self_information_0[1].second[0];
        pProduct->content.emplace_back(L"</div>");
        pProduct->content.emplace_back(L"<div class=\"footer\">");
        pProduct->content.emplace_back(L"&copy; " + year + L" " + name + L"的工作日报");
        pProduct->content.emplace_back(L"</div>");
        pProduct->content.emplace_back(L"</body>");
        pProduct->content.emplace_back(L"</html>");
    }
};

class MarkDown_Builder : public Builder {
public:
    explicit MarkDown_Builder(const string &input, const string &output = "work_dailyLog.md") : Builder(input, output) {
        pProduct = new MarkDown_File;
    }

    void init_begin() override {

    }

    void load_0() override {
        pProduct->content.emplace_back(L"# 工作日报");
        for (const auto &i: pdata->self_information_0) {
            pProduct->content.emplace_back(L"> " + i.first + i.second[0] + L"\\");
        }
    }

    void load_1() override {
        pProduct->content.emplace_back(L"## 今日工作内容");
        for (const auto &i: pdata->today_work_content_1) {
            pProduct->content.emplace_back(L"* **" + i.first + L"**");
            for (const auto &j: i.second) {
                pProduct->content.emplace_back(L"  * " + j);
            }
        }
    }

    void load_2() override {
        pProduct->content.emplace_back(L"## 遇到的问题及解决方案");
        for (const auto &i: pdata->meet_solve_problem_2) {
            pProduct->content.emplace_back(L"* **" + i.first + L"**");
            for (const auto &j: i.second) {
                pProduct->content.emplace_back(L"  * " + j);
            }
        }
    }

    void load_3() override {
        pProduct->content.emplace_back(L"## 明日工作计划");
        for (const auto &i: pdata->tomorrow_work_plan_3) {
            pProduct->content.emplace_back(L"* **" + i.first + L"**");
            for (const auto &j: i.second) {
                pProduct->content.emplace_back(L"  * " + j);
            }
        }
    }

    void load_4() override {
        pProduct->content.emplace_back(L"## 需要的支持与帮助");
        for (const auto &i: pdata->need_support_help_4) {
            pProduct->content.emplace_back(L"* **" + i.first + L"**");
            for (const auto &j: i.second) {
                pProduct->content.emplace_back(L"  * " + j);
            }
        }
    }

    void load_5() override {
        pProduct->content.emplace_back(L"## 备注");
        for (const auto &i: pdata->remarks_5) {
            pProduct->content.emplace_back(L"* **" + i.first + L"**");
            for (const auto &j: i.second) {
                pProduct->content.emplace_back(L"  * " + j);
            }
        }
    }

    void init_end() override {

    }
};

#endif //BP_BUILDER_HPP
