#ifndef TERMSTYLIST_H
#define TERMSTYLIST_H

#include <ostream>
#include <string>

namespace termstylist {
    //attributes
    struct Attributes {
        public:
            const std::string ATTR_Bold = "\033[1m"; //1
            const std::string ATTR_Underline = "\033[4m"; //4
            const std::string ATTR_Reverse = "\033[7m"; //7
    };

    //reset
    struct Reset {
        public:
            const std::string RESET_All = "\033[0m"; //0
            const std::string RESET_Bold = "\033[21m"; //21
            const std::string RESET_Underline = "\033[24m"; //24
            const std::string RESET_Reverse = "\033[27m"; //27
    };

    //foreground colours - 8/16 colours (normal, light, bright/bold)
    struct FGColours816 {
        public:
            //8 colours
            const std::string FG_Default = "\033[39m"; //39
            const std::string FG_Black = "\033[30m"; //30
            const std::string FG_Red = "\033[31m"; //31
            const std::string FG_Green = "\033[32m"; //32
            const std::string FG_Yellow = "\033[33m"; //33
            const std::string FG_Blue = "\033[34m"; //34
            const std::string FG_Magenta = "\033[35m"; //35
            const std::string FG_Cyan = "\033[36m"; //36
            const std::string FG_White = "\033[97m"; //97
            const std::string FG_LightGrey = "\033[37m"; //37
            const std::string FG_DarkGrey = "\033[90m"; //90
            const std::string FG_LightRed = "\033[91m"; //91
            const std::string FG_LightGreen = "\033[92m"; //92
            const std::string FG_LightYellow = "\033[93m"; //93
            const std::string FG_LightBlue = "\033[94m"; //94
            const std::string FG_LightMagenta = "\033[95m"; //95
            const std::string FG_LightCyan = "\033[96m"; //96

            //16 colours
            const std::string FG_BoldBlack = "\033[30;1m"; //30;1
            const std::string FG_BoldRed = "\033[31;1m"; //31;1
            const std::string FG_BoldGreen = "\033[32;1m"; //32;1
            const std::string FG_BoldYellow = "\033[33;1m"; //33;1
            const std::string FG_BoldBlue = "\033[34;1m"; //34;1
            const std::string FG_BoldMagenta = "\033[35;1m"; //35;1
            const std::string FG_BoldCyan = "\033[36;1m"; //36;1
            const std::string FG_BoldWhite = "\033[97;1m"; //97;1
            const std::string FG_BoldLightGrey = "\033[37;1m"; //37;1
            const std::string FG_BoldDarkGrey = "\033[90;1m"; //90;1
            const std::string FG_BoldLightRed = "\033[91;1m"; //91;1
            const std::string FG_BoldLightGreen = "\033[92;1m"; //92;1
            const std::string FG_BoldLightYellow = "\033[93;1m"; //93;1
            const std::string FG_BoldLightBlue = "\033[94;1m"; //94;1
            const std::string FG_BoldLightMagenta = "\033[95;1m"; //95;1
            const std::string FG_BoldLightCyan = "\033[96;1m"; //96;1
    };

    //background colours - 8/16 colours (normal)
    struct BGColours816 {
        public:
            //8 colours
            const std::string BG_Default = "\033[49m"; //49
            const std::string BG_Black = "\033[40m"; //40
            const std::string BG_Red = "\033[41m"; //41
            const std::string BG_Green = "\033[42m"; //42
            const std::string BG_Yellow = "\033[43m"; //43
            const std::string BG_Blue = "\033[44m"; //44
            const std::string BG_Magenta = "\033[45m"; //45
            const std::string BG_Cyan = "\033[46m"; //46
            const std::string BG_White = "\033[107m"; //107
            const std::string BG_LightGrey = "\033[47m"; //47
            const std::string BG_DarkGrey = "\033[100m"; //100
            const std::string BG_LightRed = "\033[101m"; //101
            const std::string BG_LightGreen = "\033[102m"; //102 
            const std::string BG_LightYellow = "\033[103m"; //103
            const std::string BG_LightBlue = "\033[104m"; //104
            const std::string BG_LightMagenta = "\033[105m"; //105
            const std::string BG_LightCyan = "\033[106m"; //106

