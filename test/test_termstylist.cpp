#include "../include/termstylist.h"
#include "test_termstylist.h"
#include <iostream>
#include <sstream>

/* * * * * * * * * * * * * *
*                          *
*     TEST ATTRIBUTES      *
*                          *
* * * * * * * * * * * * * */

//title: attr tests
void Test_Attributes::TEST_ATTRS_TITLE() {
    std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTRS_Underline << "TEST ATTRIBUTES" << termstylist::FG_Default << termstylist::RESET_Underline << '\n';
}

//test: attr bold
void Test_Attributes::TEST_ATTRS_BOLD() {
    std::ostringstream ATTRS__BOLD;

    ATTRS__BOLD << termstylist::ATTRS_Bold;

    std::cout << termstylist::FG_LightYellow << "termstylist::ATTRS_Bold " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[1m " << termstylist::FG_Default <<  this->endBreak;
            
    if(ATTRS__BOLD.str() == "\033[1m") {
        std::cout << TEST_SUCCESS;;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: attr dim
void Test_Attributes::TEST_ATTRS_DIM() {
    std::ostringstream ATTRS__DIM;

    ATTRS__DIM << termstylist::ATTRS_Dim;

    std::cout << termstylist::FG_LightYellow << "termstylist::ATTRS_Dim " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[2m " << termstylist::FG_Default << this->endBreak;

    if(ATTRS__DIM.str() == "\033[2m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: attr underline
void Test_Attributes::TEST_ATTRS_UNDERLINE() {
    std::ostringstream ATTRS__UNDERLINE;

    ATTRS__UNDERLINE << termstylist::ATTRS_Underline;

    std::cout << termstylist::FG_LightYellow << "termstylist::ATTRS_Underline " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[4m " << termstylist::FG_Default << this->endBreak;

    if(ATTRS__UNDERLINE.str() == "\033[4m") {
        std::cout << TEST_SUCCESS;;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: attr reverse
void Test_Attributes::TEST_ATTRS_REVERSE() {
    std::ostringstream ATTRS__REVERSE;

    ATTRS__REVERSE << termstylist::ATTRS_Reverse;

    std::cout << termstylist::FG_LightYellow << "termstylist::ATTRS_Reverse " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[7m " << termstylist::FG_Default << this->endBreak;

    if(ATTRS__REVERSE.str() == "\033[7m") {
        std::cout << TEST_SUCCESS;;
    } else { 
        std::cerr << TEST_FAILURE;
    }
}

/* * * * * * * * * * * * * *
*                          *
*       TEST RESET         *
*                          *
* * * * * * * * * * * * * */

//title: reset tests
void Test_Reset::TEST_RESET_TITLE() {
    std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTRS_Underline << "TEST RESET" <<  termstylist::FG_Default << termstylist::RESET_Underline << '\n';
}

//test: reset default
void Test_Reset::TEST_RESET_DEFAULT() {
    std::ostringstream RESET__DEFAULT;

    RESET__DEFAULT << termstylist::RESET_Default;

    std::cout << termstylist::FG_LightYellow << "termstylist::RESET_Default " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[0m " << termstylist::FG_Default << this->endBreak;

    if(RESET__DEFAULT.str() == "\033[0m") {
        std::cout << TEST_SUCCESS;;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: reset bold
void Test_Reset::TEST_RESET_BOLD() {
    std::ostringstream RESET__BOLD;

    RESET__BOLD << termstylist::RESET_Bold;

    std::cout << termstylist::FG_LightYellow << "termstylist::RESET_Bold " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[21m " << termstylist::FG_Default << this->endBreak;

    if(RESET__BOLD.str() == "\033[21m") {
        std::cout << TEST_SUCCESS;;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: reset underline
void Test_Reset::TEST_RESET_UNDERLINE() {
    std::ostringstream RESET__UNDERLINE;

    RESET__UNDERLINE << termstylist::RESET_Underline;

    std::cout << termstylist::FG_LightYellow << "termstylist::RESET_Underline " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[24m " << termstylist::FG_Default << this->endBreak;

    if(RESET__UNDERLINE.str() == "\033[24m") {
        std::cout << TEST_SUCCESS;;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: reset reverse
void Test_Reset::TEST_RESET_REVERSE() {
    std::ostringstream RESET__REVERSE;

    RESET__REVERSE << termstylist::RESET_Reverse;

    std::cout << termstylist::FG_LightYellow << "termstylist::RESET_Reverse " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[27m " << termstylist::FG_Default << this->endBreak;

    if(RESET__REVERSE.str() == "\033[27m") {
        std::cout << TEST_SUCCESS;;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

/* * * * * * * * * * * * * *
*                          *
*   TEST FG COLOURS 8/16   *
*                          *
* * * * * * * * * * * * * */

//title: fg colours 816 tests
void Test_FGColours816::TEST_FGCOLOURS816_TITLE() {
    std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTRS_Underline << "TEST FG COLOURS 8/16" << termstylist::FG_Default << termstylist::RESET_Underline <<'\n';
}

//test: fg default
void Test_FGColours816::TEST_FG_DEFAULT() {
    std::ostringstream FG__DEFAULT;

    FG__DEFAULT << termstylist::FG_Default;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_Default " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[39m " << termstylist::FG_Default << this->endBreak; 

    if(FG__DEFAULT.str() == "\033[39m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}
        
//test: fg black
void Test_FGColours816::TEST_FG_BLACK() {
    std::ostringstream FG__BLACK;

    FG__BLACK << termstylist::FG_Black;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_Black " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[30m " << termstylist::FG_Default << this->endBreak;

    if(FG__BLACK.str() == "\033[30m") {
        std::cout << TEST_SUCCESS;;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg red
void Test_FGColours816::TEST_FG_RED() {
    std::ostringstream FG__RED;

    FG__RED << termstylist::FG_Red;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_Red " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[31m " << termstylist::FG_Default << this->endBreak;

    if(FG__RED.str() == "\033[31m") {
        std::cout << TEST_SUCCESS;;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg green
void Test_FGColours816::TEST_FG_GREEN() {
    std::ostringstream FG__GREEN;

    FG__GREEN << termstylist::FG_Green;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_Green " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[32m " << termstylist::FG_Default << this->endBreak; 

    if(FG__GREEN.str() == "\033[32m") {
        std::cout << TEST_SUCCESS;;
    } else {
        std::cout << TEST_FAILURE;
    }
}

//test: fg yellow
void Test_FGColours816::TEST_FG_YELLOW() {
    std::ostringstream FG__YELLOW;

    FG__YELLOW << termstylist::FG_Yellow;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_Yellow " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[33m " << termstylist::FG_Default << this->endBreak;

    if(FG__YELLOW.str() == "\033[33m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg blue
void Test_FGColours816::TEST_FG_BLUE() {
    std::ostringstream FG__BLUE;

    FG__BLUE << termstylist::FG_Blue;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_Blue " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[34m " << termstylist::FG_Default << this->endBreak;

    if(FG__BLUE.str() == "\033[34m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg magenta
void Test_FGColours816::TEST_FG_MAGENTA() {
    std::ostringstream FG__MAGENTA;

    FG__MAGENTA << termstylist::FG_Magenta;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_Magenta " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[35m " << termstylist::FG_Default << this->endBreak;

    if(FG__MAGENTA.str() == "\033[35m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg cyan
void Test_FGColours816::TEST_FG_CYAN() {
    std::ostringstream FG__CYAN;

    FG__CYAN << termstylist::FG_Cyan;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_Cyan " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[36m " << termstylist::FG_Default << this->endBreak;

    if(FG__CYAN.str() == "\033[36m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg white
void Test_FGColours816::TEST_FG_WHITE() {
    std::ostringstream FG__WHITE;

    FG__WHITE << termstylist::FG_White;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_White " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[97m " << termstylist::FG_Default << this->endBreak;

    if(FG__WHITE.str() == "\033[97m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg light grey
void Test_FGColours816::TEST_FG_LIGHTGREY() {
    std::ostringstream FG__LIGHTGREY;

    FG__LIGHTGREY << termstylist::FG_LightGrey;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_LightGrey " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[37m " << termstylist::FG_Default << this->endBreak;

    if(FG__LIGHTGREY.str() == "\033[37m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg dark grey
void Test_FGColours816::TEST_FG_DARKGREY() {
    std::ostringstream FG__DARKGREY;

    FG__DARKGREY << termstylist::FG_DarkGrey;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_DarkGrey " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[90m " << termstylist::FG_Default << this->endBreak;

    if(FG__DARKGREY.str() == "\033[90m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}
        
//test: fg light red
void Test_FGColours816::TEST_FG_LIGHTRED() {
    std::ostringstream FG__LIGHTRED;

    FG__LIGHTRED << termstylist::FG_LightRed;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_LightRed " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[91m " << termstylist::FG_Default << this->endBreak;

    if(FG__LIGHTRED.str() == "\033[91m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg light green
void Test_FGColours816::TEST_FG_LIGHTGREEN() {
    std::ostringstream FG__LIGHTGREEN;

    FG__LIGHTGREEN << termstylist::FG_LightGreen;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_LightGreen " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[92m " << termstylist::FG_Default << this->endBreak;

    if(FG__LIGHTGREEN.str() == "\033[92m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg light yellow
void Test_FGColours816::TEST_FG_LIGHTYELLOW() {
    std::ostringstream FG__LIGHTYELLOW;

    FG__LIGHTYELLOW << termstylist::FG_LightYellow;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_LightYellow " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[93m " << termstylist::FG_Default << this->endBreak;

    if(FG__LIGHTYELLOW.str() == "\033[93m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg light blue
void Test_FGColours816::TEST_FG_LIGHTBLUE() {
    std::ostringstream FG__LIGHTBLUE;

    FG__LIGHTBLUE << termstylist::FG_LightBlue;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_LightBlue " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[94m " << termstylist::FG_Default << this->endBreak;

    if(FG__LIGHTBLUE.str() == "\033[94m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg light magenta
void Test_FGColours816::TEST_FG_LIGHTMAGENTA() {
    std::ostringstream FG__LIGHTMAGENTA;

    FG__LIGHTMAGENTA << termstylist::FG_LightMagenta;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_LightMagenta " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[95m " << termstylist::FG_Default << this->endBreak;

    if(FG__LIGHTMAGENTA.str() == "\033[95m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg light cyan
void Test_FGColours816::TEST_FG_LIGHTCYAN() {
    std::ostringstream FG__LIGHTCYAN;

    FG__LIGHTCYAN << termstylist::FG_LightCyan;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_LightCyan " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[96m " << termstylist::FG_Default << this->endBreak;

    if(FG__LIGHTCYAN.str() == "\033[96m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold black
void Test_FGColours816::TEST_FG_BOLDBLACK() {
    std::ostringstream FG__BOLDBLACK;

    FG__BOLDBLACK << termstylist::FG_BoldBlack;

    std::cout << '\n' << termstylist::FG_LightYellow << "termstylist::FG_BoldBlack " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[30;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDBLACK.str() == "\033[30;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold red
void Test_FGColours816::TEST_FG_BOLDRED() {
    std::ostringstream FG__BOLDRED;

    FG__BOLDRED << termstylist::FG_BoldRed;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_BoldRed " << termstylist::FG_Default <<  this->shouldEqual << termstylist::FG_LightYellow << "\\033[31;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDRED.str() == "\033[31;1m") {
        std::cout << TEST_SUCCESS;    
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold green
void Test_FGColours816::TEST_FG_BOLDGREEN() {
    std::ostringstream FG__BOLDGREEN;

    FG__BOLDGREEN << termstylist::FG_BoldGreen;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_BoldGreen " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[32;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDGREEN.str() == "\033[32;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
} 

//test: fg bold yellow
void Test_FGColours816::TEST_FG_BOLDYELLOW() {
    std::ostringstream FG__BOLDYELLOW;

    FG__BOLDYELLOW << termstylist::FG_BoldYellow;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_BoldYellow " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[33;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDYELLOW.str() == "\033[33;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold blue
void Test_FGColours816::TEST_FG_BOLDBLUE() {
    std::ostringstream FG__BOLDBLUE;

    FG__BOLDBLUE << termstylist::FG_BoldBlue;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_BoldBlue " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[34;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDBLUE.str() == "\033[34;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold magenta 
void Test_FGColours816::TEST_FG_BOLDMAGENTA() {
    std::ostringstream FG__BOLDMAGENTA;

    FG__BOLDMAGENTA << termstylist::FG_BoldMagenta;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_BoldMagenta " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[35;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDMAGENTA.str() == "\033[35;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold cyan
void Test_FGColours816::TEST_FG_BOLDCYAN() {
    std::ostringstream FG__BOLDCYAN;

    FG__BOLDCYAN << termstylist::FG_BoldCyan;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_BoldCyan " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[36;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDCYAN.str() == "\033[36;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold white
void Test_FGColours816::TEST_FG_BOLDWHITE() {
    std::ostringstream FG__BOLDWHITE;

    FG__BOLDWHITE << termstylist::FG_BoldWhite;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_BoldWhite " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[97;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDWHITE.str() == "\033[97;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold light grey
void Test_FGColours816::TEST_FG_BOLDLIGHTGREY() {
    std::ostringstream FG__BOLDLIGHTGREY;

    FG__BOLDLIGHTGREY << termstylist::FG_BoldLightGrey;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_BoldLightGrey " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[37;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDLIGHTGREY.str() == "\033[37;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold dark grey
void Test_FGColours816::TEST_FG_BOLDDARKGREY() {
    std::ostringstream FG__BOLDDARKGREY;

    FG__BOLDDARKGREY << termstylist::FG_BoldDarkGrey;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_BoldDarkGrey " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[90;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDDARKGREY.str() == "\033[90;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold light red 
void Test_FGColours816::TEST_FG_BOLDLIGHTRED() {
    std::ostringstream FG__BOLDLIGHTRED;

    FG__BOLDLIGHTRED << termstylist::FG_BoldLightRed;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_BoldLightRed " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[91;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDLIGHTRED.str() == "\033[91;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold light green
void Test_FGColours816::TEST_FG_BOLDLIGHTGREEN() {
    std::ostringstream FG__BOLDLIGHTGREEN;

    FG__BOLDLIGHTGREEN << termstylist::FG_BoldLightGreen;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_boldLightGreen " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[92;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDLIGHTGREEN.str() == "\033[92;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold light yellow
void Test_FGColours816::TEST_FG_BOLDLIGHTYELLOW() {
    std::ostringstream FG__BOLDLIGHTYELLOW;

    FG__BOLDLIGHTYELLOW << termstylist::FG_BoldLightYellow;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_BoldLightYellow " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[93;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDLIGHTYELLOW.str() == "\033[93;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold light blue
void Test_FGColours816::TEST_FG_BOLDLIGHTBLUE() {
    std::ostringstream FG__BOLDLIGHTBLUE;

    FG__BOLDLIGHTBLUE << termstylist::FG_BoldLightBlue;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_BoldLightBlue " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[94;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDLIGHTBLUE.str() == "\033[94;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold light magenta
void Test_FGColours816::TEST_FG_BOLDLIGHTMAGENTA() {
    std::ostringstream FG__BOLDLIGHTMAGENTA;

    FG__BOLDLIGHTMAGENTA << termstylist::FG_BoldLightMagenta;

    std::cout << termstylist::FG_LightYellow << "termstlist::FG_BoldLightMagenta " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[95;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDLIGHTMAGENTA.str() == "\033[95;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg bold light cyan
void Test_FGColours816::TEST_FG_BOLDLIGHTCYAN() {
    std::ostringstream FG__BOLDLIGHTCYAN;

    FG__BOLDLIGHTCYAN << termstylist::FG_BoldLightCyan;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG_BoldLightCyan " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[96;1m " << termstylist::FG_Default << this->endBreak;

    if(FG__BOLDLIGHTCYAN.str() == "\033[96;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

/* * * * * * * * * * * * * *
*                          *
*   TEST BG COLOURS 8/16   *
*                          *
* * * * * * * * * * * * * */

//title: bg colours 816 tests
void Test_BGColours816::TEST_BGCOLOURS_816_TITLE() {
    std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTRS_Underline << "TEST BG COLOURS 8/16" << termstylist::FG_Default << termstylist::RESET_Underline << '\n';
}

//test: bg default
void Test_BGColours816::TEST_BG_DEFAULT() {
    std::ostringstream BG__DEFAULT;

    BG__DEFAULT << termstylist::BG_Default;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_Default " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[49m " << termstylist::FG_Default << this->endBreak;

    if(BG__DEFAULT.str() == "\033[49m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg black
void Test_BGColours816::TEST_BG_BLACK() {
    std::ostringstream BG__BLACK;

    BG__BLACK << termstylist::BG_Black;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_Black " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[40m " << termstylist::FG_Default << this->endBreak;

    if(BG__BLACK.str() == "\033[40m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg red 
void Test_BGColours816::TEST_BG_RED() {
    std::ostringstream BG__RED;

    BG__RED << termstylist::BG_Red;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_Red " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[41m " << termstylist::FG_Default << this->endBreak;

    if(BG__RED.str() == "\033[41m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}
        
//test: bg green
void Test_BGColours816::TEST_BG_GREEN() {
    std::ostringstream BG__GREEN;

    BG__GREEN << termstylist::BG_Green;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_Green " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[42m " << termstylist::FG_Default << this->endBreak;

    if(BG__GREEN.str() == "\033[42m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg yellow
void Test_BGColours816::TEST_BG_YELLOW() {
    std::ostringstream BG__YELLOW;

    BG__YELLOW << termstylist::BG_Yellow;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_Yellow " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[43m " << termstylist::FG_Default << this->endBreak;

    if(BG__YELLOW.str() == "\033[43m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg blue
void Test_BGColours816::TEST_BG_BLUE() {
    std::ostringstream BG__BLUE;

    BG__BLUE << termstylist::BG_Blue;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_Blue " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[44m " << termstylist::FG_Default << this->endBreak;

    if(BG__BLUE.str() == "\033[44m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg magenta
void Test_BGColours816::TEST_BG_MAGENTA() {
    std::ostringstream BG__MAGENTA;

    BG__MAGENTA << termstylist::BG_Magenta;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_Magenta " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[45m " << termstylist::FG_Default << this->endBreak;

    if(BG__MAGENTA.str() == "\033[45m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg cyan
void Test_BGColours816::TEST_BG_CYAN() {
    std::ostringstream BG__CYAN;

    BG__CYAN << termstylist::BG_Cyan;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_Cyan " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[46m " << termstylist::FG_Default << this->endBreak;

    if(BG__CYAN.str() == "\033[46m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg white
void Test_BGColours816::TEST_BG_WHITE() {
    std::ostringstream BG__WHITE;

    BG__WHITE << termstylist::BG_White;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_White " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[107m " << termstylist::FG_Default << this->endBreak;

    if(BG__WHITE.str() == "\033[107m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg light grey 
void Test_BGColours816::TEST_BG_LIGHTGREY() {
    std::ostringstream BG__LIGHTGREY;

    BG__LIGHTGREY << termstylist::BG_LightGrey;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_LightGrey " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[47m " << termstylist::FG_Default << this->endBreak;

    if(BG__LIGHTGREY.str() == "\033[47m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg dark grey
void Test_BGColours816::TEST_BG_DARKGREY() {
    std::ostringstream BG__DARKGREY;

    BG__DARKGREY << termstylist::BG_DarkGrey;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_DarkGrey " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[100m " << termstylist::FG_Default << this->endBreak;

    if(BG__DARKGREY.str() == "\033[100m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg light red
void Test_BGColours816::TEST_BG_LIGHTRED() {
    std::ostringstream BG__LIGHTRED;

    BG__LIGHTRED << termstylist::BG_LightRed;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_LightRed " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[101m " << termstylist::FG_Default << this->endBreak;

    if(BG__LIGHTRED.str() == "\033[101m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg light green
void Test_BGColours816::TEST_BG_LIGHTGREEN() {
    std::ostringstream BG__LIGHTGREEN;

    BG__LIGHTGREEN << termstylist::BG_LightGreen;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_LightGreen " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[102m " << termstylist::FG_Default << this->endBreak;

    if(BG__LIGHTGREEN.str() == "\033[102m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg light yellow
void Test_BGColours816::TEST_BG_LIGHTYELLOW() {
    std::ostringstream BG__LIGHTYELLOW;

    BG__LIGHTYELLOW << termstylist::BG_LightYellow;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_LightYellow " << termstylist::FG_Default << "~ SHOULD BE ~ " << termstylist::FG_LightYellow << "\\033[103m " << termstylist::FG_Default << this->endBreak;

    if(BG__LIGHTYELLOW.str() == "\033[103m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg light blue
void Test_BGColours816::TEST_BG_LIGHTBLUE() {
    std::ostringstream BG__LIGHTBLUE;

    BG__LIGHTBLUE << termstylist::BG_LightBlue;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_LightBlue " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[104m " << termstylist::FG_Default << this->endBreak;

    if(BG__LIGHTBLUE.str() == "\033[104m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg light magenta
void Test_BGColours816::TEST_BG_LIGHTMAGENTA() {
    std::ostringstream BG__LIGHTMAGENTA;

    BG__LIGHTMAGENTA << termstylist::BG_LightMagenta;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_LightMagenta " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[105m " << termstylist::FG_Default << this->endBreak;

    if(BG__LIGHTMAGENTA.str() == "\033[105m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg light cyan
void Test_BGColours816::TEST_BG_LIGHTCYAN() {
    std::ostringstream BG__LIGHTCYAN;

    BG__LIGHTCYAN << termstylist::BG_LightCyan;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_LightCyan " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[106m " << termstylist::FG_Default << this->endBreak;

    if(BG__LIGHTCYAN.str() == "\033[106m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg bold black
void Test_BGColours816::TEST_BG_BOLDBLACK() {
    std::ostringstream BG__BOLDBLACK;

    BG__BOLDBLACK << termstylist::BG_BoldBlack;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldBlack " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[40;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDBLACK.str() == "\033[40;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg bold red
void Test_BGColours816::TEST_BG_BOLDRED() {
    std::ostringstream BG__BOLDRED;

    BG__BOLDRED << termstylist::BG_BoldRed;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldRed " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[42;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDRED.str() == "\033[41;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg bold green 
void Test_BGColours816::TEST_BG_BOLDGREEN() {
    std::ostringstream BG__BOLDGREEN;

    BG__BOLDGREEN << termstylist::BG_BoldGreen;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldGreen " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[42;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDGREEN.str() == "\033[42;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg bold yellow
void Test_BGColours816::TEST_BG_BOLDYELLOW() {
    std::ostringstream BG__BOLDYELLOW;

    BG__BOLDYELLOW << termstylist::BG_BoldYellow;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldYellow " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[43;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDYELLOW.str() == "\033[43;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg bold blue
void Test_BGColours816::TEST_BG_BOLDBLUE() {
    std::ostringstream BG__BOLDBLUE;

    BG__BOLDBLUE << termstylist::BG_BoldBlue;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldBlue " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[44;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDBLUE.str() == "\033[44;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg bold magenta
void Test_BGColours816::TEST_BG_BOLDMAGENTA() {
    std::ostringstream BG__BOLDMAGENTA;

    BG__BOLDMAGENTA << termstylist::BG_BoldMagenta;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldMagenta " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[45;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDMAGENTA.str() == "\033[45;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg bold cyan
void Test_BGColours816::TEST_BG_BOLDCYAN() {
    std::ostringstream BG__BOLDCYAN;

    BG__BOLDCYAN << termstylist::BG_BoldCyan;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldCyan " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[46;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDCYAN.str() == "\033[46;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}      
        
//test: bg bold white 
void Test_BGColours816::TEST_BG_BOLDWHITE() {
    std::ostringstream BG__BOLDWHITE;

    BG__BOLDWHITE << termstylist::BG_BoldWhite;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldWhite " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[107;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDWHITE.str() == "\033[107;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg bold dark grey 
void Test_BGColours816::TEST_BG_BOLDDARKGREY() {
    std::ostringstream BG__BOLDDARKGREY;

    BG__BOLDDARKGREY << termstylist::BG_BoldDarkGrey;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldDarkGrey " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[100;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDDARKGREY.str() == "\033[100;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg bold light red 
void Test_BGColours816::TEST_BG_BOLDLIGHTRED() {
    std::ostringstream BG__BOLDLIGHTRED;

    BG__BOLDLIGHTRED << termstylist::BG_BoldLightRed;

    std::cout << termstylist::FG_LightYellow << "termstylist:BG_BoldLightRed " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[101;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDLIGHTRED.str() == "\033[101;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cout << TEST_FAILURE;
    }
}

//test: bg bold light green
void Test_BGColours816::TEST_BG_BOLDLIGHTGREEN() {
    std::ostringstream BG__BOLDLIGHTGREEN;

    BG__BOLDLIGHTGREEN << termstylist::BG_BoldLightGreen;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldLightGreen " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[102;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDLIGHTGREEN.str() == "\033[102;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
} 

//test: bg bold light yellow
void Test_BGColours816::TEST_BG_BOLDLIGHTYELLOW() {
    std::ostringstream BG__BOLDLIGHTYELLOW;

    BG__BOLDLIGHTYELLOW << termstylist::BG_BoldLightYellow;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldLightYellow " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[103;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDLIGHTYELLOW.str() == "\033[103;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg bold light blue
void Test_BGColours816::TEST_BG_BOLDLIGHTBLUE() {
    std::ostringstream BG__BOLDLIGHTBLUE;

    BG__BOLDLIGHTBLUE << termstylist::BG_BoldLightBlue;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldLightBlue " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[104;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDLIGHTBLUE.str() == "\033[104;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}
        
//test: bg bold light magenta
void Test_BGColours816::TEST_BG_BOLDLIGHTMAGENTA() {
    std::ostringstream BG__BOLDLIGHTMAGENTA;

    BG__BOLDLIGHTMAGENTA << termstylist::BG_BoldLightMagenta;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldLightMagenta " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[105;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDLIGHTMAGENTA.str() == "\033[105;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: bg bold light cyan
void Test_BGColours816::TEST_BG_BOLDLIGHTCYAN() {
    std::ostringstream BG__BOLDLIGHTCYAN;

    BG__BOLDLIGHTCYAN << termstylist::BG_BoldLightCyan;

    std::cout << termstylist::FG_LightYellow << "termstylist::BG_BoldLightCyan " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[106;1m " << termstylist::FG_Default << this->endBreak;

    if(BG__BOLDLIGHTCYAN.str() == "\033[106;1m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

/* * * * * * * * * * * * * *
*                          *
*    TEST FG COLOURS 256   *
*                          *
* * * * * * * * * * * * * */

//title: fg colours 256 tests
void Test_FGColours256::TEST_FGCOLOURS256_TITLE() {
    std::cout << '\n' << termstylist::FG_LightCyan << termstylist::ATTRS_Underline << "TEST FG COLOURS 256" << termstylist::FG_Default << termstylist::RESET_Underline << '\n';
}

//test: fg256 0 
void Test_FGColours256::TEST_FG256_0() {
    std::ostringstream FG256__0;

    FG256__0 << termstylist::FG256_0;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_0 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;0m " << termstylist::FG_Default << this->endBreak;

    if(FG256__0.str() == "\033[38;5;0m") {
        std::cout << TEST_SUCCESS;;
    } else {
        std::cerr << TEST_FAILURE;
    }   
}

//test: fg256 1
void Test_FGColours256::TEST_FG256_1() {
    std::ostringstream FG256__1;

    FG256__1 << termstylist::FG256_1;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_1 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;1m " << termstylist::FG_Default << this->endBreak;

    if(FG256__1.str() == "\033[38;5;1m") {
        std::cout << TEST_SUCCESS;;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 2 
void Test_FGColours256::TEST_FG256_2() {
    std::ostringstream FG256__2;
            
    FG256__2 << termstylist::FG256_2;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_2 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;2m " << termstylist::FG_Default << this->endBreak;

    if(FG256__2.str() == "\033[38;5;2m") {
        std::cout << TEST_SUCCESS;;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 3
void Test_FGColours256::TEST_FG256_3() {
    std::ostringstream FG256__3;

    FG256__3 << termstylist::FG256_3;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_3 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;3m " << termstylist::FG_Default << this->endBreak;

    if(FG256__3.str() == "\033[38;5;3m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr<< TEST_FAILURE;
    }
}

//test: fg256 4
void Test_FGColours256::TEST_FG256_4() {
    std::ostringstream FG256__4;

    FG256__4 << termstylist::FG256_4;
    
    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_4 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;4m " << termstylist::FG_Default << this->endBreak;

    if(FG256__4.str() == "\033[38;5;4m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 5 
void Test_FGColours256::TEST_FG256_5() {
    std::ostringstream FG256__5;

    FG256__5 << termstylist::FG256_5;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_5 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;5m " << termstylist::FG_Default << this->endBreak;

    if(FG256__5.str() == "\033[38;5;5m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 6
void Test_FGColours256::TEST_FG256_6() {
    std::ostringstream FG256__6;

    FG256__6 << termstylist::FG256_6;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_6 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;6m " << termstylist::FG_Default << this->endBreak;

    if(FG256__6.str() == "\033[38;5;6m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 7
void Test_FGColours256::TEST_FG256_7() {
    std::ostringstream FG256__7;

    FG256__7 << termstylist::FG256_7;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_7 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;7m " << termstylist::FG_Default << this->endBreak;

    if(FG256__7.str() == "\033[38;5;7m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 8
void Test_FGColours256::TEST_FG256_8() {
    std::ostringstream FG256__8;

    FG256__8 << termstylist::FG256_8;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_8 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;8m " << termstylist::FG_Default << this->endBreak;

    if(FG256__8.str() == "\033[38;5;8m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 9
void Test_FGColours256::TEST_FG256_9() {
    std::ostringstream FG256__9;

    FG256__9 << termstylist::FG256_9;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_9 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;9m " << termstylist::FG_Default << this->endBreak;

    if(FG256__9.str() == "\033[38;5;9m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 10
void Test_FGColours256::TEST_FG256_10() {
    std::ostringstream FG256__10;

    FG256__10 << termstylist::FG256_10;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_10 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;10m " << termstylist::FG_Default << this->endBreak;

    if(FG256__10.str() == "\033[38;5;10m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 11
void Test_FGColours256::TEST_FG256_11() {
    std::ostringstream FG256__11;

    FG256__11 << termstylist::FG256_11;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_11 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;11m " << termstylist::FG_Default << this->endBreak;

    if(FG256__11.str() == "\033[38;5;11m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 12 
void Test_FGColours256::TEST_FG256_12() {
    std::ostringstream FG256__12;
    
    FG256__12 << termstylist::FG256_12;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_12 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;12m " << termstylist::FG_Default << this->endBreak;

    if(FG256__12.str() == "\033[38;5;12m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 13
void Test_FGColours256::TEST_FG256_13() {
    std::ostringstream FG256__13;

    FG256__13 << termstylist::FG256_13;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_13 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;13m " << termstylist::FG_Default << this->endBreak;

    if(FG256__13.str() == "\033[38;5;13m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 14 
void Test_FGColours256::TEST_FG256_14() {
    std::ostringstream FG256__14;

    FG256__14 << termstylist::FG256_14;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_14 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;14m " << termstylist::FG_Default << this->endBreak;

    if(FG256__14.str() == "\033[38;5;14m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 15
void Test_FGColours256::TEST_FG256_15() {
    std::ostringstream FG256__15;

    FG256__15 << termstylist::FG256_15;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_15 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;15m " << termstylist::FG_Default << this->endBreak;

    if(FG256__15.str() == "\033[38;5;15m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 16
void Test_FGColours256::TEST_FG256_16() {
    std::ostringstream FG256__16;

    FG256__16 << termstylist::FG256_16;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_16 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;16m " << termstylist::FG_Default << this->endBreak;

    if(FG256__16.str() == "\033[38;5;16m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 17
void Test_FGColours256::TEST_FG256_17() {
    std::ostringstream FG256__17;

    FG256__17 << termstylist::FG256_17;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_17 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;17m " << termstylist::FG_Default << this->endBreak;

    if(FG256__17.str() == "\033[38;5;17m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 18
void Test_FGColours256::TEST_FG256_18() {
    std::ostringstream FG256__18;

    FG256__18 << termstylist::FG256_18;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_18 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;18m " << termstylist::FG_Default << this->endBreak;

    if(FG256__18.str() == "\033[38;5;18m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 19
void Test_FGColours256::TEST_FG256_19() {
    std::ostringstream FG256__19;

    FG256__19 << termstylist::FG256_19;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_19 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;19m " << termstylist::FG_Default << this->endBreak;

    if(FG256__19.str() == "\033[38;5;19m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 20
void Test_FGColours256::TEST_FG256_20() {
    std::ostringstream FG256__20;

    FG256__20 << termstylist::FG256_20;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_20 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;20m " << termstylist::FG_Default << this->endBreak;

    if(FG256__20.str() == "\033[38;5;20m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 21
void Test_FGColours256::TEST_FG256_21() {
    std::ostringstream FG256__21;

    FG256__21 << termstylist::FG256_21;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_21 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;21m " << termstylist::FG_Default << this->endBreak;

    if(FG256__21.str() == "\033[38;5;21m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 22
void Test_FGColours256::TEST_FG256_22() {
    std::ostringstream FG256__22;

    FG256__22 << termstylist::FG256_22;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_22 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;22m " << termstylist::FG_Default << this->endBreak;

    if(FG256__22.str() == "\033[38;5;22m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 23
void Test_FGColours256::TEST_FG256_23() {
    std::ostringstream FG256__23;

    FG256__23 << termstylist::FG256_23;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_23 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;23m " << termstylist::FG_Default << this->endBreak;

    if(FG256__23.str() == "\033[38;5;23m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 24
void Test_FGColours256::TEST_FG256_24() {
    std::ostringstream FG256__24;

    FG256__24 << termstylist::FG256_24;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_24 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;24m " << termstylist::FG_Default << this->endBreak;

    if(FG256__24.str() == "\033[38;5;24m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 25
void Test_FGColours256::TEST_FG256_25() {
    std::ostringstream FG256__25;

    FG256__25 << termstylist::FG256_25;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_25 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;25m " << termstylist::FG_Default << this->endBreak;

    if(FG256__25.str() == "\033[38;5;25m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 26
void Test_FGColours256::TEST_FG256_26() {
    std::ostringstream FG256__26;

    FG256__26 << termstylist::FG256_26;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_26 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;26m " << termstylist::FG_Default << this->endBreak;

    if(FG256__26.str() == "\033[38;5;26m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 27
void Test_FGColours256::TEST_FG256_27() {
    std::ostringstream FG256__27;

    FG256__27 << termstylist::FG256_27;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_27 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;27m " << termstylist::FG_Default << this->endBreak;

    if(FG256__27.str() == "\033[38;5;27m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 28 
void Test_FGColours256::TEST_FG256_28() {
    std::ostringstream FG256__28;

    FG256__28 << termstylist::FG256_28;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_28 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;28m " << termstylist::FG_Default << this->endBreak;

    if(FG256__28.str() == "\033[38;5;28m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 29
void Test_FGColours256::TEST_FG256_29() {
    std::ostringstream FG256__29;

    FG256__29 << termstylist::FG256_29;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_29 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;29m " << termstylist::FG_Default << this->endBreak;

    if(FG256__29.str() == "\033[38;5;29m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 30
void Test_FGColours256::TEST_FG256_30() {
    std::ostringstream FG256__30;

    FG256__30 << termstylist::FG256_30;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_30 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;30m " << termstylist::FG_Default << this->endBreak;

    if(FG256__30.str() == "\033[38;5;30m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 31
void Test_FGColours256::TEST_FG256_31() {
    std::ostringstream FG256__31;

    FG256__31 << termstylist::FG256_31;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_31 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;31m " << termstylist::FG_Default << this->endBreak;

    if(FG256__31.str() == "\033[38;5;31m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 32
void Test_FGColours256::TEST_FG256_32() {
    std::ostringstream FG256__32;

    FG256__32 << termstylist::FG256_32;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_32 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;32m " << termstylist::FG_Default << this->endBreak;

    if(FG256__32.str() == "\033[38;5;32m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 33
void Test_FGColours256::TEST_FG256_33() {
    std::ostringstream FG256__33;

    FG256__33 << termstylist::FG256_33;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_33 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;33m " << termstylist::FG_Default << this->endBreak;

    if(FG256__33.str() == "\033[38;5;33m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 34 
void Test_FGColours256::TEST_FG256_34() {
    std::ostringstream FG256__34;
    
    FG256__34 << termstylist::FG256_34;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_34 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;34m " << termstylist::FG_Default << this->endBreak;

    if(FG256__34.str() == "\033[38;5;34m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 35
void Test_FGColours256::TEST_FG256_35() {
    std::ostringstream FG256__35;

    FG256__35 << termstylist::FG256_35;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_35 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;35m " << termstylist::FG_Default << this->endBreak;

    if(FG256__35.str() == "\033[38;5;35m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 36
void Test_FGColours256::TEST_FG256_36() {
    std::ostringstream FG256__36;

    FG256__36 << termstylist::FG256_36;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_36 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;36m " << termstylist::FG_Default << this->endBreak;

    if(FG256__36.str() == "\033[38;5;36m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
} 

//test: fg256 37
void Test_FGColours256::TEST_FG256_37() {
    std::ostringstream FG256__37;

    FG256__37 << termstylist::FG256_37;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_37 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;37m " << termstylist::FG_Default << this->endBreak;

    if(FG256__37.str() == "\033[38;5;37m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 38
void Test_FGColours256::TEST_FG256_38() {
    std::ostringstream FG256__38;

    FG256__38 << termstylist::FG256_38;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_38 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;38m " << termstylist::FG_Default << this->endBreak;

    if(FG256__38.str() == "\033[38;5;38m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 39
void Test_FGColours256::TEST_FG256_39() {
    std::ostringstream FG256__39;

    FG256__39 << termstylist::FG256_39;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_39 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;39m " << termstylist::FG_Default << this->endBreak;

    if(FG256__39.str() == "\033[38;5;39m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 40
void Test_FGColours256::TEST_FG256_40() {
    std::ostringstream FG256__40;

    FG256__40 << termstylist::FG256_40;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_40 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;40m " << termstylist::FG_Default << this->endBreak;

    if(FG256__40.str() == "\033[38;5;40m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 41
void Test_FGColours256::TEST_FG256_41() {
    std::ostringstream FG256__41;

    FG256__41 << termstylist::FG256_41;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_41 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033;38;5;41m " << termstylist::FG_Default << this->endBreak;

    if(FG256__41.str() == "\033[38;5;41m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 42
void Test_FGColours256::TEST_FG256_42() {
    std::ostringstream FG256__42;

    FG256__42 << termstylist::FG256_42;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_42 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;42m " << termstylist::FG_Default << this->endBreak;

    if(FG256__42.str() == "\033[38;5;42m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 43
void Test_FGColours256::TEST_FG256_43() {
    std::ostringstream FG256__43;

    FG256__43 << termstylist::FG256_43;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_43 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;43m " << termstylist::FG_Default << this->endBreak;

    if(FG256__43.str() == "\033[38;5;43m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 44 
void Test_FGColours256::TEST_FG256_44() {
    std::ostringstream FG256__44;
    
    FG256__44 << termstylist::FG256_44;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_44 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;44m " << termstylist::FG_Default << this->endBreak;

    if(FG256__44.str() == "\033[38;5;44m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 45
void Test_FGColours256::TEST_FG256_45() {
    std::ostringstream FG256__45;

    FG256__45 << termstylist::FG256_45;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_45 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;45m " << termstylist::FG_Default << this->endBreak;

    if(FG256__45.str() == "\033[38;5;45m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 46
void Test_FGColours256::TEST_FG256_46() {
    std::ostringstream FG256__46;

    FG256__46 << termstylist::FG256_46;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_46 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;46m " << termstylist::FG_Default << this->endBreak;

    if(FG256__46.str() == "\033[38;5;46m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 47
void Test_FGColours256::TEST_FG256_47() {
    std::ostringstream FG256__47;

    FG256__47 << termstylist::FG256_47;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_47 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;47m " << termstylist::FG_Default << this->endBreak;

    if(FG256__47.str() == "\033[38;5;47m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 48
void Test_FGColours256::TEST_FG256_48() {
    std::ostringstream FG256__48;

    FG256__48 << termstylist::FG256_48;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_48 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;48m " << termstylist::FG_Default << this->endBreak;

    if(FG256__48.str() == "\033[38;5;48m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 49
void Test_FGColours256::TEST_FG256_49() {
    std::ostringstream FG256__49;

    FG256__49 << termstylist::FG256_49;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_49 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;49m " << termstylist::FG_Default << this->endBreak;

    if(FG256__49.str() == "\033[38;5;49m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 50
void Test_FGColours256::TEST_FG256_50() {
    std::ostringstream FG256__50;

    FG256__50 << termstylist::FG256_50;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_50 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;50m " << termstylist::FG_Default << this->endBreak;

    if(FG256__50.str() == "\033[38;5;50m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 51
void Test_FGColours256::TEST_FG256_51() {
    std::ostringstream FG256__51;

    FG256__51 << termstylist::FG256_51;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_51 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;51m " << termstylist::FG_Default << this->endBreak;

    if(FG256__51.str() == "\033[38;5;51m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 52
void Test_FGColours256::TEST_FG256_52() {
    std::ostringstream FG256__52;

    FG256__52 << termstylist::FG256_52;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_52 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;52m " << termstylist::FG_Default << this->endBreak;

    if(FG256__52.str() == "\033[38;5;52m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 53
void Test_FGColours256::TEST_FG256_53() {
    std::ostringstream FG256__53;

    FG256__53 << termstylist::FG256_53;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_53 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;53m " << termstylist::FG_Default << this->endBreak;

    if(FG256__53.str() == "\033[38;5;53m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 54 
void Test_FGColours256::TEST_FG256_54() {
    std::ostringstream FG256__54;

    FG256__54 << termstylist::FG256_54;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_54 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;54m " << termstylist::FG_Default << this->endBreak;

    if(FG256__54.str() == "\033[38;5;54m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 55
void Test_FGColours256::TEST_FG256_55() {
    std::ostringstream FG256__55;

    FG256__55 << termstylist::FG256_55;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_55 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;55m " << termstylist::FG_Default << this->endBreak;

    if(FG256__55.str() == "\033[38;5;55m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 56
void Test_FGColours256::TEST_FG256_56() {
    std::ostringstream FG256__56;

    FG256__56 << termstylist::FG256_56;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_56 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;56m " << termstylist::FG_Default << this->endBreak;

    if(FG256__56.str() == "\033[38;5;56m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 57
void Test_FGColours256::TEST_FG256_57() {
    std::ostringstream FG256__57;

    FG256__57 << termstylist::FG256_57;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_57 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;57m " << termstylist::FG_Default << this->endBreak;

    if(FG256__57.str() == "\033[38;5;57m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 58
void Test_FGColours256::TEST_FG256_58() {
    std::ostringstream FG256__58;

    FG256__58 << termstylist::FG256_58;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_58 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;58m " << termstylist::FG_Default << this->endBreak;

    if(FG256__58.str() == "\033[38;5;58m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 59
void Test_FGColours256::TEST_FG256_59() {
    std::ostringstream FG256__59;

    FG256__59 << termstylist::FG256_59;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_59 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;59m " << termstylist::FG_Default << this->endBreak;;

    if(FG256__59.str() == "\033[38;5;59m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 60
void Test_FGColours256::TEST_FG256_60() {
    std::ostringstream FG256__60;

    FG256__60 << termstylist::FG256_60;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_60 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;60m " << termstylist::FG_Default << this->endBreak;

    if(FG256__60.str() == "\033[38;5;60m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 61
void Test_FGColours256::TEST_FG256_61() {
    std::ostringstream FG256__61;

    FG256__61 << termstylist::FG256_61;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_61 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;61m " << termstylist::FG_Default << this->endBreak;

    if(FG256__61.str() == "\033[38;5;61m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 62
void Test_FGColours256::TEST_FG256_62() {
    std::ostringstream FG256__62;

    FG256__62 << termstylist::FG256_62;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_62 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;62m " << termstylist::FG_Default << this->endBreak;

    if(FG256__62.str() == "\033[38;5;62m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 63
void Test_FGColours256::TEST_FG256_63() {
    std::ostringstream FG256__63;

    FG256__63 << termstylist::FG256_63;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_63 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;63m " << termstylist::FG_Default << this->endBreak;

    if(FG256__63.str() == "\033[38;5;63m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 64
void Test_FGColours256::TEST_FG256_64() {
    std::ostringstream FG256__64;

    FG256__64 << termstylist::FG256_64;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_64 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;64m " << termstylist::FG_Default << this->endBreak;

    if(FG256__64.str() == "\033[38;5;64m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 65
void Test_FGColours256::TEST_FG256_65() {
    std::ostringstream FG256__65;

    FG256__65 << termstylist::FG256_65;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_65 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;65m " << termstylist::FG_Default << this->endBreak;

    if(FG256__65.str() == "\033[38;5;65m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 66
void Test_FGColours256::TEST_FG256_66() {
    std::ostringstream FG256__66;

    FG256__66 << termstylist::FG256_66;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_66 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;66m " << termstylist::FG_Default << this->endBreak;

    if(FG256__66.str() == "\033[38;5;66m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 67
void Test_FGColours256::TEST_FG256_67() {
    std::ostringstream FG256__67;

    FG256__67 << termstylist::FG256_67;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_67 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;67m " << termstylist::FG_Default << this->endBreak;

    if(FG256__67.str() == "\033[38;5;67m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 68
void Test_FGColours256::TEST_FG256_68() {
    std::ostringstream FG256__68;

    FG256__68 << termstylist::FG256_68;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_68 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;68m " << termstylist::FG_Default << this->endBreak;

    if(FG256__68.str() == "\033[38;5;68m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 69
void Test_FGColours256::TEST_FG256_69() {
    std::ostringstream FG256__69;

    FG256__69 << termstylist::FG256_69;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_69 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;69m " << termstylist::FG_Default << this->endBreak;

    if(FG256__69.str() == "\033[38;5;69m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 70
void Test_FGColours256::TEST_FG256_70() {
    std::ostringstream FG256__70;

    FG256__70 << termstylist::FG256_70;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_70 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;70m " << termstylist::FG_Default << this->endBreak;

    if(FG256__70.str() == "\033[38;5;70m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 71
void Test_FGColours256::TEST_FG256_71() {
    std::ostringstream FG256__71;

    FG256__71 << termstylist::FG256_71;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_71 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;71m " << termstylist::FG_Default << this->endBreak;

    if(FG256__71.str() == "\033[38;5;71m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 72
void Test_FGColours256::TEST_FG256_72() {
    std::ostringstream FG256__72;

    FG256__72 << termstylist::FG256_72;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_72 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;72m " << termstylist::FG_Default << this->endBreak;

    if(FG256__72.str() == "\033[38;5;72m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 73
void Test_FGColours256::TEST_FG256_73() {
    std::ostringstream FG256__73;

    FG256__73 << termstylist::FG256_73;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_73 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;73m " << termstylist::FG_Default << this->endBreak;

    if(FG256__73.str() == "\033[38;5;73m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 74
void Test_FGColours256::TEST_FG256_74() {
    std::ostringstream FG256__74;

    FG256__74 << termstylist::FG256_74;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_74 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;74m " << termstylist::FG_Default << this->endBreak;

    if(FG256__74.str() == "\033[38;5;74m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 75
void Test_FGColours256::TEST_FG256_75() {
    std::ostringstream FG256__75;

    FG256__75 << termstylist::FG256_75;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_75 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;75m " << termstylist::FG_Default << this->endBreak;

    if(FG256__75.str() == "\033[38;5;75m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 76
void Test_FGColours256::TEST_FG256_76() {
    std::ostringstream FG256__76;

    FG256__76 << termstylist::FG256_76;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_76 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;76m " << termstylist::FG_Default << this->endBreak;

    if(FG256__76.str() == "\033[38;5;76m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 77
void Test_FGColours256::TEST_FG256_77() {
    std::ostringstream FG256__77;

    FG256__77 << termstylist::FG256_77;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_77 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;77m " << termstylist::FG_Default << this->endBreak;

    if(FG256__77.str() == "\033[38;5;77m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 78
void Test_FGColours256::TEST_FG256_78() {
    std::ostringstream FG256__78;

    FG256__78 << termstylist::FG256_78;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_78 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;78m " << termstylist::FG_Default << this->endBreak;

    if(FG256__78.str() == "\033[38;5;78m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 79
void Test_FGColours256::TEST_FG256_79() {
    std::ostringstream FG256__79;

    FG256__79 << termstylist::FG256_79;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_79 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;79m " << termstylist::FG_Default << this->endBreak;

    if(FG256__79.str() == "\033[38;5;79m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 80
void Test_FGColours256::TEST_FG256_80() {
    std::ostringstream FG256__80;

    FG256__80 << termstylist::FG256_80;
    
    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_80 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;80m " << termstylist::FG_Default << this->endBreak;

    if(FG256__80.str() == "\033[38;5;80m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 81
void Test_FGColours256::TEST_FG256_81() {
    std::ostringstream FG256__81;

    FG256__81 << termstylist::FG256_81;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_81 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;81m " << termstylist::FG_Default << this->endBreak;

    if(FG256__81.str() == "\033[38;5;81m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 82
void Test_FGColours256::TEST_FG256_82() {
    std::ostringstream FG256__82;

    FG256__82 << termstylist::FG256_82;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_82 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;82m " << termstylist::FG_Default << this->endBreak;

    if(FG256__82.str() == "\033[38;5;82m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 83
void Test_FGColours256::TEST_FG256_83() {
    std::ostringstream FG256__83;

    FG256__83 << termstylist::FG256_83;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_83 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;83m " << termstylist::FG_Default << this->endBreak;

    if(FG256__83.str() == "\033[38;5;83m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 84
void Test_FGColours256::TEST_FG256_84() {
    std::ostringstream FG256__84;

    FG256__84 << termstylist::FG256_84;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_84 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;84m " << termstylist::FG_Default << this->endBreak;

    if(FG256__84.str() == "\033[38;5;84m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 85
void Test_FGColours256::TEST_FG256_85() {
    std::ostringstream FG256__85;

    FG256__85 << termstylist::FG256_85;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_85 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;85m " << termstylist::FG_Default << this->endBreak;

    if(FG256__85.str() == "\033[38;5;85m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 86
void Test_FGColours256::TEST_FG256_86() {
    std::ostringstream FG256__86;

    FG256__86 << termstylist::FG256_86;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_86 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;86m " << termstylist::FG_Default << this->endBreak;

    if(FG256__86.str() == "\033[38;5;86m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 87
void Test_FGColours256::TEST_FG256_87() {
    std::ostringstream FG256__87;

    FG256__87 << termstylist::FG256_87;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_87 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;87m " << termstylist::FG_Default << this->endBreak;

    if(FG256__87.str() == "\033[38;5;87m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 88
void Test_FGColours256::TEST_FG256_88() {
    std::ostringstream FG256__88;

    FG256__88 << termstylist::FG256_88;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_88 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;88m " << termstylist::FG_Default << this->endBreak;

    if(FG256__88.str() == "\033[38;5;88m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 89
void Test_FGColours256::TEST_FG256_89() {
    std::ostringstream FG256__89;

    FG256__89 << termstylist::FG256_89;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_89 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;89m " << termstylist::FG_Default << this->endBreak;

    if(FG256__89.str() == "\033[38;5;89m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 90
void Test_FGColours256::TEST_FG256_90() {
    std::ostringstream FG256__90;

    FG256__90 << termstylist::FG256_90;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_90 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;90m " << termstylist::FG_Default << this->endBreak;

    if(FG256__90.str() == "\033[38;5;90m") {
        std::cout << TEST_SUCCESS;
    } else { 
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 91
void Test_FGColours256::TEST_FG256_91() {
    std::ostringstream FG256__91;

    FG256__91 << termstylist::FG256_91;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_91 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;91m " << termstylist::FG_Default << this->endBreak;

    if(FG256__91.str() == "\033[38;5;91m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 92
void Test_FGColours256::TEST_FG256_92() {
    std::ostringstream FG256__92;

    FG256__92 << termstylist::FG256_92;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_92 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;92m " << termstylist::FG_Default << this->endBreak;

    if(FG256__92.str() == "\033[38;5;92m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 93
void Test_FGColours256::TEST_FG256_93() {
    std::ostringstream FG256__93;

    FG256__93 << termstylist::FG256_93;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_93 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;93m " << termstylist::FG_Default << this->endBreak;

    if(FG256__93.str() == "\033[38;5;93m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 94
void Test_FGColours256::TEST_FG256_94() {
    std::ostringstream FG256__94;

    FG256__94 << termstylist::FG256_94;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_94 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;94m " << termstylist::FG_Default << this->endBreak;

    if(FG256__94.str() == "\033[38;5;94m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 95
void Test_FGColours256::TEST_FG256_95() {
    std::ostringstream FG256__95;

    FG256__95 << termstylist::FG256_95;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_95 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;95m " << termstylist::FG_Default << this->endBreak;

    if(FG256__95.str() == "\033[38;5;95m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 96
void Test_FGColours256::TEST_FG256_96() {
    std::ostringstream FG256__96;

    FG256__96 << termstylist::FG256_96;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_96 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;96m " << termstylist::FG_Default << this->endBreak;

    if(FG256__96.str() == "\033[38;5;96m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 97
void Test_FGColours256::TEST_FG256_97() {
    std::ostringstream FG256__97;

    FG256__97 << termstylist::FG256_97;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_97 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;97m " << termstylist::FG_Default << this->endBreak;

    if(FG256__97.str() == "\033[38;5;97m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 98
void Test_FGColours256::TEST_FG256_98() {
    std::ostringstream FG256__98;

    FG256__98 << termstylist::FG256_98;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_98 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;98m " << termstylist::FG_Default << this->endBreak;

    if(FG256__98.str() == "\033[38;5;98m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 99
void Test_FGColours256::TEST_FG256_99() {
    std::ostringstream FG256__99;

    FG256__99 << termstylist::FG256_99;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_99 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;99m " << termstylist::FG_Default << this->endBreak;

    if(FG256__99.str() == "\033[38;5;99m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 100
void Test_FGColours256::TEST_FG256_100() {
    std::ostringstream FG256__100;

    FG256__100 << termstylist::FG256_100;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_100 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;100m " << termstylist::FG_Default << this->endBreak;

    if(FG256__100.str() == "\033[38;5;100m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 101
void Test_FGColours256::TEST_FG256_101() {
    std::ostringstream FG256__101;

    FG256__101 << termstylist::FG256_101;
    
    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_101 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;101m " << termstylist::FG_Default << this->endBreak;

    if(FG256__101.str() == "\033[38;5;101m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 102
void Test_FGColours256::TEST_FG256_102() {
    std::ostringstream FG256__102;

    FG256__102 << termstylist::FG256_102;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_102 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;102m " << termstylist::FG_Default << this->endBreak;

    if(FG256__102.str() == "\033[38;5;102m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 103
void Test_FGColours256::TEST_FG256_103() {
    std::ostringstream FG256__103;

    FG256__103 << termstylist::FG256_103;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_103 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;103m " << termstylist::FG_Default << this->endBreak;

    if(FG256__103.str() == "\033[38;5;103m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 104
void Test_FGColours256::TEST_FG256_104() {
    std::ostringstream FG256__104;

    FG256__104 << termstylist::FG256_104;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_104 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;104m " << termstylist::FG_Default << this->endBreak;

    if(FG256__104.str() == "\033[38;5;104m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 105
void Test_FGColours256::TEST_FG256_105() {
    std::ostringstream FG256__105;

    FG256__105 << termstylist::FG256_105;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_105 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;105m " << termstylist::FG_Default << this->endBreak;

    if(FG256__105.str() == "\033[38;5;105m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 106
void Test_FGColours256::TEST_FG256_106() {
    std::ostringstream FG256__106;

    FG256__106 << termstylist::FG256_106;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_106 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;106m " << termstylist::FG_Default << this->endBreak;

    if(FG256__106.str() == "\033[38;5;106m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 107
void Test_FGColours256::TEST_FG256_107() {
    std::ostringstream FG256__107;

    FG256__107 << termstylist::FG256_107;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_107 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;107m " << termstylist::FG_Default << this->endBreak;

    if(FG256__107.str() == "\033[38;5;107m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 108
void Test_FGColours256::TEST_FG256_108() {
    std::ostringstream FG256__108;

    FG256__108 << termstylist::FG256_108;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_108 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;108m " << termstylist::FG_Default << this->endBreak;

    if(FG256__108.str() == "\033[38;5;108m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 109
void Test_FGColours256::TEST_FG256_109() {
    std::ostringstream FG256__109;

    FG256__109 << termstylist::FG256_109;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_109 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;109m " << termstylist::FG_Default << this->endBreak;

    if(FG256__109.str() == "\033[38;5;109m") { 
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 110
void Test_FGColours256::TEST_FG256_110() {
    std::ostringstream FG256__110;

    FG256__110 << termstylist::FG256_110;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_110 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;110m " << termstylist::FG_Default << this->endBreak;

    if(FG256__110.str() == "\033[38;5;110m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 111
void Test_FGColours256::TEST_FG256_111() {
    std::ostringstream FG256__111;

    FG256__111 << termstylist::FG256_111;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_111 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;111m " << termstylist::FG_Default << this->endBreak;

    if(FG256__111.str() == "\033[38;5;111m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 112
void Test_FGColours256::TEST_FG256_112() {
    std::ostringstream FG256__112;

    FG256__112 << termstylist::FG256_112;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_112 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;112m " << termstylist::FG_Default << this->endBreak;

    if(FG256__112.str() == "\033[38;5;112m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 113
void Test_FGColours256::TEST_FG256_113() {
    std::ostringstream FG256__113;

    FG256__113 << termstylist::FG256_113;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_113 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;113m " << termstylist::FG_Default << this->endBreak;

    if(FG256__113.str() == "\033[38;5;113m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 114
void Test_FGColours256::TEST_FG256_114() {
    std::ostringstream FG256__114;

    FG256__114 << termstylist::FG256_114;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_114 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;114m " << termstylist::FG_Default << this->endBreak;

    if(FG256__114.str() == "\033[38;5;114m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 115
void Test_FGColours256::TEST_FG256_115() {
    std::ostringstream FG256__115;

    FG256__115 << termstylist::FG256_115;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_115 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;115m " << termstylist::FG_Default << this->endBreak;

    if(FG256__115.str() == "\033[38;5;115m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 116
void Test_FGColours256::TEST_FG256_116() {
    std::ostringstream FG256__116;

    FG256__116 << termstylist::FG256_116;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_116 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;116m " << termstylist::FG_Default << this->endBreak;

    if(FG256__116.str() == "\033[38;5;116m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 117
void Test_FGColours256::TEST_FG256_117() {
    std::ostringstream FG256__117;

    FG256__117 << termstylist::FG256_117;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_117 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;117m " << termstylist::FG_Default << this->endBreak;

    if(FG256__117.str() == "\033[38;5;117m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 118
void Test_FGColours256::TEST_FG256_118() {
    std::ostringstream FG256__118;

    FG256__118 << termstylist::FG256_118;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_118 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;118m " << termstylist::FG_Default << this->endBreak;

    if(FG256__118.str() == "\033[38;5;118m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 119
void Test_FGColours256::TEST_FG256_119() {
    std::ostringstream FG256__119;

    FG256__119 << termstylist::FG256_119;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_119 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;119m " << termstylist::FG_Default << this->endBreak;

    if(FG256__119.str() == "\033[38;5;119m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 120
void Test_FGColours256::TEST_FG256_120() {
    std::ostringstream FG256__120;

    FG256__120 << termstylist::FG256_120;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_120 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;120m " << termstylist::FG_Default << this->endBreak;

    if(FG256__120.str() == "\033[38;5;120m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 121
void Test_FGColours256::TEST_FG256_121() {
    std::ostringstream FG256__121;

    FG256__121 << termstylist::FG256_121;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_121 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;121m " << termstylist::FG_Default << this->endBreak;;

    if(FG256__121.str() == "\033[38;5;121m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 122
void Test_FGColours256::TEST_FG256_122() {
    std::ostringstream FG256__122;

    FG256__122 << termstylist::FG256_122;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_122 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;122m " << termstylist::FG_Default << this->endBreak;

    if(FG256__122.str() == "\033[38;5;122m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 123
void Test_FGColours256::TEST_FG256_123() {
    std::ostringstream FG256__123;

    FG256__123 << termstylist::FG256_123;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_123 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;123m " << termstylist::FG_Default << this->endBreak;

    if(FG256__123.str() == "\033[38;5;123m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 124
void Test_FGColours256::TEST_FG256_124() {
    std::ostringstream FG256__124;

    FG256__124 << termstylist::FG256_124;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_124 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;124m " << termstylist::FG_Default << this->endBreak;

    if(FG256__124.str() == "\033[38;5;124m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cout << TEST_FAILURE;
    }
}

//test: fg256 125
void Test_FGColours256::TEST_FG256_125() {
    std::ostringstream FG256__125;

    FG256__125 << termstylist::FG256_125;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_125 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;125m " << termstylist::FG_Default << this->endBreak;

    if(FG256__125.str() == "\033[38;5;125m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 126
void Test_FGColours256::TEST_FG256_126() {
    std::ostringstream FG256__126;

    FG256__126 << termstylist::FG256_126;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_127 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;126m " << termstylist::FG_Default << this->endBreak;

    if(FG256__126.str() == "\033[38;5;126m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 127
void Test_FGColours256::TEST_FG256_127() {
    std::ostringstream FG256__127;

    FG256__127 << termstylist::FG256_127;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_127 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;127m " << termstylist::FG_Default << this->endBreak;

    if(FG256__127.str() == "\033[38;5;127m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 128
void Test_FGColours256::TEST_FG256_128() {
    std::ostringstream FG256__128;

    FG256__128 << termstylist::FG256_128;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_128 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;128m " << termstylist::FG_Default << this->endBreak;

    if(FG256__128.str() == "\033[38;5;128m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 129
void Test_FGColours256::TEST_FG256_129() {
    std::ostringstream FG256__129;

    FG256__129 << termstylist::FG256_129;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_129 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;129m " << termstylist::FG_Default << this->endBreak;

    if(FG256__129.str() == "\033[38;5;129m") {
        std::cout << TEST_SUCCESS; 
    } else {
        std::cerr << TEST_FAILURE;
    }
}

//test: fg256 130
void Test_FGColours256::TEST_FG256_130() {
    std::ostringstream FG256__130;

    FG256__130 << termstylist::FG256_130;

    std::cout << termstylist::FG_LightYellow << "termstylist::FG256_130 " << termstylist::FG_Default << this->shouldEqual << termstylist::FG_LightYellow << "\\033[38;5;130m " << termstylist::FG_Default << this->endBreak;

    if(FG256__130.str() == "\033[38;5;130m") {
        std::cout << TEST_SUCCESS;
    } else {
        std::cerr << TEST_FAILURE;
    }
}

int main() {
    Test_Attributes T_ATTRS;

    T_ATTRS.TEST_ATTRS_TITLE();
    T_ATTRS.TEST_ATTRS_BOLD();
    T_ATTRS.TEST_ATTRS_DIM();
    T_ATTRS.TEST_ATTRS_UNDERLINE();
    T_ATTRS.TEST_ATTRS_REVERSE();

    Test_Reset T_RESET;

    T_RESET.TEST_RESET_TITLE();
    T_RESET.TEST_RESET_DEFAULT();
    T_RESET.TEST_RESET_BOLD();
    T_RESET.TEST_RESET_UNDERLINE();
    T_RESET.TEST_RESET_REVERSE();

    Test_FGColours816 T_FGC_816;

    T_FGC_816.TEST_FGCOLOURS816_TITLE();
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

    Test_BGColours816 T_BGC_816;

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
    T_BGC_816.TEST_BG_BOLDBLACK();
    T_BGC_816.TEST_BG_BOLDRED();
    T_BGC_816.TEST_BG_BOLDGREEN();
    T_BGC_816.TEST_BG_BOLDYELLOW();
    T_BGC_816.TEST_BG_BOLDBLUE();
    T_BGC_816.TEST_BG_BOLDMAGENTA();
    T_BGC_816.TEST_BG_BOLDCYAN();
    T_BGC_816.TEST_BG_BOLDWHITE();
    T_BGC_816.TEST_BG_BOLDDARKGREY();
    T_BGC_816.TEST_BG_BOLDLIGHTRED();
    T_BGC_816.TEST_BG_BOLDLIGHTGREEN();
    T_BGC_816.TEST_BG_BOLDLIGHTYELLOW();
    T_BGC_816.TEST_BG_BOLDLIGHTBLUE();
    T_BGC_816.TEST_BG_BOLDLIGHTMAGENTA();
    T_BGC_816.TEST_BG_BOLDLIGHTCYAN();

    Test_FGColours256 T_FGC_256;

    T_FGC_256.TEST_FGCOLOURS256_TITLE();
    T_FGC_256.TEST_FG256_0();
    T_FGC_256.TEST_FG256_1();
    T_FGC_256.TEST_FG256_2();
    T_FGC_256.TEST_FG256_3();
    T_FGC_256.TEST_FG256_4();
    T_FGC_256.TEST_FG256_5();
    T_FGC_256.TEST_FG256_6();
    T_FGC_256.TEST_FG256_7();
    T_FGC_256.TEST_FG256_8();
    T_FGC_256.TEST_FG256_9();
    T_FGC_256.TEST_FG256_10();
    T_FGC_256.TEST_FG256_11();
    T_FGC_256.TEST_FG256_12(); 
    T_FGC_256.TEST_FG256_13();
    T_FGC_256.TEST_FG256_14();
    T_FGC_256.TEST_FG256_15();
    T_FGC_256.TEST_FG256_16();
    T_FGC_256.TEST_FG256_17();
    T_FGC_256.TEST_FG256_18();
    T_FGC_256.TEST_FG256_19();
    T_FGC_256.TEST_FG256_20();
    T_FGC_256.TEST_FG256_21();
    T_FGC_256.TEST_FG256_22();
    T_FGC_256.TEST_FG256_23();
    T_FGC_256.TEST_FG256_24(); 
    T_FGC_256.TEST_FG256_25();
    T_FGC_256.TEST_FG256_26();
    T_FGC_256.TEST_FG256_27();
    T_FGC_256.TEST_FG256_28();
    T_FGC_256.TEST_FG256_29();
    T_FGC_256.TEST_FG256_30();
    T_FGC_256.TEST_FG256_31();
    T_FGC_256.TEST_FG256_32();
    T_FGC_256.TEST_FG256_33();
    T_FGC_256.TEST_FG256_34();
    T_FGC_256.TEST_FG256_35();
    T_FGC_256.TEST_FG256_36();
    T_FGC_256.TEST_FG256_37();
    T_FGC_256.TEST_FG256_38();
    T_FGC_256.TEST_FG256_39();
    T_FGC_256.TEST_FG256_40();
    T_FGC_256.TEST_FG256_41();
    T_FGC_256.TEST_FG256_42();
    T_FGC_256.TEST_FG256_43();
    T_FGC_256.TEST_FG256_44();
    T_FGC_256.TEST_FG256_45();
    T_FGC_256.TEST_FG256_46();
    T_FGC_256.TEST_FG256_47();
    T_FGC_256.TEST_FG256_48();
    T_FGC_256.TEST_FG256_49();
    T_FGC_256.TEST_FG256_50();
    T_FGC_256.TEST_FG256_51();
    T_FGC_256.TEST_FG256_52();
    T_FGC_256.TEST_FG256_53();
    T_FGC_256.TEST_FG256_54();
    T_FGC_256.TEST_FG256_55();
    T_FGC_256.TEST_FG256_56();
    T_FGC_256.TEST_FG256_57();
    T_FGC_256.TEST_FG256_58();
    T_FGC_256.TEST_FG256_59();
    T_FGC_256.TEST_FG256_60();
    T_FGC_256.TEST_FG256_61();
    T_FGC_256.TEST_FG256_62();
    T_FGC_256.TEST_FG256_63();
    T_FGC_256.TEST_FG256_64();
    T_FGC_256.TEST_FG256_65();
    T_FGC_256.TEST_FG256_66();
    T_FGC_256.TEST_FG256_67();
    T_FGC_256.TEST_FG256_68();
    T_FGC_256.TEST_FG256_69();
    T_FGC_256.TEST_FG256_70();
    T_FGC_256.TEST_FG256_71();
    T_FGC_256.TEST_FG256_72();
    T_FGC_256.TEST_FG256_73();
    T_FGC_256.TEST_FG256_74();
    T_FGC_256.TEST_FG256_75();
    T_FGC_256.TEST_FG256_76();
    T_FGC_256.TEST_FG256_77();
    T_FGC_256.TEST_FG256_78();
    T_FGC_256.TEST_FG256_79();
    T_FGC_256.TEST_FG256_80();
    T_FGC_256.TEST_FG256_81();
    T_FGC_256.TEST_FG256_82();
    T_FGC_256.TEST_FG256_83();
    T_FGC_256.TEST_FG256_84();
    T_FGC_256.TEST_FG256_85();
    T_FGC_256.TEST_FG256_86();
    T_FGC_256.TEST_FG256_87();
    T_FGC_256.TEST_FG256_88();
    T_FGC_256.TEST_FG256_89();
    T_FGC_256.TEST_FG256_90();
    T_FGC_256.TEST_FG256_91();
    T_FGC_256.TEST_FG256_92();
    T_FGC_256.TEST_FG256_93();
    T_FGC_256.TEST_FG256_94();
    T_FGC_256.TEST_FG256_95();
    T_FGC_256.TEST_FG256_96();
    T_FGC_256.TEST_FG256_97();
    T_FGC_256.TEST_FG256_98();
    T_FGC_256.TEST_FG256_99();
    T_FGC_256.TEST_FG256_100();
    T_FGC_256.TEST_FG256_101();
    T_FGC_256.TEST_FG256_102();
    T_FGC_256.TEST_FG256_103();
    T_FGC_256.TEST_FG256_104();
    T_FGC_256.TEST_FG256_105();
    T_FGC_256.TEST_FG256_106();
    T_FGC_256.TEST_FG256_107();
    T_FGC_256.TEST_FG256_108();
    T_FGC_256.TEST_FG256_109();
    T_FGC_256.TEST_FG256_110();
    T_FGC_256.TEST_FG256_111();
    T_FGC_256.TEST_FG256_112();
    T_FGC_256.TEST_FG256_113();
    T_FGC_256.TEST_FG256_114();
    T_FGC_256.TEST_FG256_115();
    T_FGC_256.TEST_FG256_116();
    T_FGC_256.TEST_FG256_117();
    T_FGC_256.TEST_FG256_118();
    T_FGC_256.TEST_FG256_119();
    T_FGC_256.TEST_FG256_120();
    T_FGC_256.TEST_FG256_121();
    T_FGC_256.TEST_FG256_122();
    T_FGC_256.TEST_FG256_123();
    T_FGC_256.TEST_FG256_124();
    T_FGC_256.TEST_FG256_125();
    T_FGC_256.TEST_FG256_126();
    T_FGC_256.TEST_FG256_127();
    T_FGC_256.TEST_FG256_128();
    T_FGC_256.TEST_FG256_129();
    T_FGC_256.TEST_FG256_130();
    
    return 0;
}