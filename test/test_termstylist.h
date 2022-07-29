#ifndef TEST_TERMSTYLIST_H
#define TEST_TERMSTYLIST_H

#include "../include/termstylist.h"
#include <ostream>
#include <string>

namespace {
    template<typename SUCCESS> 
    std::basic_ostream<SUCCESS> & TEST_SUCCESS(std::basic_ostream<SUCCESS> &out) {
        out << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';

        return out;
    }

    template<typename FAILURE>
    std::basic_ostream<FAILURE> & TEST_FAILURE(std::basic_ostream<FAILURE> &out) {
        out << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';

        return out;
    }
}

//class misc 
class Misc {
    protected:
        std::string shouldEqual = "~ SHOULD EQUAL ~ ";
        std::string endBreak = "==== ";
};

//class test attributes 
class Test_Attributes : protected Misc {
    public:
        void TEST_ATTRS_TITLE();
        void TEST_ATTRS_BOLD();
        void TEST_ATTRS_DIM();
        void TEST_ATTRS_UNDERLINE();
        void TEST_ATTRS_REVERSE();
};

//class test reset
class Test_Reset : protected Misc {
    public:
        void TEST_RESET_TITLE();
        void TEST_RESET_DEFAULT();
        void TEST_RESET_BOLD();
        void TEST_RESET_UNDERLINE();
        void TEST_RESET_REVERSE();
};

//class test fg colours 8/16
class Test_FGColours816 : protected Misc {
    public:
        void TEST_FGCOLOURS816_TITLE();
        void TEST_FG_DEFAULT();
        void TEST_FG_BLACK();
        void TEST_FG_RED();
        void TEST_FG_GREEN();
        void TEST_FG_YELLOW();
        void TEST_FG_BLUE();
        void TEST_FG_MAGENTA();
        void TEST_FG_CYAN();
        void TEST_FG_WHITE();
        void TEST_FG_LIGHTGREY();
        void TEST_FG_DARKGREY();
        void TEST_FG_LIGHTRED();
        void TEST_FG_LIGHTGREEN();
        void TEST_FG_LIGHTYELLOW();
        void TEST_FG_LIGHTBLUE();
        void TEST_FG_LIGHTMAGENTA();
        void TEST_FG_LIGHTCYAN();
        void TEST_FG_BOLDBLACK();
        void TEST_FG_BOLDRED();
        void TEST_FG_BOLDGREEN();
        void TEST_FG_BOLDYELLOW();
        void TEST_FG_BOLDBLUE();
        void TEST_FG_BOLDMAGENTA();
        void TEST_FG_BOLDCYAN();
        void TEST_FG_BOLDWHITE();
        void TEST_FG_BOLDLIGHTGREY();
        void TEST_FG_BOLDDARKGREY();
        void TEST_FG_BOLDLIGHTRED();
        void TEST_FG_BOLDLIGHTGREEN();
        void TEST_FG_BOLDLIGHTYELLOW();
        void TEST_FG_BOLDLIGHTBLUE();
        void TEST_FG_BOLDLIGHTMAGENTA();
        void TEST_FG_BOLDLIGHTCYAN();
};

//class test bg colours 8/16
class Test_BGColours816 : protected Misc {
    public:
        void TEST_BGCOLOURS_816_TITLE();
        void TEST_BG_DEFAULT();
        void TEST_BG_BLACK();
        void TEST_BG_RED();
        void TEST_BG_GREEN();
        void TEST_BG_YELLOW();
        void TEST_BG_BLUE();
        void TEST_BG_MAGENTA();
        void TEST_BG_CYAN();
        void TEST_BG_WHITE();
        void TEST_BG_LIGHTGREY();
        void TEST_BG_DARKGREY();
        void TEST_BG_LIGHTRED();
        void TEST_BG_LIGHTGREEN();
        void TEST_BG_LIGHTYELLOW();
        void TEST_BG_LIGHTBLUE();
        void TEST_BG_LIGHTMAGENTA();
        void TEST_BG_LIGHTCYAN();
        void TEST_BG_BOLDBLACK();
        void TEST_BG_BOLDRED();
        void TEST_BG_BOLDGREEN();
        void TEST_BG_BOLDYELLOW();
        void TEST_BG_BOLDBLUE();
        void TEST_BG_BOLDMAGENTA();
        void TEST_BG_BOLDCYAN();
        void TEST_BG_BOLDWHITE();
        void TEST_BG_BOLDDARKGREY();
        void TEST_BG_BOLDLIGHTRED();
        void TEST_BG_BOLDLIGHTGREEN();
        void TEST_BG_BOLDLIGHTYELLOW();
        void TEST_BG_BOLDLIGHTBLUE();
        void TEST_BG_BOLDLIGHTMAGENTA();
        void TEST_BG_BOLDLIGHTCYAN();
};