            //16 colours
            const std::string BG_BoldBlack = "\033[40;1m"; //40;1
            const std::string BG_BoldRed = "\033[41;1m"; //41;1
            const std::string BG_BoldGreen = "\033[42;1m"; //42;1
            const std::string BG_BoldYellow = "\033[43;1m"; //43;1
            const std::string BG_BoldBlue = "\033[44;1m"; //44;1
            const std::string BG_BoldMagenta = "\033[45;1m"; //45;1
            const std::string BG_BoldCyan = "\033[46;1m"; //46;1
            const std::string BG_BoldWhite = "\033[107;1m"; //107;1
            const std::string BG_BoldLightGrey = "\033[47;1m"; //47;1
            const std::string BG_BoldDarkGrey = "\033[100;1m"; //100;1
            const std::string BG_BoldLightRed = "\033[101;1m"; //101;1
            const std::string BG_BoldLightGreen = "\033[102;1m"; //102;1
            const std::string BG_BoldLightYellow = "\033[103;1m"; //103;1
            const std::string BG_BoldLightBlue = "\033[104;1m"; //104;1
            const std::string BG_BoldLightMagenta = "\033[105;1m"; //105;1
            const std::string BG_BoldLightCyan = "\033[106;1m"; //106;1
    };

    //namespace obj holds created objects from structs
    //this is here as an extra layer to "prevent" access of the struct members directly
    //NOTE: namespace obj is not meant for use outside of namespace termstylist
    namespace obj {
        //object ATTRS of Attributes struct
        Attributes ATTRS;

        //object RESET of Reset struct
        Reset RESET;

        //object FG816 of FGColours816 struct
        FGColours816 FG816;

        //object BG816 of BGColours816 struct
        BGColours816 BG816;
    }

    /* * * ATTRIBUTES * * */

    //1: attr bold
    template<typename ATTRBold>
    std::basic_ostream<ATTRBold> & ATTR_Bold(std::basic_ostream<ATTRBold> &os) {
        os << obj::ATTRS.ATTR_Bold;

        return os;
    }

    //4: attr underline
    template<typename ATTRUnderline>
    std::basic_ostream<ATTRUnderline> & ATTR_Underline(std::basic_ostream<ATTRUnderline> &os) {
        os << obj::ATTRS.ATTR_Underline;

        return os;
    }

    //7: attr reverse
    template<typename ATTRReverse>
    std::basic_ostream<ATTRReverse> & ATTR_Reverse(std::basic_ostream<ATTRReverse> &os) {
        os << obj::ATTRS.ATTR_Reverse;

        return os;
    }

    /* * * RESET * * */

    //0: reset all
    template<typename RESETAll>
    std::basic_ostream<RESETAll> & RESET_All(std::basic_ostream<RESETAll> &os) {
        os << obj::RESET.RESET_All;

        return os;
    }

    //21: reset bold
    template<typename RESETBold>
    std::basic_ostream<RESETBold> & RESET_Bold(std::basic_ostream<RESETBold> &os) {
        os << obj::RESET.RESET_Bold;

        return os;
    }

    //24: reset underline
    template<typename RESETUnderline>
    std::basic_ostream<RESETUnderline> & RESET_Underline(std::basic_ostream<RESETUnderline> &os) {
        os << obj::RESET.RESET_Underline;

        return os;
    }

    //27: reset reverse
    template<typename RESETReverse>
    std::basic_ostream<RESETReverse> & RESET_Reverse(std::basic_ostream<RESETReverse> &os) {
        os << obj::RESET.RESET_Reverse;

        return os;
    }

    /* * * FOREGROUND COLOUR TEMPLATES (8 COLOURS) * * */

    //39: fg default
    template<typename FGDefault>
    std::basic_ostream<FGDefault> & FG_Default(std::basic_ostream<FGDefault> &os) {
        os << obj::FG816.FG_Default;

        return os;
    }

    //30: fg black
    template<typename FGBlack>
    std::basic_ostream<FGBlack> & FG_Black(std::basic_ostream<FGBlack> &os) {
        os << obj::FG816.FG_Black;

        return os;
    }

    //31: fg red
    template<typename FGRed>
    std::basic_ostream<FGRed> & FG_Red(std::basic_ostream<FGRed> &os) {
        os << obj::FG816.FG_Red;

        return os;
    }

