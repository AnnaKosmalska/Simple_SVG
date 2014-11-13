#include "simple_svg_1.0.0.hpp"
#include <iostream>

using namespace svg;

// Demo page shows sample usage of the Simple SVG library.

int main()
{
    Dimensions dimensions(100, 100);
    Layout layout = Layout(dimensions, Layout::BottomLeft);
    
    std::cout << "x" << TranslateX(10, layout) << endl;
    std::cout << "y" << TranslateX(10, layout) << endl;


}
