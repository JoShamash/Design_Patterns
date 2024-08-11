//
// Created by xu183 on 2024/8/7.
//

#include "Director.hpp"


int main() {
    const string &FileName1 = R"(G:\2024WDcpp54\Design_Patterns\6Builder Pattern\2\input.txt)";
    const string &FileName2 = R"(G:\2024WDcpp54\Design_Patterns\6Builder Pattern\2\output.html)";
    const string &FileName3 = R"(G:\2024WDcpp54\Design_Patterns\6Builder Pattern\2\output.md)";

    Builder *b1 = new HTML_Builder(FileName1, FileName2);
    Builder *b2 = new MarkDown_Builder(FileName1, FileName3);
    Director director(b1);
    director.assemble();

    director.resetBuilder(b2);
    director.assemble();

    delete b1;
    delete b2;
    return 0;
}