    //32: fg green
    template<typename FGGreen>
    std::basic_ostream<FGGreen> & FG_Green(std::basic_ostream<FGGreen> &os) {
        os << obj::FG816.FG_Green;

        return os;
    }

    //33: fg yellow
    template<typename FGYellow>
    std::basic_ostream<FGYellow> & FG_Yellow(std::basic_ostream<FGYellow> &os) {
        os << obj::FG816.FG_Yellow;

        return os;
    }

    //34: fg blue
    template<typename FGBlue>
    std::basic_ostream<FGBlue> & FG_Blue(std::basic_ostream<FGBlue> &os) {
        os << obj::FG816.FG_Blue;

        return os;
    }

    //35: fg magenta
    template<typename FGMagenta>
    std::basic_ostream<FGMagenta> & FG_Magenta(std::basic_ostream<FGMagenta> &os) {
        os << obj::FG816.FG_Magenta;

        return os;
    }

    //36: fg cyan
    template<typename FGCyan>
    std::basic_ostream<FGCyan> & FG_Cyan(std::basic_ostream<FGCyan> &os) {
        os << obj::FG816.FG_Cyan;

        return os;
    }

    //97: fg white
    template<typename FGWhite>
    std::basic_ostream<FGWhite> & FG_White(std::basic_ostream<FGWhite> &os) {
        os << obj::FG816.FG_White;

        return os;
    }

    //37: fg light grey
    template<class FGLightGrey>
    std::basic_ostream<FGLightGrey> & FG_LightGrey(std::basic_ostream<FGLightGrey> &os) {
        os << obj::FG816.FG_LightGrey;

        return os;
    }

    //90: fg dark grey
    template<typename FGDarkGrey>
    std::basic_ostream<FGDarkGrey> & FG_DarkGrey(std::basic_ostream<FGDarkGrey> &os) {
        os << obj::FG816.FG_DarkGrey;

        return os;
    }

    //91: fg light red
    template<typename FGLightRed>
    std::basic_ostream<FGLightRed> & FG_LightRed(std::basic_ostream<FGLightRed> &os) {
        os << obj::FG816.FG_LightRed;

        return os;
    }

    //92: fg light green
    template<typename FGLightGreen>
    std::basic_ostream<FGLightGreen> & FG_LightGreen(std::basic_ostream<FGLightGreen> &os) {
        os << obj::FG816.FG_LightGreen;

        return os;
    }

    //93: fg light yellow
    template<typename FGLightYellow>
    std::basic_ostream<FGLightYellow> & FG_LightYellow(std::basic_ostream<FGLightYellow> &os) {
        os << obj::FG816.FG_LightYellow;

        return os;
    }

    //94: fg light blue
    template<typename FGLightBlue>
    std::basic_ostream<FGLightBlue> & FG_LightBlue(std::basic_ostream<FGLightBlue> &os) {
        os << obj::FG816.FG_LightBlue;

        return os;
    }

    //95: fg light magenta
    template<typename FGLightMagenta>
    std::basic_ostream<FGLightMagenta> & FG_LightMagenta(std::basic_ostream<FGLightMagenta> &os) {
        os << obj::FG816.FG_LightMagenta;

        return os;
    }

    //96: fg light cyan
    template<typename FGLightCyan>
    std::basic_ostream<FGLightCyan> & FG_LightCyan(std::basic_ostream<FGLightCyan> &os) {
        os << obj::FG816.FG_LightCyan;

        return os;
    }

    /* * * FOREGROUND COLOUR TEMPLATES (16 COLOURS) * * */

    //30;1: fg bold black
    template<typename FGBoldBlack>
    std::basic_ostream<FGBoldBlack> & FG_BoldBlack(std::basic_ostream<FGBoldBlack> &os) {
        os << obj::FG816.FG_BoldBlack;

        return os;
    }

    //31;1: fg bold red
    template<typename FGBoldRed>
    std::basic_ostream<FGBoldRed> & FG_BoldRed(std::basic_ostream<FGBoldRed> &os) {
        os << obj::FG816.FG_BoldRed;

        return os;
    }

    //32;1: fg bold green
    template<typename FGBoldGreen>
    std::basic_ostream<FGBoldGreen> & FG_BoldGreen(std::basic_ostream<FGBoldGreen> &os) {
        os << obj::FG816.FG_BoldGreen;

        return os;
    }

