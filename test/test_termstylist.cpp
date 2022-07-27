#include "../include/termstylist.h"
#include <iostream>
#include <sstream>
#include <string>

class Test_Attributes {
    public:
        //title: attr tests
        void TEST_ATTR_TITLE() {
            std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTR_Underline << "TEST ATTRIBUTES" << termstylist::RESET_Underline << termstylist::RESET_Default << '\n';
        }

        //test: attr bold
        void TEST_BOLD() {
            std::ostringstream ATTR_BOLD;

            ATTR_BOLD << termstylist::ATTR_Bold;

            std::cout << termstylist::FG256_223 << "termstylist::ATTR_Bold " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[1m " << termstylist::FG_Default <<  "==== ";
            
            if(ATTR_BOLD.str() == "\033[1m") {
               std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: attr underline
        void TEST_UNDERLINE() {
            std::ostringstream ATTR_UNDERLINE;

            ATTR_UNDERLINE << termstylist::ATTR_Underline;

            std::cout << termstylist::FG256_223 << "termstylist::ATTR_Underline " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[4m " << termstylist::FG_Default << "==== ";

            if(ATTR_UNDERLINE.str() == "\033[4m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: attr reverse
        void TEST_REVERSE() {
            std::ostringstream ATTR_REVERSE;

            ATTR_REVERSE << termstylist::ATTR_Reverse;

            std::cout << termstylist::FG256_223 << "termstylist::ATTR_Reverse " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[7m " << termstylist::FG_Default << "==== ";

            if(ATTR_REVERSE.str() == "\033[7m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else { 
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }
};

class Test_Reset {
    public:
        //title reset tests
        void TEST_RESET_TITLE() {
            std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTR_Underline << "TEST RESET" << termstylist::RESET_Underline << termstylist::RESET_Default << '\n';
        }

        //test: reset default
        void TEST_RESET_DEFAULT() {
            std::ostringstream RESET_DEFAULT;

            RESET_DEFAULT << termstylist::RESET_Default;

            std::cout << termstylist::FG256_223 << "termstylist::RESET_Default " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[0m " << termstylist::FG_Default << "==== ";

            if(RESET_DEFAULT.str() == "\033[0m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: reset bold
        void TEST_RESET_BOLD() {
            std::ostringstream RESET_BOLD;

            RESET_BOLD << termstylist::RESET_Bold;

            std::cout << termstylist::FG256_223 << "termstylist::RESET_Bold " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[21m " << termstylist::FG_Default << "==== ";

            if(RESET_BOLD.str() == "\033[21m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: reset underline
        void TEST_RESET_UNDERLINE() {
            std::ostringstream RESET_UNDERLINE;

            RESET_UNDERLINE << termstylist::RESET_Underline;

            std::cout << termstylist::FG256_223 << "termstylist::RESET_Underline " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[24m " << termstylist::FG_Default << "==== ";

            if(RESET_UNDERLINE.str() == "\033[24m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: reset reverse
        void TEST_RESET_REVERSE() {
            std::ostringstream RESET_REVERSE;

            RESET_REVERSE << termstylist::RESET_Reverse;

            std::cout << termstylist::FG256_223 << "termstylist::RESET_Reverse " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[27m " << termstylist::FG_Default << "==== ";

            if(RESET_REVERSE.str() == "\033[27m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << '\n';
            }
        }
};

int main() {
    Test_Attributes TA;

    TA.TEST_ATTR_TITLE();
    TA.TEST_BOLD();
    TA.TEST_UNDERLINE();
    TA.TEST_REVERSE();

    Test_Reset TR;

    TR.TEST_RESET_TITLE();
    TR.TEST_RESET_DEFAULT();
    TR.TEST_RESET_BOLD();
    TR.TEST_RESET_UNDERLINE();
    TR.TEST_RESET_REVERSE();

    return 0;
}

