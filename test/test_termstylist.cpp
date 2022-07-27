#include "../include/termstylist.h"
#include <iostream>
#include <sstream>
#include <string>

class Test_Attributes {
    public:
        //title: attr tests
        void TEST_ATTR_TITLE() {
            std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTR_Underline << "TEST ATTRIBUTES" << termstylist::RESET_Underline << termstylist::FG_Default << '\n';
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
        //title: reset tests
        void TEST_RESET_TITLE() {
            std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTR_Underline << "TEST RESET" << termstylist::RESET_Underline << termstylist::FG_Default << '\n';
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

class Test_FG_Colours816 {
    public:
        //title: fg colours 816 tests
        void TEST_FG_COLOURS816_TITLE() {
            std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTR_Underline << "TEST FG COLOURS 8/16" << termstylist::RESET_Underline << termstylist::FG_Default << '\n';
        }

        //test: fg default
        void TEST_FG_DEFAULT() {
            std::ostringstream FG_DEFAULT;

            FG_DEFAULT << termstylist::FG_Default;

            std::cout << termstylist::FG256_223 << "termstylist::FG_Default " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[39m " << termstylist::FG_Default << "==== "; 

            if(FG_DEFAULT.str() == "\033[39m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }
        
        //test: fg black
        void TEST_FG_BLACK() {
            std::ostringstream FG_BLACK;

            FG_BLACK << termstylist::FG_Black;

            std::cout << termstylist::FG256_223 << "termstylist::FG_Black " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[30m " << termstylist::FG_Default << "==== ";

            if(FG_BLACK.str() == "\033[30m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg red
        void TEST_FG_RED() {
            std::ostringstream FG_RED;

            FG_RED << termstylist::FG_Red;

            std::cout << termstylist::FG256_223 << "termstylist::FG_Red " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[31m " << termstylist::FG_Default << "==== ";

            if(FG_RED.str() == "\033[31m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg green
        void TEST_FG_GREEN() {
            std::ostringstream FG_GREEN;

            FG_GREEN << termstylist::FG_Green;

            std::cout << termstylist::FG256_223 << "termstylist::FG_Green " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[32m " << termstylist::FG_Default << "==== "; 

            if(FG_GREEN.str() == "\033[32m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cout << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }
};

int main() {
    Test_Attributes T_ATTR;

    T_ATTR.TEST_ATTR_TITLE();
    T_ATTR.TEST_BOLD();
    T_ATTR.TEST_UNDERLINE();
    T_ATTR.TEST_REVERSE();

    Test_Reset T_RESET;

    T_RESET.TEST_RESET_TITLE();
    T_RESET.TEST_RESET_DEFAULT();
    T_RESET.TEST_RESET_BOLD();
    T_RESET.TEST_RESET_UNDERLINE();
    T_RESET.TEST_RESET_REVERSE();

    Test_FG_Colours816 T_FGC_816;

    T_FGC_816.TEST_FG_COLOURS816_TITLE();
    T_FGC_816.TEST_FG_DEFAULT();
    T_FGC_816.TEST_FG_BLACK();
    T_FGC_816.TEST_FG_RED();
    T_FGC_816.TEST_FG_GREEN();

    return 0;
}