    //33;1: fg bold yellow
    template<typename FGBoldYellow>
    std::basic_ostream<FGBoldYellow> & FG_BoldYellow(std::basic_ostream<FGBoldYellow> &os) {
        os << obj::FG816.FG_BoldYellow;
        
        return os;
    }

    //34;1: fg bold blue
    template<typename FGBoldBlue>
    std::basic_ostream<FGBoldBlue> & FG_BoldBlue(std::basic_ostream<FGBoldBlue> &os) {
        os << obj::FG816.FG_BoldBlue;

        return os;
    }

    //35;1: fg bold magenta
    template<typename FGBoldMagenta>
    std::basic_ostream<FGBoldMagenta> & FG_BoldMagenta(std::basic_ostream<FGBoldMagenta> &os) {
        os << obj::FG816.FG_BoldMagenta;

        return os;
    }

    //36;1: fg bold cyan
    template<typename FGBoldCyan>
    std::basic_ostream<FGBoldCyan> & FG_BoldCyan(std::basic_ostream<FGBoldCyan> &os) {
        os << obj::FG816.FG_BoldCyan;

        return os;
    }

    //97;1: fg bold white
    template<typename FGBoldWhite>
    std::basic_ostream<FGBoldWhite> & FG_BoldWhite(std::basic_ostream<FGBoldWhite> &os) {
        os << obj::FG816.FG_BoldWhite;

        return os;
    }

    //37;1: fg bold light grey
    template<typename FGBoldLightGrey>
    std::basic_ostream<FGBoldLightGrey> & FG_BoldLightGrey(std::basic_ostream<FGBoldLightGrey> &os) {
        os << obj::FG816.FG_BoldLightGrey;
        
        return os;
    }

    //90;1: fg bold dark grey
    template<typename FGBoldDarkGrey>
    std::basic_ostream<FGBoldDarkGrey> & FG_BoldDarkGrey(std::basic_ostream<FGBoldDarkGrey> &os) {
        os << obj::FG816.FG_BoldDarkGrey;

        return os;
    }

    //91;1 fg bold light red
    template<typename FGBoldLightRed>
    std::basic_ostream<FGBoldLightRed> & FG_BoldLightRed(std::basic_ostream<FGBoldLightRed> &os) {
        os << obj::FG816.FG_BoldLightRed;

        return os;
    }

    //92;1: fg bold light green
    template<typename FGBoldLightGreen>
    std::basic_ostream<FGBoldLightGreen> & FG_BoldLightGreen(std::basic_ostream<FGBoldLightGreen> &os) {
        os << obj::FG816.FG_BoldLightGreen;

        return os;
    }

    //93;1: fg bold light yellow
    template<typename FGBoldLightYellow>
    std::basic_ostream<FGBoldLightYellow> & FG_BoldLightYellow(std::basic_ostream<FGBoldLightYellow> &os) {
        os << obj::FG816.FG_BoldLightYellow;

        return os;
    }

    //94;1: fg bold light blue
    template<typename FGBoldLightBlue>
    std::basic_ostream<FGBoldLightBlue> & FG_BoldLightBlue(std::basic_ostream<FGBoldLightBlue> &os) {
        os << obj::FG816.FG_BoldLightBlue;

        return os;
    }

    //95;1: fg bold light magenta
    template<typename FGBoldLightMagenta>
    std::basic_ostream<FGBoldLightMagenta> & FG_BoldLightMagenta(std::basic_ostream<FGBoldLightMagenta> &os) {
        os << obj::FG816.FG_BoldLightMagenta;

        return os;
    }

    //96;1: fg bold light cyan
    template<typename FGBoldLightCyan>
    std::basic_ostream<FGBoldLightCyan> & FG_BoldLightCyan(std::basic_ostream<FGBoldLightCyan> &os) {
        os << obj::FG816.FG_BoldLightCyan;

        return os;
    }

    /* * * BACKGROUND COLOUR TEMPLATES (8 COLOURS) * * */

    //49: bg default
    template<typename BGDefault>
    std::basic_ostream<BGDefault> & BG_Default(std::basic_ostream<BGDefault> &os) {
        os << obj::BG816.BG_Default;

        return os;
    }

