//
// Created by xu183 on 2024/8/7.
//

#ifndef BP_PRODUCT_HPP
#define BP_PRODUCT_HPP

#include "ProcessFile.hpp"


class Product {
public:
    vector<wstring> content;
};

class MarkDown_File : public Product {

};

class HTML_File : public Product {

};

#endif //BP_PRODUCT_HPP
