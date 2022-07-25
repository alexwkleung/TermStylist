#include "../include/termstylist.h"
#include <iostream>

int main() {
    std::cout << '\n';

    std::cout << termstylist::FG_Default << "FG Default" << " ";
    std::cout << termstylist::FG_Black << "FG Black" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_Red << "FG Red" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_Green << "FG Green" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_Yellow << "FG Yellow" << termstylist::FG_Default << '\n';
    std::cout << termstylist::FG_Blue << "FG Blue" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_Magenta << "FG Magenta" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_Cyan << "FG Cyan" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_LightGrey << "FG Light Grey" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_DarkGrey << "FG Dark Grey" << termstylist::FG_Default << '\n';
    std::cout << termstylist::FG_LightRed << "FG Light Red" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_LightGreen << "FG Light Green" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_LightYellow << "FG Light Yellow" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_LightBlue << "FG Light Blue" << termstylist::FG_Default << '\n';
    std::cout << termstylist::FG_LightMagenta << "FG Light Magenta" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_LightCyan << "FG Light Cyan" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_White << "FG White" << termstylist::FG_Default << " ";

    std::cout << '\n' << '\n';

    return 0;
}