    //40: bg black
    template<typename BGBlack>
    std::basic_ostream<BGBlack> & BG_Black(std::basic_ostream<BGBlack> &os) {
        os << obj::BG816.BG_Black;

        return os;
    }

    //41: bg red
    template<typename BGRed>
    std::basic_ostream<BGRed> & BG_Red(std::basic_ostream<BGRed> &os) {
        os << obj::BG816.BG_Red;

        return os;
    }

    //42: bg green
    template<typename BGGreen>
    std::basic_ostream<BGGreen> & BG_Green(std::basic_ostream<BGGreen> &os) {
        os << obj::BG816.BG_Green;

        return os;
    }

    //43: bg yellow
    template<typename BGYellow>
    std::basic_ostream<BGYellow> & BG_Yellow(std::basic_ostream<BGYellow> &os) {
        os << obj::BG816.BG_Yellow;

        return os;
    }

    //44: bg blue
    template<typename BGBlue>
    std::basic_ostream<BGBlue> & BG_Blue(std::basic_ostream<BGBlue> &os) {
        os << obj::BG816.BG_Blue;

        return os;
    }

    //45: bg magenta
    template<typename BGMagenta>
    std::basic_ostream<BGMagenta> & BG_Magenta(std::basic_ostream<BGMagenta> &os) {
        os << obj::BG816.BG_Magenta;

        return os;
    }

    //46: bg cyan
    template<typename BGCyan>
    std::basic_ostream<BGCyan> & BG_Cyan(std::basic_ostream<BGCyan> &os) {
        os << obj::BG816.BG_Cyan;

        return os;
    }

    //107: bg white
    template<typename BGWhite>
    std::basic_ostream<BGWhite> & BG_White(std::basic_ostream<BGWhite> &os) {
        os << obj::BG816.BG_White;

        return os;
    }

    //47: bg light grey
    template<typename BGLightGrey>
    std::basic_ostream<BGLightGrey> & BG_LightGrey(std::basic_ostream<BGLightGrey> &os) {
        os << obj::BG816.BG_LightGrey;

        return os;
    }

    //100: bg dark grey
    template<typename BGDarkGrey>
    std::basic_ostream<BGDarkGrey> & BG_DarkGrey(std::basic_ostream<BGDarkGrey> &os) {
        os << obj::BG816.BG_DarkGrey;

        return os;
    }

    //101: bg light red
    template<typename BGLightRed>
    std::basic_ostream<BGLightRed> & BG_LightRed(std::basic_ostream<BGLightRed> &os) {
        os << obj::BG816.BG_LightRed;

        return os;
    }

    //102: bg light green
    template<typename BGLightGreen>
    std::basic_ostream<BGLightGreen> & BG_LightGreen(std::basic_ostream<BGLightGreen> &os) {
        os << obj::BG816.BG_LightGreen;

        return os;
    }

    //103: bg light yellow
    template <typename BGLightYellow>
    std::basic_ostream<BGLightYellow> & BG_LightYellow(std::basic_ostream<BGLightYellow> &os) {
        os << obj::BG816.BG_LightYellow;

        return os;
    }

    //104: bg light blue
    template<typename BGLightBlue>
    std::basic_ostream<BGLightBlue> & BG_LightBlue(std::basic_ostream<BGLightBlue> &os) {
        os << obj::BG816.BG_LightBlue;

        return os;
    }

    //105: bg light magenta
    template<typename BGLightMagenta>
    std::basic_ostream<BGLightMagenta> & BG_LightMagenta(std::basic_ostream<BGLightMagenta> &os) {
        os << obj::BG816.BG_LightMagenta;

        return os;
    }

    //106: bg light cyan
    template<typename BGLightCyan>
    std::basic_ostream<BGLightCyan> & BG_LightCyan(std::basic_ostream<BGLightCyan> &os) {
        os << obj::BG816.BG_LightCyan;

        return os;
    }

    /* * * BACKGROUND COLOUR TEMPLATES (16 COLOURS) * * */

    //40;1: bg bold black
    template<typename BGBoldBlack>
    std::basic_ostream<BGBoldBlack> & BG_BoldBlack(std::basic_ostream<BGBoldBlack> &os) {
        os << obj::BG816.BG_BoldBlack;

        return os;
    }

