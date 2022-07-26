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

    //foreground colours (256 colours)
    std::cout << termstylist::FG256_0 << "0" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_1 << "1" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_2 << "2" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_3 << "3" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_4 << "4" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_5 << "5" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_6 << "6" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_7 << "7" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_8 << "8" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_9 << "9" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_10 << "10" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_11 << "11" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_12 << "12" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_13 << "13" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_14 << "14" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_15 << "15" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_16 << "16" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_17 << "17" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_18 << "18" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_19 << "19" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_20 << "20" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_21 << "21" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_22 << "22" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_23 << "23" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_24 << "24" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_25 << "25" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_26 << "26" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_27 << "27" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_28 << "28" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_29 << "29" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_30 << "30" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_31 << "31" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_32 << "32" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_33 << "33" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_34 << "34" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_35 << "35" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_36 << "36" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_37 << "37" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_38 << "38" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_39 << "39" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_40 << "40" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_41 << "41" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_42 << "42" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_43 << "43" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_44 << "44" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_45 << "45" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_46 << "46" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_47 << "47" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_48 << "48" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_49 << "49" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_50 << "50" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_51 << "51" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_52 << "52" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_53 << "53" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_54 << "54" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_55 << "55" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_56 << "56" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_57 << "57" << termstylist::FG_Default << " "; 
    std::cout << termstylist::FG256_58 << "58" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_59 << "59" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_60 << "60" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_61 << "61" << termstylist::FG_Default << " "; 
    std::cout << termstylist::FG256_62 << "62" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_63 << "63" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_64 << "64" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_65 << "65" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_66 << "66" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_67 << "67" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_68 << "68" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_69 << "69" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_70 << "70" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_71 << "71" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_72 << "72" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_73 << "73" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_74 << "74" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_75 << "75" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_76 << "76" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_77 << "77" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_78 << "78" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_79 << "79" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_80 << "80" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_81 << "81" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_82 << "82" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_83 << "83" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_84 << "84" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_85 << "85" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_86 << "86" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_87 << "87" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_88 << "88" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_89 << "89" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_90 << "90" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_91 << "91" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_92 << "92" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_93 << "93" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_94 << "94" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_95 << "95" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_96 << "96" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_97 << "97" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_98 << "98" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_99 << "99" << termstylist::FG_Default << " ";
    std::cout << termstylist::FG256_100 << "100" << termstylist::FG_Default << " ";
    
    std::cout << '\n' << '\n';
    return 0;
}
