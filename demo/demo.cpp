#include "../include/termstylist.h"
#include <iostream>

int main() {
    std::cout << '\n';

    //attributes
    std::cout << termstylist::ATTR_Bold << "Bold" << termstylist::RESET_All << " ";
    std::cout << termstylist::ATTR_Underline << "Underline" << termstylist::RESET_Underline << " ";
    std::cout << termstylist::ATTR_Reverse << "Reverse" << termstylist::RESET_All << " ";

    std::cout << '\n' << '\n';
    
    //foreground colours (8 colours)
    std::cout << termstylist::FG_Default << "FG Default" << " ";
    std::cout << termstylist::FG_Black << "FG Black" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_Red << "FG Red" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_Green << "FG Green" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_Yellow << "FG Yellow" << termstylist::FG_Default << '\n';
    std::cout << termstylist::FG_Blue << "FG Blue" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_Magenta << "FG Magenta" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_Cyan << "FG Cyan" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_White << "FG White" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_LightGrey << "FG Light Grey" << termstylist::FG_Default << '\n';
    std::cout << termstylist::FG_DarkGrey << "FG Dark Grey" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_LightRed << "FG Light Red" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_LightGreen << "FG Light Green" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_LightYellow << "FG Light Yellow" << termstylist::FG_Default << '\n';
    std::cout << termstylist::FG_LightBlue << "FG Light Blue" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_LightMagenta << "FG Light Magenta" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG_LightCyan << "FG Light Cyan" << termstylist::FG_Default << " ";

    std::cout << '\n' << '\n';

    //foreground colours (16 colours)
    std::cout << termstylist::FG_BoldBlack << "FG Bold Black" << termstylist::RESET_All << " ";
    std::cout << termstylist::FG_BoldRed << "FG Bold Red" << termstylist::RESET_All << " ";
    std::cout << termstylist::FG_BoldGreen << "FG Bold Green" << termstylist::RESET_All << " ";
    std::cout << termstylist::FG_BoldYellow << "FG Bold Yellow" << termstylist::RESET_All << '\n';
    std::cout << termstylist::FG_BoldBlue << "FG Bold Blue" << termstylist::RESET_All << " ";
    std::cout << termstylist::FG_BoldMagenta << "FG Bold Magenta" << termstylist::RESET_All << " ";
    std::cout << termstylist::FG_BoldCyan << "FG Bold Cyan" << termstylist::RESET_All << " ";
    std::cout << termstylist::FG_BoldWhite << "FG Bold White" << termstylist::RESET_All << '\n';
    std::cout << termstylist::FG_BoldLightGrey << "FG Bold Light Grey" << termstylist::RESET_All << " ";
    std::cout << termstylist::FG_BoldDarkGrey << "FG Bold Dark Grey" << termstylist::RESET_All << " ";
    std::cout << termstylist::FG_BoldLightRed << "FG Bold Light Red" << termstylist::RESET_All << " ";
    std::cout << termstylist::FG_BoldLightGreen << "FG Bold Light Green" << termstylist::RESET_All << '\n';
    std::cout << termstylist::FG_BoldLightYellow << "FG Bold Light Yellow" << termstylist::RESET_All << " ";
    std::cout << termstylist::FG_BoldLightBlue << "FG Bold Light Blue" << termstylist::RESET_All << " ";
    std::cout << termstylist::FG_BoldLightMagenta << "FG Bold Light Magenta" << termstylist::RESET_All << " ";
    std::cout << termstylist::FG_BoldLightCyan << "FG Bold Light Cyan" << termstylist::RESET_All << " ";
 
    std::cout << '\n' << '\n';

    //background colours (8 colours)
    std::cout << termstylist::BG_Default << "BG Default" << " ";
    std::cout << termstylist::BG_Black << "BG Black" << termstylist::BG_Default << " ";
    std::cout << termstylist::BG_Red << "BG Red" << termstylist::BG_Default << " ";
    std::cout << termstylist::BG_Green << "BG Green" << termstylist::BG_Default << " ";
    std::cout << termstylist::BG_Yellow << "BG Yellow" << termstylist::BG_Default << '\n';
    std::cout << termstylist::BG_Blue << "BG Blue" << termstylist::BG_Default << " ";
    std::cout << termstylist::BG_Magenta << "BG Magenta" << termstylist::BG_Default << " ";
    std::cout << termstylist::BG_Cyan << "BG Cyan" << termstylist::BG_Default << " ";
    std::cout << termstylist::BG_White << "BG White" << termstylist::BG_Default << " ";
    std::cout << termstylist::BG_LightGrey << "BG Light Grey" << termstylist::BG_Default << '\n';
    std::cout << termstylist::BG_DarkGrey << "BG Dark Grey" << termstylist::BG_Default << " ";
    std::cout << termstylist::BG_LightRed << "BG Light Red" << termstylist::BG_Default << " ";
    std::cout << termstylist::BG_LightGreen << "BG Light Green" << termstylist::BG_Default << " ";
    std::cout << termstylist::BG_LightYellow << "BG Light Yellow" << termstylist::BG_Default << '\n';
    std::cout << termstylist::BG_LightBlue << "BG Light Blue" << termstylist::BG_Default << " ";
    std::cout << termstylist::BG_LightMagenta << "BG Light Magenta" << termstylist::BG_Default << " ";
    std::cout << termstylist::BG_LightCyan << "BG Light Cyan" << termstylist::BG_Default << " ";
    
    std::cout << '\n' << '\n';

    //background colours (16 colours)
    std::cout << termstylist::BG_BoldBlack << "BG Bold Black" << termstylist::RESET_All << " ";
    std::cout << termstylist::BG_BoldRed << "BG Bold Red" << termstylist::RESET_All << " ";
    std::cout << termstylist::BG_BoldGreen << "BG Bold Green" << termstylist::RESET_All << " ";
    std::cout << termstylist::BG_BoldYellow << "BG Bold Yellow" << termstylist::RESET_All << " ";
    std::cout << termstylist::BG_BoldBlue << "BG Bold Blue" << termstylist::RESET_All << '\n';
    std::cout << termstylist::BG_BoldMagenta << "BG Bold Magenta" << termstylist::RESET_All << " ";
    std::cout << termstylist::BG_BoldCyan << "BG Bold Cyan" << termstylist::RESET_All << " ";
    std::cout << termstylist::BG_BoldWhite << "BG Bold White" << termstylist::RESET_All << " ";
    std::cout << termstylist::BG_BoldLightGrey << "BG Bold Light Grey" << termstylist::RESET_All << " ";
    std::cout << termstylist::BG_BoldDarkGrey << "BG Bold Dark Grey" << termstylist::RESET_All << '\n';
    std::cout << termstylist::BG_BoldLightRed << "BG Bold Light Red" << termstylist::RESET_All << " ";
    std::cout << termstylist::BG_BoldLightGreen << "BG Bold Light Green" << termstylist::RESET_All << " ";
    std::cout << termstylist::BG_BoldLightYellow << "BG Bold Light Yellow" << termstylist::RESET_All << " ";
    std::cout << termstylist::BG_BoldLightBlue << "BG Bold Light Blue" << termstylist::RESET_All << '\n';
    std::cout << termstylist::BG_BoldLightMagenta << "BG Bold Light Magenta" << termstylist::RESET_All << " ";
    std::cout << termstylist::BG_BoldLightCyan << "BG Bold Light Cyan" << termstylist::RESET_All << " ";

    std::cout << '\n' << '\n';

    return 0;
}