//class test fg colours 256
class Test_FGColours256 : protected Misc {
    public:
        void TEST_FGCOLOURS256_TITLE();
        void TEST_FG256_0();
        void TEST_FG256_1();
        void TEST_FG256_2();
        void TEST_FG256_3();
        void TEST_FG256_4();
        void TEST_FG256_5();
        void TEST_FG256_6();
        void TEST_FG256_7();
        void TEST_FG256_8();
        void TEST_FG256_9();
        void TEST_FG256_10();
        void TEST_FG256_11();
        void TEST_FG256_12();
        void TEST_FG256_13();
        void TEST_FG256_14();
        void TEST_FG256_15();
        void TEST_FG256_16();
        void TEST_FG256_17();
        void TEST_FG256_18();
        void TEST_FG256_19();
        void TEST_FG256_20();
        void TEST_FG256_21();
        void TEST_FG256_22();
        void TEST_FG256_23();
        void TEST_FG256_24();
        void TEST_FG256_25();
        void TEST_FG256_26();
        void TEST_FG256_27();
        void TEST_FG256_28();
        void TEST_FG256_29();
        void TEST_FG256_30();
        void TEST_FG256_31();
        void TEST_FG256_32();
        void TEST_FG256_33();
        void TEST_FG256_34();
        void TEST_FG256_35();
        void TEST_FG256_36();
        void TEST_FG256_37();
        void TEST_FG256_38();
        void TEST_FG256_39();
        void TEST_FG256_40();
        void TEST_FG256_41();
        void TEST_FG256_42();
        void TEST_FG256_43();
        void TEST_FG256_44();
        void TEST_FG256_45();
        void TEST_FG256_46();
        void TEST_FG256_47();
        void TEST_FG256_48();
        void TEST_FG256_49();
        void TEST_FG256_50();
        void TEST_FG256_51();
        void TEST_FG256_52();
        void TEST_FG256_53();
        void TEST_FG256_54();
        void TEST_FG256_55();
        void TEST_FG256_56();
        void TEST_FG256_57();
        void TEST_FG256_58();
        void TEST_FG256_59();
        void TEST_FG256_60();
        void TEST_FG256_61();
        void TEST_FG256_62();
        void TEST_FG256_63();
        void TEST_FG256_64();
        void TEST_FG256_65();
        void TEST_FG256_66();
        void TEST_FG256_67();
        void TEST_FG256_68();
        void TEST_FG256_69();
        void TEST_FG256_70();
        void TEST_FG256_71();
        void TEST_FG256_72();
        void TEST_FG256_73();
        void TEST_FG256_74();
        void TEST_FG256_75();
        void TEST_FG256_76();
        void TEST_FG256_77();
        void TEST_FG256_78();
        void TEST_FG256_79();
        void TEST_FG256_80();
        void TEST_FG256_81();
        void TEST_FG256_82();
        void TEST_FG256_83();
        void TEST_FG256_84();
        void TEST_FG256_85();
        void TEST_FG256_86();
        void TEST_FG256_87();
        void TEST_FG256_88();
        void TEST_FG256_89();
        void TEST_FG256_90();
        void TEST_FG256_91();
        void TEST_FG256_92();
        void TEST_FG256_93();
        void TEST_FG256_94();
        void TEST_FG256_95();
        void TEST_FG256_96();
        void TEST_FG256_97();
        void TEST_FG256_98();
        void TEST_FG256_99();
        void TEST_FG256_100();
        void TEST_FG256_101();
        void TEST_FG256_102();
        void TEST_FG256_103();
        void TEST_FG256_104();
        void TEST_FG256_105();
        void TEST_FG256_106();
        void TEST_FG256_107();
        void TEST_FG256_108();
        void TEST_FG256_109();
        void TEST_FG256_110();
        void TEST_FG256_111();
        void TEST_FG256_112();
        void TEST_FG256_113();
        void TEST_FG256_114();
        void TEST_FG256_115();
        void TEST_FG256_116();
        void TEST_FG256_117();
        void TEST_FG256_118();
        void TEST_FG256_119();
        void TEST_FG256_120();
        void TEST_FG256_121();
        void TEST_FG256_122();
        void TEST_FG256_123();
        void TEST_FG256_124();
        void TEST_FG256_125();
        void TEST_FG256_126();
        void TEST_FG256_127();
        void TEST_FG256_128();
        void TEST_FG256_129();
        void TEST_FG256_130();
        void TEST_FG256_131();
        void TEST_FG256_132();
        void TEST_FG256_133();
        void TEST_FG256_134();
        void TEST_FG256_135();
        void TEST_FG256_136();
        void TEST_FG256_137();
        void TEST_FG256_138();
        void TEST_FG256_139();
        void TEST_FG256_140();
        void TEST_FG256_141();
        void TEST_FG256_142();
        void TEST_FG256_143();
        void TEST_FG256_144();
        void TEST_FG256_145();
        void TEST_FG256_146();
        void TEST_FG256_147();
        void TEST_FG256_148();
        void TEST_FG256_149();
        void TEST_FG256_150();
        void TEST_FG256_151();
        void TEST_FG256_152();
        void TEST_FG256_153();
        void TEST_FG256_154();
        void TEST_FG256_155();
        void TEST_FG256_156();
        void TEST_FG256_157();
        void TEST_FG256_158();
        void TEST_FG256_159();
        void TEST_FG256_160();
};
#endif