    //41;1: bg bold red
    template<typename BGBoldRed>
    std::basic_ostream<BGBoldRed> & BG_BoldRed(std::basic_ostream<BGBoldRed> &os) {
        os << obj::BG816.BG_BoldRed;

        return os;
    }

    //42;1: bg bold green
    template<typename BGBoldGreen>
    std::basic_ostream<BGBoldGreen> & BG_BoldGreen(std::basic_ostream<BGBoldGreen> &os) {
        os << obj::BG816.BG_BoldGreen;

        return os;
    }

    //43;1: bg bold yellow
    template<typename BGBoldYellow>
    std::basic_ostream<BGBoldYellow> & BG_BoldYellow(std::basic_ostream<BGBoldYellow> &os) {
        os << obj::BG816.BG_BoldYellow;

        return os;
    }

    //44;1: bg bold blue
    template<typename BGBoldBlue>
    std::basic_ostream<BGBoldBlue> & BG_BoldBlue(std::basic_ostream<BGBoldBlue> &os) {
        os << obj::BG816.BG_BoldBlue;

        return os;
    }

    //45;1: bg bold magenta
    template<typename BGBoldMagenta>
    std::basic_ostream<BGBoldMagenta> & BG_BoldMagenta(std::basic_ostream<BGBoldMagenta> &os) {
        os << obj::BG816.BG_BoldMagenta;

        return os;
    }
    
    //46;1: bg bold cyan
    template<typename BGBoldCyan>
    std::basic_ostream<BGBoldCyan> & BG_BoldCyan(std::basic_ostream<BGBoldCyan> &os) {
        os << obj::BG816.BG_BoldCyan;

        return os;
    }

    //107;1: bg bold white
    template<typename BGBoldWhite>
    std::basic_ostream<BGBoldWhite> & BG_BoldWhite(std::basic_ostream<BGBoldWhite> &os) {
        os << obj::BG816.BG_BoldWhite;

        return os;
    }

    //47;1: bg bold light grey
    template<typename BGBoldLightGrey>
    std::basic_ostream<BGBoldLightGrey> & BG_BoldLightGrey(std::basic_ostream<BGBoldLightGrey> &os) {
        os << obj::BG816.BG_BoldLightGrey;

        return os;
    }

    //100;1: bg bold dark grey
    template<typename BGBoldDarkGrey>
    std::basic_ostream<BGBoldDarkGrey> & BG_BoldDarkGrey(std::basic_ostream<BGBoldDarkGrey> &os) {
        os << obj::BG816.BG_BoldDarkGrey;

        return os;
    }

    //101;1: bg bold light red
    template<typename BGBoldLightRed>
    std::basic_ostream<BGBoldLightRed> & BG_BoldLightRed(std::basic_ostream<BGBoldLightRed> &os) {
        os << obj::BG816.BG_BoldLightRed;

        return os;
    }
    
    //102;1: bg bold light green
    template<typename BGBoldLightGreen>
    std::basic_ostream<BGBoldLightGreen> & BG_BoldLightGreen(std::basic_ostream<BGBoldLightGreen> &os) {
        os << obj::BG816.BG_BoldLightGreen;

        return os;
    }

    //103;1: bg bold light yellow
    template<typename BGBoldLightYellow>
    std::basic_ostream<BGBoldLightYellow> & BG_BoldLightYellow(std::basic_ostream<BGBoldLightYellow> &os) {
        os << obj::BG816.BG_BoldLightYellow;

        return os;
    }

    //104;1: bg bold light blue
    template<typename BGLightBlue>
    std::basic_ostream<BGLightBlue> & BG_BoldLightBlue(std::basic_ostream<BGLightBlue> &os) {
        os << obj::BG816.BG_BoldLightBlue;

        return os;
    }

    //105;1: bg bold light magenta
    template<typename BGBoldLightMagenta>
    std::basic_ostream<BGBoldLightMagenta> & BG_BoldLightMagenta(std::basic_ostream<BGBoldLightMagenta> &os) {
        os << obj::BG816.BG_BoldLightMagenta;

        return os;
    }

    //106;1: bg bold light cyan
    template<typename BGBoldLightCyan>
    std::basic_ostream<BGBoldLightCyan> & BG_BoldLightCyan(std::basic_ostream<BGBoldLightCyan> &os) {
        os << obj::BG816.BG_BoldLightCyan;

        return os;
    }
}
#endif