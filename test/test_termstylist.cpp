#include "../include/termstylist.h"
#include <iostream>
#include <sstream>
#include <string>

//class test attributes 
class Test_Attributes {
    public:
        //title: attr tests
        void TEST_ATTR_TITLE() {
            std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTR_Underline << "TEST ATTRIBUTES" << termstylist::FG_Default << termstylist::RESET_Underline << '\n';
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

//class test reset
class Test_Reset {
    public:
        //title: reset tests
        void TEST_RESET_TITLE() {
            std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTR_Underline << "TEST RESET" <<  termstylist::FG_Default << termstylist::RESET_Underline << '\n';
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

//class test fg colours 8/16
class Test_FG_Colours816 {
    public:
        //title: fg colours 816 tests
        void TEST_FG_COLOURS816_TITLE() {
            std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTR_Underline << "TEST FG COLOURS 8/16" << termstylist::FG_Default << termstylist::RESET_Underline <<'\n';
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

        //test: fg yellow
        void TEST_FG_YELLOW() {
            std::ostringstream FG_YELLOW;

            FG_YELLOW << termstylist::FG_Yellow;

            std::cout << termstylist::FG256_223 << "termstylist::FG_Yellow " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[33m " << termstylist::FG_Default << "==== ";

            if(FG_YELLOW.str() == "\033[33m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg blue
        void TEST_FG_BLUE() {
            std::ostringstream FG_BLUE;

            FG_BLUE << termstylist::FG_Blue;

            std::cout << termstylist::FG256_223 << "termstylist::FG_Blue " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[34m " << termstylist::FG_Default << "==== ";

            if(FG_BLUE.str() == "\033[34m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg magenta
        void TEST_FG_MAGENTA() {
            std::ostringstream FG_MAGENTA;

            FG_MAGENTA << termstylist::FG_Magenta;

            std::cout << termstylist::FG256_223 << "termstylist::FG_Magenta " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[35m " << termstylist::FG_Default << "==== ";

            if(FG_MAGENTA.str() == "\033[35m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg cyan
        void TEST_FG_CYAN() {
            std::ostringstream FG_CYAN;

            FG_CYAN << termstylist::FG_Cyan;

            std::cout << termstylist::FG256_223 << "termstylist::FG_Cyan " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[36m " << termstylist::FG_Default << "==== ";

            if(FG_CYAN.str() == "\033[36m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg white
        void TEST_FG_WHITE() {
            std::ostringstream FG_WHITE;

            FG_WHITE << termstylist::FG_White;

            std::cout << termstylist::FG256_223 << "termstylist::FG_White " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[97m " << termstylist::FG_Default << "==== ";

            if(FG_WHITE.str() == "\033[97m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg light grey
        void TEST_FG_LIGHTGREY() {
            std::ostringstream FG_LIGHTGREY;

            FG_LIGHTGREY << termstylist::FG_LightGrey;

            std::cout << termstylist::FG256_223 << "termstylist::FG_LightGrey " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[37m " << termstylist::FG_Default << "==== ";

            if(FG_LIGHTGREY.str() == "\033[37m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg dark grey
        void TEST_FG_DARKGREY() {
            std::ostringstream FG_DARKGREY;

            FG_DARKGREY << termstylist::FG_DarkGrey;

            std::cout << termstylist::FG256_223 << "termstylist::FG_DarkGrey " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[90m " << termstylist::FG_Default << "==== ";

            if(FG_DARKGREY.str() == "\033[90m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }
        
        //test: fg light red
        void TEST_FG_LIGHTRED() {
            std::ostringstream FG_LIGHTRED;

            FG_LIGHTRED << termstylist::FG_LightRed;

            std::cout << termstylist::FG256_223 << "termstylist::FG_LightRed " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[91m " << termstylist::FG_Default << "==== ";

            if(FG_LIGHTRED.str() == "\033[91m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg light green
        void TEST_FG_LIGHTGREEN() {
            std::ostringstream FG_LIGHTGREEN;

            FG_LIGHTGREEN << termstylist::FG_LightGreen;

            std::cout << termstylist::FG256_223 << "termstylist::FG_LightGreen " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[92m " << termstylist::FG_Default << "==== ";

            if(FG_LIGHTGREEN.str() == "\033[92m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg light yellow
        void TEST_FG_LIGHTYELLOW() {
            std::ostringstream FG_LIGHTYELLOW;

            FG_LIGHTYELLOW << termstylist::FG_LightYellow;

            std::cout << termstylist::FG256_223 << "termstylist::FG_LightYellow " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[93m " << termstylist::FG_Default << "==== ";

            if(FG_LIGHTYELLOW.str() == "\033[93m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg light blue
        void TEST_FG_LIGHTBLUE() {
            std::ostringstream FG_LIGHTBLUE;

            FG_LIGHTBLUE << termstylist::FG_LightBlue;

            std::cout << termstylist::FG256_223 << "termstylist::FG_LightBlue " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[94m " << termstylist::FG_Default << "==== ";

            if(FG_LIGHTBLUE.str() == "\033[94m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg light magenta
        void TEST_FG_LIGHTMAGENTA() {
            std::ostringstream FG_LIGHTMAGENTA;

            FG_LIGHTMAGENTA << termstylist::FG_LightMagenta;

            std::cout << termstylist::FG256_223 << "termstylist::FG_LightMagenta " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[95m " << termstylist::FG_Default << "==== ";

            if(FG_LIGHTMAGENTA.str() == "\033[95m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg light cyan
        void TEST_FG_LIGHTCYAN() {
            std::ostringstream FG_LIGHTCYAN;

            FG_LIGHTCYAN << termstylist::FG_LightCyan;

            std::cout << termstylist::FG256_223 << "termstylist::FG_LightCyan " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[96m " << termstylist::FG_Default << "==== ";

            if(FG_LIGHTCYAN.str() == "\033[96m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold black
        void TEST_FG_BOLDBLACK() {
            std::ostringstream FG_BOLDBLACK;

            FG_BOLDBLACK << termstylist::FG_BoldBlack;

            std::cout << '\n' << termstylist::FG256_223 << "termstylist::FG_BoldBlack " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[30;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDBLACK.str() == "\033[30;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold red
        void TEST_FG_BOLDRED() {
            std::ostringstream FG_BOLDRED;

            FG_BOLDRED << termstylist::FG_BoldRed;

            std::cout << termstylist::FG256_223 << "termstylist::FG_BoldRed " << termstylist::FG_Default <<  "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[31;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDRED.str() == "\033[31;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';    
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold green
        void TEST_FG_BOLDGREEN() {
            std::ostringstream FG_BOLDGREEN;

            FG_BOLDGREEN << termstylist::FG_BoldGreen;

            std::cout << termstylist::FG256_223 << "termstylist::FG_BoldGreen " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[32;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDGREEN.str() == "\033[32;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        } 

        //test: fg bold yellow
        void TEST_FG_BOLDYELLOW() {
            std::ostringstream FG_BOLDYELLOW;

            FG_BOLDYELLOW << termstylist::FG_BoldYellow;

            std::cout << termstylist::FG256_223 << "termstylist::FG_BoldYellow " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[33;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDYELLOW.str() == "\033[33;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold blue
        void TEST_FG_BOLDBLUE() {
            std::ostringstream FG_BOLDBLUE;

            FG_BOLDBLUE << termstylist::FG_BoldBlue;

            std::cout << termstylist::FG256_223 << "termstylist::FG_BoldBlue " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[34;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDBLUE.str() == "\033[34;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold magenta 
        void TEST_FG_BOLDMAGENTA() {
            std::ostringstream FG_BOLDMAGENTA;

            FG_BOLDMAGENTA << termstylist::FG_BoldMagenta;

            std::cout << termstylist::FG256_223 << "termstylist::FG_BoldMagenta " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[35;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDMAGENTA.str() == "\033[35;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold cyan
        void TEST_FG_BOLDCYAN() {
            std::ostringstream FG_BOLDCYAN;

            FG_BOLDCYAN << termstylist::FG_BoldCyan;

            std::cout << termstylist::FG256_223 << "termstylist::FG_BoldCyan " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[36;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDCYAN.str() == "\033[36;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold white
        void TEST_FG_BOLDWHITE() {
            std::ostringstream FG_BOLDWHITE;

            FG_BOLDWHITE << termstylist::FG_BoldWhite;

            std::cout << termstylist::FG256_223 << "termstylist::FG_BoldWhite " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[97;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDWHITE.str() == "\033[97;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold light grey
        void TEST_FG_BOLDLIGHTGREY() {
            std::ostringstream FG_BOLDLIGHTGREY;

            FG_BOLDLIGHTGREY << termstylist::FG_BoldLightGrey;

            std::cout << termstylist::FG256_223 << "termstylist::FG_BoldLightGrey " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[37;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDLIGHTGREY.str() == "\033[37;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold dark grey
        void TEST_FG_BOLDDARKGREY() {
            std::ostringstream FG_BOLDDARKGREY;

            FG_BOLDDARKGREY << termstylist::FG_BoldDarkGrey;

            std::cout << termstylist::FG256_223 << "termstylist::FG_BoldDarkGrey " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[90;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDDARKGREY.str() == "\033[90;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold light red 
        void TEST_FG_BOLDLIGHTRED() {
            std::ostringstream FG_BOLDLIGHTRED;

            FG_BOLDLIGHTRED << termstylist::FG_BoldLightRed;

            std::cout << termstylist::FG256_223 << "termstylist::FG_BoldLightRed " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[91;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDLIGHTRED.str() == "\033[91;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold light green
        void TEST_FG_BOLDLIGHTGREEN() {
            std::ostringstream FG_BOLDLIGHTGREEN;

            FG_BOLDLIGHTGREEN << termstylist::FG_BoldLightGreen;

            std::cout << termstylist::FG256_223 << "termstylist::FG_boldLightGreen " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[92;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDLIGHTGREEN.str() == "\033[92;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold light yellow
        void TEST_FG_BOLDLIGHTYELLOW() {
            std::ostringstream FG_BOLDLIGHTYELLOW;

            FG_BOLDLIGHTYELLOW << termstylist::FG_BoldLightYellow;

            std::cout << termstylist::FG256_223 << "termstylist::FG_BoldLightYellow " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[93;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDLIGHTYELLOW.str() == "\033[93;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold light blue
        void TEST_FG_BOLDLIGHTBLUE() {
            std::ostringstream FG_BOLDLIGHTBLUE;

            FG_BOLDLIGHTBLUE << termstylist::FG_BoldLightBlue;

            std::cout << termstylist::FG256_223 << "termstylist::FG_BoldLightBlue " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[94;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDLIGHTBLUE.str() == "\033[94;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold light magenta
        void TEST_FG_BOLDLIGHTMAGENTA() {
            std::ostringstream FG_BOLDLIGHTMAGENTA;

            FG_BOLDLIGHTMAGENTA << termstylist::FG_BoldLightMagenta;

            std::cout << termstylist::FG256_223 << "termstlist::FG_BoldLightMagenta " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[95;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDLIGHTMAGENTA.str() == "\033[95;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: fg bold light cyan
        void TEST_FG_BOLDLIGHTCYAN() {
            std::ostringstream FG_BOLDLIGHTCYAN;

            FG_BOLDLIGHTCYAN << termstylist::FG_BoldLightCyan;

            std::cout << termstylist::FG256_223 << "termstylist::FG_BoldLightCyan " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[96;1m " << termstylist::FG_Default << "==== ";

            if(FG_BOLDLIGHTCYAN.str() == "\033[96;1m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }
};

//class test bg colours 8/16
class Test_BG_Colours_816 {
    public:
        //title: bg colours 816 tests
        void TEST_BGCOLOURS_816_TITLE() {
            std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTR_Underline << "TEST BG COLOURS 8/16" << termstylist::FG_Default << termstylist::RESET_Underline << '\n';
        }

        //test: bg default
        void TEST_BG_DEFAULT() {
            std::ostringstream BG_DEFAULT;

            BG_DEFAULT << termstylist::BG_Default;

            std::cout << termstylist::FG256_223 << "termstylist::BG_Default " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[49m " << termstylist::FG_Default << "==== ";

            if(BG_DEFAULT.str() == "\033[49m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg black
        void TEST_BG_BLACK() {
            std::ostringstream BG_BLACK;

            BG_BLACK << termstylist::BG_Black;

            std::cout << termstylist::FG256_223 << "termstylist::BG_Black " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[40m " << termstylist::FG_Default << "==== ";

            if(BG_BLACK.str() == "\033[40m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg red 
        void TEST_BG_RED() {
            std::ostringstream BG_RED;

            BG_RED << termstylist::BG_Red;

            std::cout << termstylist::FG256_223 << "termstylist::BG_Red " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[41m " << termstylist::FG_Default << "==== ";

            if(BG_RED.str() == "\033[41m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }
        
        //test: bg green
        void TEST_BG_GREEN() {
            std::ostringstream BG_GREEN;

            BG_GREEN << termstylist::BG_Green;

            std::cout << termstylist::FG256_223 << "termstylist::BG_Green " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[42m " << termstylist::FG_Default << "==== ";

            if(BG_GREEN.str() == "\033[42m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg yellow
        void TEST_BG_YELLOW() {
            std::ostringstream BG_YELLOW;

            BG_YELLOW << termstylist::BG_Yellow;

            std::cout << termstylist::FG256_223 << "termstylist::BG_Yellow " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[43m " << termstylist::FG_Default << "==== ";

            if(BG_YELLOW.str() == "\033[43m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg blue
        void TEST_BG_BLUE() {
            std::ostringstream BG_BLUE;

            BG_BLUE << termstylist::BG_Blue;

            std::cout << termstylist::FG256_223 << "termstylist::BG_Blue " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[44m " << termstylist::FG_Default << "==== ";

            if(BG_BLUE.str() == "\033[44m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg magenta
        void TEST_BG_MAGENTA() {
            std::ostringstream BG_MAGENTA;

            BG_MAGENTA << termstylist::BG_Magenta;

            std::cout << termstylist::FG256_223 << "termstylist::BG_Magenta " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[45m " << termstylist::FG_Default << "==== ";

            if(BG_MAGENTA.str() == "\033[45m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg cyan
        void TEST_BG_CYAN() {
            std::ostringstream BG_CYAN;

            BG_CYAN << termstylist::BG_Cyan;

            std::cout << termstylist::FG256_223 << "termstylist::BG_Cyan " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[46m " << termstylist::FG_Default << "==== ";

            if(BG_CYAN.str() == "\033[46m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg white
        void TEST_BG_WHITE() {
            std::ostringstream BG_WHITE;

            BG_WHITE << termstylist::BG_White;

            std::cout << termstylist::FG256_223 << "termstylist::BG_White " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[107m " << termstylist::FG_Default << "==== ";

            if(BG_WHITE.str() == "\033[107m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg light grey 
        void TEST_BG_LIGHTGREY() {
            std::ostringstream BG_LIGHTGREY;

            BG_LIGHTGREY << termstylist::BG_LightGrey;

            std::cout << termstylist::FG256_223 << "termstylist::BG_LightGrey " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[47m " << termstylist::FG_Default << "==== ";

            if(BG_LIGHTGREY.str() == "\033[47m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg dark grey
        void TEST_BG_DARKGREY() {
            std::ostringstream BG_DARKGREY;

            BG_DARKGREY << termstylist::BG_DarkGrey;

            std::cout << termstylist::FG256_223 << "termstylist::BG_DarkGrey " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[100m " << termstylist::FG_Default << "==== ";

            if(BG_DARKGREY.str() == "\033[100m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg light red
        void TEST_BG_LIGHTRED() {
            std::ostringstream BG_LIGHTRED;

            BG_LIGHTRED << termstylist::BG_LightRed;

            std::cout << termstylist::FG256_223 << "termstylist::BG_LightRed " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[101m " << termstylist::FG_Default << "==== ";

            if(BG_LIGHTRED.str() == "\033[101m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg light green
        void TEST_BG_LIGHTGREEN() {
            std::ostringstream BG_LIGHTGREEN;

            BG_LIGHTGREEN << termstylist::BG_LightGreen;

            std::cout << termstylist::FG256_223 << "termstylist::BG_LightGreen " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[102m " << termstylist::FG_Default << "==== ";

            if(BG_LIGHTGREEN.str() == "\033[102m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg light yellow
        void TEST_BG_LIGHTYELLOW() {
            std::ostringstream BG_LIGHTYELLOW;

            BG_LIGHTYELLOW << termstylist::BG_LightYellow;

            std::cout << termstylist::FG256_223 << "termstylist::BG_LightYellow " << termstylist::FG_Default << "~ SHOULD BE ~ " << termstylist::FG256_223 << "\\033[103m " << termstylist::FG_Default << "==== ";

            if(BG_LIGHTYELLOW.str() == "\033[103m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg light blue
        void TEST_BG_LIGHTBLUE() {
            std::ostringstream BG_LIGHTBLUE;

            BG_LIGHTBLUE << termstylist::BG_LightBlue;

            std::cout << termstylist::FG256_223 << "termstylist::BG_LightBlue " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[104m " << termstylist::FG_Default << "==== ";

            if(BG_LIGHTBLUE.str() == "\033[104m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg light magenta
        void TEST_BG_LIGHTMAGENTA() {
            std::ostringstream BG_LIGHTMAGENTA;

            BG_LIGHTMAGENTA << termstylist::BG_LightMagenta;

            std::cout << termstylist::FG256_223 << "termstylist::BG_LightMagenta " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[105m " << termstylist::FG_Default << "==== ";

            if(BG_LIGHTMAGENTA.str() == "\033[105m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
            }
        }

        //test: bg light cyan
        void TEST_BG_LIGHTCYAN() {
            std::ostringstream BG_LIGHTCYAN;

            BG_LIGHTCYAN << termstylist::BG_LightCyan;

            std::cout << termstylist::FG256_223 << "termstylist::BG_LightCyan " << termstylist::FG_Default << "~ SHOULD EQUAL ~ " << termstylist::FG256_223 << "\\033[106m " << termstylist::FG_Default << "==== ";

            if(BG_LIGHTCYAN.str() == "\033[106m") {
                std::cout << termstylist::FG_LightGreen << "SUCCESS" << termstylist::FG_Default << '\n';
            } else {
                std::cerr << termstylist::FG_LightRed << "FAILURE" << termstylist::FG_Default << '\n';
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
    T_FGC_816.TEST_FG_YELLOW();
    T_FGC_816.TEST_FG_BLUE();
    T_FGC_816.TEST_FG_MAGENTA();
    T_FGC_816.TEST_FG_CYAN();
    T_FGC_816.TEST_FG_WHITE();
    T_FGC_816.TEST_FG_LIGHTGREY();
    T_FGC_816.TEST_FG_DARKGREY();
    T_FGC_816.TEST_FG_LIGHTRED();
    T_FGC_816.TEST_FG_LIGHTGREEN();
    T_FGC_816.TEST_FG_LIGHTYELLOW();
    T_FGC_816.TEST_FG_LIGHTBLUE();
    T_FGC_816.TEST_FG_LIGHTMAGENTA();
    T_FGC_816.TEST_FG_LIGHTCYAN();

    T_FGC_816.TEST_FG_BOLDBLACK();
    T_FGC_816.TEST_FG_BOLDRED();
    T_FGC_816.TEST_FG_BOLDGREEN();
    T_FGC_816.TEST_FG_BOLDYELLOW();
    T_FGC_816.TEST_FG_BOLDBLUE();
    T_FGC_816.TEST_FG_BOLDMAGENTA();
    T_FGC_816.TEST_FG_BOLDCYAN();
    T_FGC_816.TEST_FG_BOLDWHITE();
    T_FGC_816.TEST_FG_BOLDLIGHTGREY();
    T_FGC_816.TEST_FG_BOLDDARKGREY();
    T_FGC_816.TEST_FG_BOLDLIGHTRED();
    T_FGC_816.TEST_FG_BOLDLIGHTGREEN();
    T_FGC_816.TEST_FG_BOLDLIGHTYELLOW();
    T_FGC_816.TEST_FG_BOLDLIGHTBLUE();
    T_FGC_816.TEST_FG_BOLDLIGHTMAGENTA();
    T_FGC_816.TEST_FG_BOLDLIGHTCYAN();

    Test_BG_Colours_816 T_BGC_816;

    T_BGC_816.TEST_BGCOLOURS_816_TITLE();
    T_BGC_816.TEST_BG_DEFAULT();
    T_BGC_816.TEST_BG_BLACK();
    T_BGC_816.TEST_BG_RED();
    T_BGC_816.TEST_BG_GREEN();
    T_BGC_816.TEST_BG_YELLOW();
    T_BGC_816.TEST_BG_BLUE();
    T_BGC_816.TEST_BG_MAGENTA();
    T_BGC_816.TEST_BG_CYAN();
    T_BGC_816.TEST_BG_WHITE();
    T_BGC_816.TEST_BG_LIGHTGREY();
    T_BGC_816.TEST_BG_DARKGREY();
    T_BGC_816.TEST_BG_LIGHTRED();
    T_BGC_816.TEST_BG_LIGHTGREEN();
    T_BGC_816.TEST_BG_LIGHTYELLOW();
    T_BGC_816.TEST_BG_LIGHTBLUE();
    T_BGC_816.TEST_BG_LIGHTMAGENTA();
    T_BGC_816.TEST_BG_LIGHTCYAN();
    
    return 0;
}

