#ifndef TEST_TERMSTYLIST_H
#define TEST_TERMSTYLIST_H

#include "../include/termstylist.h"
#include <ostream>
#include <string>

class ShouldEqual {
    protected:
        std::string shouldEqual = "~ SHOULD EQUAL ~ ";
};

//class test attributes 
class Test_Attributes : protected ShouldEqual {
    public:
        void TEST_ATTRS_TITLE();
        void TEST_ATTRS_BOLD();
        void TEST_ATTRS_DIM();
        void TEST_ATTRS_UNDERLINE();
        void TEST_ATTRS_REVERSE();
};

//class test reset
class Test_Reset : protected ShouldEqual {
    public:
        void TEST_RESET_TITLE();
        void TEST_RESET_DEFAULT();
        void TEST_RESET_BOLD();
        void TEST_RESET_UNDERLINE();
        void TEST_RESET_REVERSE();
};

//class test fg colours 8/16
class Test_FGColours816 : protected ShouldEqual {
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
class Test_BGColours816 : protected ShouldEqual {
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
class Test_FGColours256 : protected ShouldEqual {
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
};

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
#endif