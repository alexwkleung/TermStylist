#ifndef TERMSTYLIST_H
#define TERMSTYLIST_H

#include <ostream>
#include <string>

namespace termstylist {
    struct FGColours816 {
        public:
            const std::string FG_Default = "\033[39m"; //39
            const std::string FG_Black = "\033[30m"; //30
            const std::string FG_Red = "\033[31m"; //31
            const std::string FG_Green = "\033[32m"; //32
            const std::string FG_Yellow = "\033[33m"; //33
            const std::string FG_Blue = "\033[34m"; //34
            const std::string FG_Magenta = "\033[35m"; //35
            const std::string FG_Cyan = "\033[36m"; //36
            const std::string FG_LightGrey = "\033[37m"; //37
            const std::string FG_DarkGrey = "\033[90m"; //90
            const std::string FG_LightRed = "\033[91m"; //91
            const std::string FG_LightGreen = "\033[92m"; //92
            const std::string FG_LightYellow = "\033[93m"; //93
            const std::string FG_LightBlue = "\033[94m"; //94
            const std::string FG_LightMagenta = "\033[95m"; //95
            const std::string FG_LightCyan = "\033[96m"; //96
            const std::string FG_White = "\033[97m"; //97
    };

    //object colours of FGColours816
    FGColours816 colours;

    /* * * FOREGROUND COLOUR TEMPLATES * * */

    //39: fg default
    template<class FGDefault>
    std::basic_ostream<FGDefault> & FG_Default(std::basic_ostream<FGDefault> &os) {
        os << colours.FG_Default;

        return os;
    }

    //30: fg black
    template<class FGBlack>
    std::basic_ostream<FGBlack> & FG_Black(std::basic_ostream<FGBlack> &os) {
        os << colours.FG_Black;

        return os;
    }

    //31: fg red
    template<class FGRed>
    std::basic_ostream<FGRed> & FG_Red(std::basic_ostream<FGRed> &os) {
        os << colours.FG_Red;

        return os;
    }

    //32: fg green
    template<class FGGreen>
    std::basic_ostream<FGGreen> & FG_Green(std::basic_ostream<FGGreen> &os) {
        os << colours.FG_Green;

        return os;
    }

    //33: fg yellow
    template<class FGYellow>
    std::basic_ostream<FGYellow> & FG_Yellow(std::basic_ostream<FGYellow> &os) {
        os << colours.FG_Yellow;

        return os;
    }

    //34: fg blue
    template<class FGBlue>
    std::basic_ostream<FGBlue> & FG_Blue(std::basic_ostream<FGBlue> &os) {
        os << colours.FG_Blue;

        return os;
    }

    //35: fg magenta
    template<class FGMagenta>
    std::basic_ostream<FGMagenta> & FG_Magenta(std::basic_ostream<FGMagenta> &os) {
        os << colours.FG_Magenta;

        return os;
    }

    //36: fg cyan
    template<class FGCyan>
    std::basic_ostream<FGCyan> & FG_Cyan(std::basic_ostream<FGCyan> &os) {
        os << colours.FG_Cyan;

        return os;
    }

    //37: fg light grey
    template<class FGLightGrey>
    std::basic_ostream<FGLightGrey> & FG_LightGrey(std::basic_ostream<FGLightGrey> &os) {
        os << colours.FG_LightGrey;

        return os;
    }

    //90: fg dark grey
    template<class FGDarkGrey>
    std::basic_ostream<FGDarkGrey> & FG_DarkGrey(std::basic_ostream<FGDarkGrey> &os) {
        os << colours.FG_DarkGrey;

        return os;
    }

    //91: fg light red
    template<class FGLightRed>
    std::basic_ostream<FGLightRed> & FG_LightRed(std::basic_ostream<FGLightRed> &os) {
        os << colours.FG_LightRed;

        return os;
    }

    //92: fg light green
    template<class FGLightGreen>
    std::basic_ostream<FGLightGreen> & FG_LightGreen(std::basic_ostream<FGLightGreen> &os) {
        os << colours.FG_LightGreen;

        return os;
    }

    //93: fg light yellow
    template<class FGLightYellow>
    std::basic_ostream<FGLightYellow> & FG_LightYellow(std::basic_ostream<FGLightYellow> &os) {
        os << colours.FG_LightYellow;

        return os;
    }

    //94: fg light blue
    template<class FGLightBlue>
    std::basic_ostream<FGLightBlue> & FG_LightBlue(std::basic_ostream<FGLightBlue> &os) {
        os << colours.FG_LightBlue;

        return os;
    }

    //95: fg light magenta
    template<class FGLightMagenta>
    std::basic_ostream<FGLightMagenta> & FG_LightMagenta(std::basic_ostream<FGLightMagenta> &os) {
        os << colours.FG_LightMagenta;

        return os;
    }

    //96: fg light cyan
    template<class FGLightCyan>
    std::basic_ostream<FGLightCyan> & FG_LightCyan(std::basic_ostream<FGLightCyan> &os) {
        os << colours.FG_LightCyan;

        return os;
    }

    //97: fg white
    template<class FGWhite>
    std::basic_ostream<FGWhite> & FG_White(std::basic_ostream<FGWhite> &os) {
        os << colours.FG_White;

        return os;
    }
}
#endif