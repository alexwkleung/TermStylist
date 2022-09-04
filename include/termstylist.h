/*
* TermStylist - A header-only terminal colours library.
* By @alexwkleung on GitHub
* https://github.com/alexwkleung/TermStylist
* MIT License.
*/

#ifndef TERMSTYLIST_H
#define TERMSTYLIST_H

#include <ostream>
#include <string>

namespace termstylist {
    //attributes
    struct Attributes {
        public:
            const std::string ATTRS_Bold = "\033[1m"; //1
            const std::string ATTRS_Dim = "\033[2m"; //2
            const std::string ATTRS_Underline = "\033[4m"; //4
            const std::string ATTRS_Reverse = "\033[7m"; //7
            const std::string ATTRS_Clear = "\033c"; //c
    };

    //reset
    struct Reset {
        public:
            const std::string RESET_Default = "\033[0m"; //0
            const std::string RESET_Dim = "\033[22m"; //22
            const std::string RESET_Bold = "\033[21m"; //21
            const std::string RESET_Underline = "\033[24m"; //24
            const std::string RESET_Reverse = "\033[27m"; //27
    };

    //foreground colours - 8/16 colours (normal, light, bold)
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

    //background colours - 8/16 colours (normal, light, bold)
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

    //foreground colours - 256 colours 
    struct FGColours256 {
        public:
            const std::string FG256_0 = "\033[38;5;0m"; //38;5;0
            const std::string FG256_1 = "\033[38;5;1m"; //38;5;1
            const std::string FG256_2 = "\033[38;5;2m"; //38;5;2
            const std::string FG256_3 = "\033[38;5;3m"; //38;5;3
            const std::string FG256_4 = "\033[38;5;4m"; //38;5;4
            const std::string FG256_5 = "\033[38;5;5m"; //38;5;5
            const std::string FG256_6 = "\033[38;5;6m"; //38;5;6
            const std::string FG256_7 = "\033[38;5;7m"; //38;5;7
            const std::string FG256_8 = "\033[38;5;8m"; //38;5;8
            const std::string FG256_9 = "\033[38;5;9m"; //38;5;9
            const std::string FG256_10 = "\033[38;5;10m"; //38;5;10
            const std::string FG256_11 = "\033[38;5;11m"; //38;5;11
            const std::string FG256_12 = "\033[38;5;12m"; //38;5;12
            const std::string FG256_13 = "\033[38;5;13m"; //38;5;13
            const std::string FG256_14 = "\033[38;5;14m"; //38;5;14
            const std::string FG256_15 = "\033[38;5;15m"; //38;5;15
            const std::string FG256_16 = "\033[38;5;16m"; //38;5;16
            const std::string FG256_17 = "\033[38;5;17m"; //38;5;17
            const std::string FG256_18 = "\033[38;5;18m"; //38;5;18
            const std::string FG256_19 = "\033[38;5;19m"; //38;5;19
            const std::string FG256_20 = "\033[38;5;20m"; //38;5;20
            const std::string FG256_21 = "\033[38;5;21m"; //38;5;21
            const std::string FG256_22 = "\033[38;5;22m"; //38;5;22
            const std::string FG256_23 = "\033[38;5;23m"; //38;5;23
            const std::string FG256_24 = "\033[38;5;24m"; //38;5;24
            const std::string FG256_25 = "\033[38;5;25m"; //38;5;25
            const std::string FG256_26 = "\033[38;5;26m"; //38;5;26
            const std::string FG256_27 = "\033[38;5;27m"; //38;5;27
            const std::string FG256_28 = "\033[38;5;28m"; //38;5;28
            const std::string FG256_29 = "\033[38;5;29m"; //38;5;29
            const std::string FG256_30 = "\033[38;5;30m"; //38;5;30
            const std::string FG256_31 = "\033[38;5;31m"; //38;5;31
            const std::string FG256_32 = "\033[38;5;32m"; //38;5;32
            const std::string FG256_33 = "\033[38;5;33m"; //38;5;33
            const std::string FG256_34 = "\033[38;5;34m"; //38;5;34
            const std::string FG256_35 = "\033[38;5;35m"; //38;5;35
            const std::string FG256_36 = "\033[38;5;36m"; //38;5;36
            const std::string FG256_37 = "\033[38;5;37m"; //38;5;37
            const std::string FG256_38 = "\033[38;5;38m"; //38;5;38
            const std::string FG256_39 = "\033[38;5;39m"; //38;5;39
            const std::string FG256_40 = "\033[38;5;40m"; //38;5;40
            const std::string FG256_41 = "\033[38;5;41m"; //38;5;41
            const std::string FG256_42 = "\033[38;5;42m"; //38;5;42
            const std::string FG256_43 = "\033[38;5;43m"; //38;5;43
            const std::string FG256_44 = "\033[38;5;44m"; //38;5;44
            const std::string FG256_45 = "\033[38;5;45m"; //38;5;45
            const std::string FG256_46 = "\033[38;5;46m"; //38;5;46
            const std::string FG256_47 = "\033[38;5;47m"; //38;5;47
            const std::string FG256_48 = "\033[38;5;48m"; //38;5;48
            const std::string FG256_49 = "\033[38;5;49m"; //38;5;49
            const std::string FG256_50 = "\033[38;5;50m"; //38;5;50
            const std::string FG256_51 = "\033[38;5;51m"; //38;5;51
            const std::string FG256_52 = "\033[38;5;52m"; //38;5;52
            const std::string FG256_53 = "\033[38;5;53m"; //38;5;53
            const std::string FG256_54 = "\033[38;5;54m"; //38;5;54
            const std::string FG256_55 = "\033[38;5;55m"; //38;5;55
            const std::string FG256_56 = "\033[38;5;56m"; //38;5;56
            const std::string FG256_57 = "\033[38;5;57m"; //38;5;57
            const std::string FG256_58 = "\033[38;5;58m"; //38;5;58
            const std::string FG256_59 = "\033[38;5;59m"; //38;5;59
            const std::string FG256_60 = "\033[38;5;60m"; //38;5;60
            const std::string FG256_61 = "\033[38;5;61m"; //38;5;61
            const std::string FG256_62 = "\033[38;5;62m"; //38;5;62
            const std::string FG256_63 = "\033[38;5;63m"; //38;5;63
            const std::string FG256_64 = "\033[38;5;64m"; //38;5;64
            const std::string FG256_65 = "\033[38;5;65m"; //38;5;65
            const std::string FG256_66 = "\033[38;5;66m"; //38;5;66
            const std::string FG256_67 = "\033[38;5;67m"; //38;5;67
            const std::string FG256_68 = "\033[38;5;68m"; //38;5;68
            const std::string FG256_69 = "\033[38;5;69m"; //38;5;69
            const std::string FG256_70 = "\033[38;5;70m"; //38;5;70
            const std::string FG256_71 = "\033[38;5;71m"; //38;5;71
            const std::string FG256_72 = "\033[38;5;72m"; //38;5;72
            const std::string FG256_73 = "\033[38;5;73m"; //38;5;73
            const std::string FG256_74 = "\033[38;5;74m"; //38;5;74
            const std::string FG256_75 = "\033[38;5;75m"; //38;5;75
            const std::string FG256_76 = "\033[38;5;76m"; //38;5;76
            const std::string FG256_77 = "\033[38;5;77m"; //38;5;77
            const std::string FG256_78 = "\033[38;5;78m"; //38;5;78
            const std::string FG256_79 = "\033[38;5;79m"; //38;5;79
            const std::string FG256_80 = "\033[38;5;80m"; //38;5;80
            const std::string FG256_81 = "\033[38;5;81m"; //38;5;81
            const std::string FG256_82 = "\033[38;5;82m"; //38;5;82
            const std::string FG256_83 = "\033[38;5;83m"; //38;5;83
            const std::string FG256_84 = "\033[38;5;84m"; //38;5;84
            const std::string FG256_85 = "\033[38;5;85m"; //38;5;85
            const std::string FG256_86 = "\033[38;5;86m"; //38;5;86
            const std::string FG256_87 = "\033[38;5;87m"; //38;5;87
            const std::string FG256_88 = "\033[38;5;88m"; //38;5;88
            const std::string FG256_89 = "\033[38;5;89m"; //38;5;89
            const std::string FG256_90 = "\033[38;5;90m"; //38;5;90
            const std::string FG256_91 = "\033[38;5;91m"; //38;5;91
            const std::string FG256_92 = "\033[38;5;92m"; //38;5;92
            const std::string FG256_93 = "\033[38;5;93m"; //38;5;93
            const std::string FG256_94 = "\033[38;5;94m"; //38;5;94
            const std::string FG256_95 = "\033[38;5;95m"; //38;5;95
            const std::string FG256_96 = "\033[38;5;96m"; //38;5;96
            const std::string FG256_97 = "\033[38;5;97m"; //38;5;97
            const std::string FG256_98 = "\033[38;5;98m"; //38;5;98
            const std::string FG256_99 = "\033[38;5;99m"; //38;5;99
            const std::string FG256_100 = "\033[38;5;100m"; //38;5;100
            const std::string FG256_101 = "\033[38;5;101m"; //38;5;101
            const std::string FG256_102 = "\033[38;5;102m"; //38;5;102
            const std::string FG256_103 = "\033[38;5;103m"; //38;5;103
            const std::string FG256_104 = "\033[38;5;104m"; //38;5;104
            const std::string FG256_105 = "\033[38;5;105m"; //38;5;105 
            const std::string FG256_106 = "\033[38;5;106m"; //38;5;106
            const std::string FG256_107 = "\033[38;5;107m"; //38;5;107
            const std::string FG256_108 = "\033[38;5;108m"; //38;5;108
            const std::string FG256_109 = "\033[38;5;109m"; //38;5;109
            const std::string FG256_110 = "\033[38;5;110m"; //38;5;110
            const std::string FG256_111 = "\033[38;5;111m"; //38;5;111
            const std::string FG256_112 = "\033[38;5;112m"; //38;5;112
            const std::string FG256_113 = "\033[38;5;113m"; //38;5;113
            const std::string FG256_114 = "\033[38;5;114m"; //38;5;114
            const std::string FG256_115 = "\033[38;5;115m"; //38;5;115
            const std::string FG256_116 = "\033[38;5;116m"; //38;5;116 
            const std::string FG256_117 = "\033[38;5;117m"; //38;5;117
            const std::string FG256_118 = "\033[38;5;118m"; //38;5;118
            const std::string FG256_119 = "\033[38;5;119m"; //38;5;119
            const std::string FG256_120 = "\033[38;5;120m"; //38;5;120
            const std::string FG256_121 = "\033[38;5;121m"; //38;5;121
            const std::string FG256_122 = "\033[38;5;122m"; //38;5;122
            const std::string FG256_123 = "\033[38;5;123m"; //38;5;123
            const std::string FG256_124 = "\033[38;5;124m"; //38;5;124
            const std::string FG256_125 = "\033[38;5;125m"; //38;5;125
            const std::string FG256_126 = "\033[38;5;126m"; //38;5;126
            const std::string FG256_127 = "\033[38;5;127m"; //38;5;127
            const std::string FG256_128 = "\033[38;5;128m"; //38;5;128
            const std::string FG256_129 = "\033[38;5;129m"; //38;5;129
            const std::string FG256_130 = "\033[38;5;130m"; //38;5;130
            const std::string FG256_131 = "\033[38;5;131m"; //38;5;131
            const std::string FG256_132 = "\033[38;5;132m"; //38;5;132
            const std::string FG256_133 = "\033[38;5;133m"; //38;5;133
            const std::string FG256_134 = "\033[38;5;134m"; //38;5;134
            const std::string FG256_135 = "\033[38;5;135m"; //38;5;135
            const std::string FG256_136 = "\033[38;5;136m"; //38;5;136
            const std::string FG256_137 = "\033[38;5;137m"; //38;5;137
            const std::string FG256_138 = "\033[38;5;138m"; //38;5;138
            const std::string FG256_139 = "\033[38;5;139m"; //38;5;139
            const std::string FG256_140 = "\033[38;5;140m"; //38;5;140
            const std::string FG256_141 = "\033[38;5;141m"; //38;5;141
            const std::string FG256_142 = "\033[38;5;142m"; //38;5;142
            const std::string FG256_143 = "\033[38;5;143m"; //38;5;143
            const std::string FG256_144 = "\033[38;5;144m"; //38;5;144
            const std::string FG256_145 = "\033[38;5;145m"; //38;5;145
            const std::string FG256_146 = "\033[38;5;146m"; //38;5;146
            const std::string FG256_147 = "\033[38;5;147m"; //38;5;147
            const std::string FG256_148 = "\033[38;5;148m"; //38;5;148
            const std::string FG256_149 = "\033[38;5;149m"; //38;5;149
            const std::string FG256_150 = "\033[38;5;150m"; //38;5;150
            const std::string FG256_151 = "\033[38;5;151m"; //38;5;151
            const std::string FG256_152 = "\033[38;5;152m"; //38;5;152
            const std::string FG256_153 = "\033[38;5;153m"; //38;5;153
            const std::string FG256_154 = "\033[38;5;154m"; //38;5;154
            const std::string FG256_155 = "\033[38;5;155m"; //38;5;155
            const std::string FG256_156 = "\033[38;5;156m"; //38;5;156
            const std::string FG256_157 = "\033[38;5;157m"; //38;5;157
            const std::string FG256_158 = "\033[38;5;158m"; //38;5;158 
            const std::string FG256_159 = "\033[38;5;159m"; //38;5;159
            const std::string FG256_160 = "\033[38;5;160m"; //38;5;160
            const std::string FG256_161 = "\033[38;5;161m"; //38;5;161
            const std::string FG256_162 = "\033[38;5;162m"; //38;5;162 
            const std::string FG256_163 = "\033[38;5;163m"; //38;5;163
            const std::string FG256_164 = "\033[38;5;164m"; //38;5;164
            const std::string FG256_165 = "\033[38;5;165m"; //38;5;165
            const std::string FG256_166 = "\033[38;5;166m"; //38;5;166
            const std::string FG256_167 = "\033[38;5;167m"; //38;5;167
            const std::string FG256_168 = "\033[38;5;168m"; //38;5;168
            const std::string FG256_169 = "\033[38;5;169m"; //38;5;169
            const std::string FG256_170 = "\033[38;5;170m"; //38;5;170
            const std::string FG256_171 = "\033[38;5;171m"; //38;5;171
            const std::string FG256_172 = "\033[38;5;172m"; //38;5;172
            const std::string FG256_173 = "\033[38;5;173m"; //38;5;173
            const std::string FG256_174 = "\033[38;5;174m"; //38;5;174
            const std::string FG256_175 = "\033[38;5;175m"; //38;5;175
            const std::string FG256_176 = "\033[38;5;176m"; //38;5;176
            const std::string FG256_177 = "\033[38;5;177m"; //38;5;177
            const std::string FG256_178 = "\033[38;5;178m"; //38;5;178
            const std::string FG256_179 = "\033[38;5;179m"; //38;5;179
            const std::string FG256_180 = "\033[38;5;180m"; //38;5;180
            const std::string FG256_181 = "\033[38;5;181m"; //38;5;181
            const std::string FG256_182 = "\033[38;5;182m"; //38;5;182
            const std::string FG256_183 = "\033[38;5;183m"; //38;5;183
            const std::string FG256_184 = "\033[38;5;184m"; //38;5;184
            const std::string FG256_185 = "\033[38;5;185m"; //38;5;185
            const std::string FG256_186 = "\033[38;5;186m"; //38;5;186
            const std::string FG256_187 = "\033[38;5;187m"; //38;5;187
            const std::string FG256_188 = "\033[38;5;188m"; //38;5;188
            const std::string FG256_189 = "\033[38;5;189m"; //38;5;189
            const std::string FG256_190 = "\033[38;5;190m"; //38;5;190
            const std::string FG256_191 = "\033[38;5;191m"; //38;5;191
            const std::string FG256_192 = "\033[38;5;192m"; //38;5;192
            const std::string FG256_193 = "\033[38;5;193m"; //38;5;193
            const std::string FG256_194 = "\033[38;5;194m"; //38;5;194
            const std::string FG256_195 = "\033[38;5;195m"; //38;5;195
            const std::string FG256_196 = "\033[38;5;196m"; //38;5;196
            const std::string FG256_197 = "\033[38;5;197m"; //38;5;197
            const std::string FG256_198 = "\033[38;5;198m"; //38;5;198
            const std::string FG256_199 = "\033[38;5;199m"; //38;5;199
            const std::string FG256_200 = "\033[38;5;200m"; //38;5;200
            const std::string FG256_201 = "\033[38;5;201m"; //38;5;201
            const std::string FG256_202 = "\033[38;5;202m"; //38;5;202
            const std::string FG256_203 = "\033[38;5;203m"; //38;5;203
            const std::string FG256_204 = "\033[38;5;204m"; //38;5;204
            const std::string FG256_205 = "\033[38;5;205m"; //38;5;205
            const std::string FG256_206 = "\033[38;5;206m"; //38;5;206
            const std::string FG256_207 = "\033[38;5;207m"; //38;5;207
            const std::string FG256_208 = "\033[38;5;208m"; //38;5;208
            const std::string FG256_209 = "\033[38;5;209m"; //38;5;209
            const std::string FG256_210 = "\033[38;5;210m"; //38;5;210
            const std::string FG256_211 = "\033[38;5;211m"; //38;5;211
            const std::string FG256_212 = "\033[38;5;212m"; //38;5;212
            const std::string FG256_213 = "\033[38;5;213m"; //38;5;213
            const std::string FG256_214 = "\033[38;5;214m"; //38;5;214 
            const std::string FG256_215 = "\033[38;5;215m"; //38;5;215
            const std::string FG256_216 = "\033[38;5;216m"; //38;5;216
            const std::string FG256_217 = "\033[38;5;217m"; //38;5;217
            const std::string FG256_218 = "\033[38;5;218m"; //38;5;218
            const std::string FG256_219 = "\033[38;5;219m"; //38;5;219
            const std::string FG256_220 = "\033[38;5;220m"; //38;5;220
            const std::string FG256_221 = "\033[38;5;221m"; //38;5;221 
            const std::string FG256_222 = "\033[38;5;222m"; //38;5;222
            const std::string FG256_223 = "\033[38;5;223m"; //38;5;223
            const std::string FG256_224 = "\033[38;5;224m"; //38;5;224
            const std::string FG256_225 = "\033[38;5;225m"; //38;5;225
            const std::string FG256_226 = "\033[38;5;226m"; //38;5;226
            const std::string FG256_227 = "\033[38;5;227m"; //38;5;227
            const std::string FG256_228 = "\033[38;5;228m"; //38;5;228
            const std::string FG256_229 = "\033[38;5;229m"; //38;5;229
            const std::string FG256_230 = "\033[38;5;230m"; //38;5;230
            const std::string FG256_231 = "\033[38;5;231m"; //38;5;231
            const std::string FG256_232 = "\033[38;5;232m"; //38;5;232
            const std::string FG256_233 = "\033[38;5;233m"; //38;5;233 
            const std::string FG256_234 = "\033[38;5;234m"; //38;5;234
            const std::string FG256_235 = "\033[38;5;235m"; //38;5;235
            const std::string FG256_236 = "\033[38;5;236m"; //38;5;236
            const std::string FG256_237 = "\033[38;5;237m"; //38;5;237
            const std::string FG256_238 = "\033[38;5;238m"; //38;5;238
            const std::string FG256_239 = "\033[38;5;239m"; //38;5;239
            const std::string FG256_240 = "\033[38;5;240m"; //38;5;240
            const std::string FG256_241 = "\033[38;5;241m"; //38;5;241
            const std::string FG256_242 = "\033[38;5;242m"; //38;5;242
            const std::string FG256_243 = "\033[38;5;243m"; //38;5;243 
            const std::string FG256_244 = "\033[38;5;244m"; //38;5;244
            const std::string FG256_245 = "\033[38;5;245m"; //38;5;245
            const std::string FG256_246 = "\033[38;5;246m"; //38;5;246
            const std::string FG256_247 = "\033[38;5;247m"; //38;5;247
            const std::string FG256_248 = "\033[38;5;248m"; //38;5;248
            const std::string FG256_249 = "\033[38;5;249m"; //38;5;249
            const std::string FG256_250 = "\033[38;5;250m"; //38;5;250
            const std::string FG256_251 = "\033[38;5;251m"; //38;5;251
            const std::string FG256_252 = "\033[38;5;252m"; //38;5;252 
            const std::string FG256_253 = "\033[38;5;253m"; //38;5;253
            const std::string FG256_254 = "\033[38;5;254m"; //38;5;254
            const std::string FG256_255 = "\033[38;5;255m"; //38;5;255
            const std::string FG256_256 = "\033[38;5;256m"; //38;5;256
    };

    //background colours - 256 colours
    struct BGColours256 {
        public:
            const std::string BG256_0 = "\033[48;5;0m"; //48;5;0
            const std::string BG256_1 = "\033[48;5;1m"; //48;5;1
            const std::string BG256_2 = "\033[48;5;2m"; //48;5;2
            const std::string BG256_3 = "\033[48;5;3m"; //48;5;3
            const std::string BG256_4 = "\033[48;5;4m"; //48;5;4
            const std::string BG256_5 = "\033[48;5;5m"; //48;5;5
            const std::string BG256_6 = "\033[48;5;6m"; //48;5;6
            const std::string BG256_7 = "\033[48;5;7m"; //48;5;7
            const std::string BG256_8 = "\033[48;5;8m"; //48;5;8
            const std::string BG256_9 = "\033[48;5;9m"; //48;5;9
            const std::string BG256_10 = "\033[48;5;10m"; //48;5;10
            const std::string BG256_11 = "\033[48;5;11m"; //48;5;11
            const std::string BG256_12 = "\033[48;5;12m"; //48;5;12
            const std::string BG256_13 = "\033[48;5;13m"; //48;5;13
            const std::string BG256_14 = "\033[48;5;14m"; //48;5;14
            const std::string BG256_15 = "\033[48;5;15m"; //48;5;15
            const std::string BG256_16 = "\033[48;5;16m"; //48;5;16
            const std::string BG256_17 = "\033[48;5;17m"; //48;5;17
            const std::string BG256_18 = "\033[48;5;18m"; //48;5;18
            const std::string BG256_19 = "\033[48;5;19m"; //48;5;19
            const std::string BG256_20 = "\033[48;5;20m"; //48;5;20
            const std::string BG256_21 = "\033[48;5;21m"; //48;5;21
            const std::string BG256_22 = "\033[48;5;22m"; //48;5;22
            const std::string BG256_23 = "\033[48;5;23m"; //48;5;23
            const std::string BG256_24 = "\033[48;5;24m"; //48;5;24
            const std::string BG256_25 = "\033[48;5;25m"; //48;5;25
            const std::string BG256_26 = "\033[48;5;26m"; //48;5;26
            const std::string BG256_27 = "\033[48;5;27m"; //48;5;27
            const std::string BG256_28 = "\033[48;5;28m"; //48;5;28 
            const std::string BG256_29 = "\033[48;5;29m"; //48;5;29 
            const std::string BG256_30 = "\033[48;5;30m"; //48;5;30
            const std::string BG256_31 = "\033[48;5;31m"; //48;5;31
            const std::string BG256_32 = "\033[48;5;32m"; //48;5;32 
            const std::string BG256_33 = "\033[48;5;33m"; //48;5;33
            const std::string BG256_34 = "\033[48;5;34m"; //48;5;34
            const std::string BG256_35 = "\033[48;5;35m"; //48;5;35
            const std::string BG256_36 = "\033[48;5;36m"; //48;5;36
            const std::string BG256_37 = "\033[48;5;37m"; //48;5;37
            const std::string BG256_38 = "\033[48;5;38m"; //48;5;38
            const std::string BG256_39 = "\033[48;5;39m"; //48;5;39
            const std::string BG256_40 = "\033[48;5;40m"; //48;5;40
            const std::string BG256_41 = "\033[48;5;41m"; //48;5;41
            const std::string BG256_42 = "\033[48;5;42m"; //48;5;42
            const std::string BG256_43 = "\033[48;5;43m"; //48;5;43 
            const std::string BG256_44 = "\033[48;5;44m"; //48;5;44
            const std::string BG256_45 = "\033[48;5;45m"; //48;5;45 
            const std::string BG256_46 = "\033[48;5;46m"; //48;5;46
            const std::string BG256_47 = "\033[48;5;47m"; //48;5;47
            const std::string BG256_48 = "\033[48;5;48m"; //48;5;48
            const std::string BG256_49 = "\033[48;5;49m"; //48;5;49
            const std::string BG256_50 = "\033[48;5;50m"; //48;5;50
            const std::string BG256_51 = "\033[48;5;51m"; //48;5;51
            const std::string BG256_52 = "\033[48;5;52m"; //48;5;52
            const std::string BG256_53 = "\033[48;5;53m"; //48;5;53
            const std::string BG256_54 = "\033[48;5;54m"; //48;5;54
            const std::string BG256_55 = "\033[48;5;55m"; //48;5;55
            const std::string BG256_56 = "\033[48;5;56m"; //48;5;56
            const std::string BG256_57 = "\033[48;5;57m"; //48;5;57
            const std::string BG256_58 = "\033[48;5;58m"; //48;5;58
            const std::string BG256_59 = "\033[48;5;59m"; //48;5;59
            const std::string BG256_60 = "\033[48;5;60m"; //48;5;60
            const std::string BG256_61 = "\033[48;5;61m"; //48;5;61
            const std::string BG256_62 = "\033[48;5;62m"; //48;5;62
            const std::string BG256_63 = "\033[48;5;63m"; //48;5;63
            const std::string BG256_64 = "\033[48;5;64m"; //48;5;64
            const std::string BG256_65 = "\033[48;5;65m"; //48;5;65
            const std::string BG256_66 = "\033[48;5;66m"; //48;5;66
            const std::string BG256_67 = "\033[48;5;67m"; //48;5;67
            const std::string BG256_68 = "\033[48;5;68m"; //48;5;68
            const std::string BG256_69 = "\033[48;5;69m"; //48;5;69
            const std::string BG256_70 = "\033[48;5;70m"; //48;5;70
            const std::string BG256_71 = "\033[48;5;71m"; //48;5;71
            const std::string BG256_72 = "\033[48;5;72m"; //48;5;72
            const std::string BG256_73 = "\033[48;5;73m"; //48;5;73
            const std::string BG256_74 = "\033[48;5;74m"; //48;5;74
            const std::string BG256_75 = "\033[48;5;75m"; //48;5;75
            const std::string BG256_76 = "\033[48;5;76m"; //48;5;76
            const std::string BG256_77 = "\033[48;5;77m"; //48;5;77
            const std::string BG256_78 = "\033[48;5;78m"; //48;5;78
            const std::string BG256_79 = "\033[48;5;79m"; //48;5;79
            const std::string BG256_80 = "\033[48;5;80m"; //48;5;80
            const std::string BG256_81 = "\033[48;5;81m"; //48;5;81
            const std::string BG256_82 = "\033[48;5;82m"; //48;5;82
            const std::string BG256_83 = "\033[48;5;83m"; //48;5;83
            const std::string BG256_84 = "\033[48;5;84m"; //48;5;84 
            const std::string BG256_85 = "\033[48;5;85m"; //48;5;85
            const std::string BG256_86 = "\033[48;5;86m"; //48;5;86
            const std::string BG256_87 = "\033[48;5;87m"; //48;5;87
            const std::string BG256_88 = "\033[48;5;88m"; //48;5;88
            const std::string BG256_89 = "\033[48;5;89m"; //48;5;89
            const std::string BG256_90 = "\033[48;5;90m"; //48;5;90
            const std::string BG256_91 = "\033[48;5;91m"; //48;5;91
            const std::string BG256_92 = "\033[48;5;92m"; //48;5;92
            const std::string BG256_93 = "\033[48;5;93m"; //48;5;93
            const std::string BG256_94 = "\033[48;5;94m"; //48;5;94
            const std::string BG256_95 = "\033[48;5;95m"; //48;5;95
            const std::string BG256_96 = "\033[48;5;96m"; //48;5;96
            const std::string BG256_97 = "\033[48;5;97m"; //48;5;97
            const std::string BG256_98 = "\033[48;5;98m"; //48;5;98
            const std::string BG256_99 = "\033[48;5;99m"; //48;5;99
            const std::string BG256_100 = "\033[48;5;100m"; //48;5;100
            const std::string BG256_101 = "\033[48;5;101m"; //48;5;101
            const std::string BG256_102 = "\033[48;5;102m"; //48;5;102
            const std::string BG256_103 = "\033[48;5;103m"; //48;5;103
            const std::string BG256_104 = "\033[48;5;104m"; //48;5;104
            const std::string BG256_105 = "\033[48;5;105m"; //48;5;105
            const std::string BG256_106 = "\033[48;5;106m"; //48;5;106
            const std::string BG256_107 = "\033[48;5;107m"; //48;5;107
            const std::string BG256_108 = "\033[48;5;108m"; //48;5;108
            const std::string BG256_109 = "\033[48;5;109m"; //48;5;109
            const std::string BG256_110 = "\033[48;5;110m"; //48;5;110
            const std::string BG256_111 = "\033[48;5;111m"; //48;5;111
            const std::string BG256_112 = "\033[48;5;112m"; //48;5;112
            const std::string BG256_113 = "\033[48;5;113m"; //48;5;113
            const std::string BG256_114 = "\033[48;5;114m"; //48;5;114
            const std::string BG256_115 = "\033[48;5;115m"; //48;5;115
            const std::string BG256_116 = "\033[48;5;116m"; //48;5;116
            const std::string BG256_117 = "\033[48;5;117m"; //48;5;117
            const std::string BG256_118 = "\033[48;5;118m"; //48;5;118
            const std::string BG256_119 = "\033[48;5;119m"; //48;5;119
            const std::string BG256_120 = "\033[48;5;120m"; //48;5;120
            const std::string BG256_121 = "\033[48;5;121m"; //48;5;121
            const std::string BG256_122 = "\033[48;5;122m"; //48;5;122
            const std::string BG256_123 = "\033[48;5;123m"; //48;5;123
            const std::string BG256_124 = "\033[48;5;124m"; //48;5;124
            const std::string BG256_125 = "\033[48;5;125m"; //48;5;125 
            const std::string BG256_126 = "\033[48;5;126m"; //48;5;126
            const std::string BG256_127 = "\033[48;5;127m"; //48;5;127
            const std::string BG256_128 = "\033[48;5;128m"; //48;5;128
            const std::string BG256_129 = "\033[48;5;129m"; //48;5;129
            const std::string BG256_130 = "\033[48;5;130m"; //48;5;130
            const std::string BG256_131 = "\033[48;5;131m"; //48;5;131
            const std::string BG256_132 = "\033[48;5;132m"; //48;5;132
            const std::string BG256_133 = "\033[48;5;133m"; //48;5;133
            const std::string BG256_134 = "\033[48;5;134m"; //48;5;134
            const std::string BG256_135 = "\033[48;5;135m"; //48;5;135
            const std::string BG256_136 = "\033[48;5;136m"; //48;5;136
            const std::string BG256_137 = "\033[48;5;137m"; //48;5;137
            const std::string BG256_138 = "\033[48;5;138m"; //48;5;138
            const std::string BG256_139 = "\033[48;5;139m"; //48;5;139
            const std::string BG256_140 = "\033[48;5;140m"; //48;5;140
            const std::string BG256_141 = "\033[48;5;141m"; //48;5;141
            const std::string BG256_142 = "\033[48;5;142m"; //48;5;142
            const std::string BG256_143 = "\033[48;5;143m"; //48;5;143
            const std::string BG256_144 = "\033[48;5;144m"; //48;5;144
            const std::string BG256_145 = "\033[48;5;145m"; //48;5;145
            const std::string BG256_146 = "\033[48;5;146m"; //48;5;146
            const std::string BG256_147 = "\033[48;5;147m"; //48;5;147
            const std::string BG256_148 = "\033[48;5;148m"; //48;5;148
            const std::string BG256_149 = "\033[48;5;149m"; //48;5;149
            const std::string BG256_150 = "\033[48;5;150m"; //48;5;150
            const std::string BG256_151 = "\033[48;5;151m"; //48;5;151
            const std::string BG256_152 = "\033[48;5;152m"; //48;5;152
            const std::string BG256_153 = "\033[48;5;153m"; //48;5;153
            const std::string BG256_154 = "\033[48;5;154m"; //48;5;154
            const std::string BG256_155 = "\033[48;5;155m"; //48;5;155
            const std::string BG256_156 = "\033[48;5;156m"; //48;5;156
            const std::string BG256_157 = "\033[48;5;157m"; //48;5;157
            const std::string BG256_158 = "\033[48;5;158m"; //48;5;158
            const std::string BG256_159 = "\033[48;5;159m"; //48;5;159
            const std::string BG256_160 = "\033[48;5;160m"; //48;5;160
            const std::string BG256_161 = "\033[48;5;161m"; //48;5;161
            const std::string BG256_162 = "\033[48;5;162m"; //48;5;162
            const std::string BG256_163 = "\033[48;5;163m"; //48;5;163 
            const std::string BG256_164 = "\033[48;5;164m"; //48;5;164
            const std::string BG256_165 = "\033[48;5;165m"; //48;5;165
            const std::string BG256_166 = "\033[48;5;166m"; //48;5;166
            const std::string BG256_167 = "\033[48;5;167m"; //48;5;167
            const std::string BG256_168 = "\033[48;5;168m"; //48;5;168
            const std::string BG256_169 = "\033[48;5;169m"; //48;5;169
            const std::string BG256_170 = "\033[48;5;170m"; //48;5;170
            const std::string BG256_171 = "\033[48;5;171m"; //48;5;171 
            const std::string BG256_172 = "\033[48;5;172m"; //48;5;172
            const std::string BG256_173 = "\033[48;5;173m"; //48;5;173
            const std::string BG256_174 = "\033[48;5;174m"; //48;5;174
            const std::string BG256_175 = "\033[48;5;175m"; //48;5;175
            const std::string BG256_176 = "\033[48;5;176m"; //48;5;176
            const std::string BG256_177 = "\033[48;5;177m"; //48;5;177
            const std::string BG256_178 = "\033[48;5;178m"; //48;5;178
            const std::string BG256_179 = "\033[48;5;179m"; //48;5;179
            const std::string BG256_180 = "\033[48;5;180m"; //48;5;180
            const std::string BG256_181 = "\033[48;5;181m"; //48;5;181
            const std::string BG256_182 = "\033[48;5;182m"; //48;5;182
            const std::string BG256_183 = "\033[48;5;183m"; //48;5;183
            const std::string BG256_184 = "\033[48;5;184m"; //48;5;184
            const std::string BG256_185 = "\033[48;5;185m"; //48;5;185
            const std::string BG256_186 = "\033[48;5;186m"; //48;5;186
            const std::string BG256_187 = "\033[48;5;187m"; //48;5;187
            const std::string BG256_188 = "\033[48;5;188m"; //48;5;188
            const std::string BG256_189 = "\033[48;5;189m"; //48;5;189
            const std::string BG256_190 = "\033[48;5;190m"; //48;5;190
            const std::string BG256_191 = "\033[48;5;191m"; //48;5;191
            const std::string BG256_192 = "\033[48;5;192m"; //48;5;192
            const std::string BG256_193 = "\033[48;5;193m"; //48;5;193
            const std::string BG256_194 = "\033[48;5;194m"; //48;5;194
            const std::string BG256_195 = "\033[48;5;195m"; //48;5;195
            const std::string BG256_196 = "\033[48;5;196m"; //48;5;196
            const std::string BG256_197 = "\033[48;5;197m"; //48;5;197
            const std::string BG256_198 = "\033[48;5;198m"; //48;5;198
            const std::string BG256_199 = "\033[48;5;199m"; //48;5;199
            const std::string BG256_200 = "\033[48;5;200m"; //48;5;200
            const std::string BG256_201 = "\033[48;5;201m"; //48;5;201
            const std::string BG256_202 = "\033[48;5;202m"; //48;5;202
            const std::string BG256_203 = "\033[48;5;203m"; //48;5;203
            const std::string BG256_204 = "\033[48;5;204m"; //48;5;204
            const std::string BG256_205 = "\033[48;5;205m"; //48;5;205
            const std::string BG256_206 = "\033[48;5;206m"; //48;5;206
            const std::string BG256_207 = "\033[48;5;207m"; //48;5;207
            const std::string BG256_208 = "\033[48;5;208m"; //47;5;208
            const std::string BG256_209 = "\033[48;5;209m"; //47;5;209
            const std::string BG256_210 = "\033[48;5;210m"; //47;5;210
            const std::string BG256_211 = "\033[48;5;211m"; //47;5;211
            const std::string BG256_212 = "\033[48;5;212m"; //48;5;212
            const std::string BG256_213 = "\033[48;5;213m"; //48;5;213
            const std::string BG256_214 = "\033[48;5;214m"; //48;5;214
            const std::string BG256_215 = "\033[48;5;215m"; //48;5;215
            const std::string BG256_216 = "\033[48;5;216m"; //48;5;216
            const std::string BG256_217 = "\033[48;5;217m"; //48;5;217
            const std::string BG256_218 = "\033[48;5;218m"; //48;5;218
            const std::string BG256_219 = "\033[48;5;219m"; //48;5;219
            const std::string BG256_220 = "\033[48;5;220m"; //48;5;220
            const std::string BG256_221 = "\033[48;5;221m"; //48;5;221
            const std::string BG256_222 = "\033[48;5;222m"; //48;5;222
            const std::string BG256_223 = "\033[48;5;223m"; //48;5;223
            const std::string BG256_224 = "\033[48;5;224m"; //48;5;224
            const std::string BG256_225 = "\033[48;5;225m"; //48;5;225
            const std::string BG256_226 = "\033[48;5;226m"; //48;5;226
            const std::string BG256_227 = "\033[48;5;227m"; //48;5;227
            const std::string BG256_228 = "\033[48;5;228m"; //48;5;228
            const std::string BG256_229 = "\033[48;5;229m"; //48;5;229
            const std::string BG256_230 = "\033[48;5;230m"; //48;5;230
            const std::string BG256_231 = "\033[48;5;231m"; //48;5;231
            const std::string BG256_232 = "\033[48;5;232m"; //48;5;232
            const std::string BG256_233 = "\033[48;5;233m"; //48;5;233
            const std::string BG256_234 = "\033[48;5;234m"; //48;5;234
            const std::string BG256_235 = "\033[48;5;235m"; //48;5;235
            const std::string BG256_236 = "\033[48;5;236m"; //48;5;236
            const std::string BG256_237 = "\033[48;5;237m"; //48;5;237
            const std::string BG256_238 = "\033[48;5;238m"; //48;5;238
            const std::string BG256_239 = "\033[48;5;239m"; //48;5;239
            const std::string BG256_240 = "\033[48;5;240m"; //48;5;240
            const std::string BG256_241 = "\033[48;5;241m"; //48;5;241
            const std::string BG256_242 = "\033[48;5;242m"; //48;5;242
            const std::string BG256_243 = "\033[48;5;243m"; //48;5;243
            const std::string BG256_244 = "\033[48;5;244m"; //48;5;244
            const std::string BG256_245 = "\033[48;5;245m"; //48;5;245
            const std::string BG256_246 = "\033[48;5;246m"; //48;5;246
            const std::string BG256_247 = "\033[48;5;247m"; //48;5;247
            const std::string BG256_248 = "\033[48;5;248m"; //48;5;248
            const std::string BG256_249 = "\033[48;5;249m"; //48;5;249
            const std::string BG256_250 = "\033[48;5;250m"; //48;5;250
            const std::string BG256_251 = "\033[48;5;251m"; //48;5;251
            const std::string BG256_252 = "\033[48;5;252m"; //48;5;252
            const std::string BG256_253 = "\033[48;5;253m"; //48;5;253
            const std::string BG256_254 = "\033[48;5;254m"; //48;5;254
            const std::string BG256_255 = "\033[48;5;255m"; //48;5;255
            const std::string BG256_256 = "\033[48;5;256m"; //48;5;256
    };  

    //namespace obj_internal holds created objects from structs (ostream manipulators will use them)
    //this is here as an extra layer to "prevent/hide" access of the struct members via using these objects externally
    //NOTE: in short, namespace obj_internal is not meant for use outside of namespace termstylist
    namespace obj_internal {
        //object ATTRS of Attributes struct
        Attributes inline ATTRS;

        //object RESET of Reset struct
        Reset inline RESET;

        //object FG816 of FGColours816 struct
        FGColours816 inline FG816;

        //object BG816 of BGColours816 struct
        BGColours816 inline BG816;

        //object FG256 of FGColours256 struct
        FGColours256 inline FG256;

        //object BG256 of BGColours256 struct
        BGColours256 inline BG256;
    }

    //this unnamed namespace holds created objects from structs.
    //it allows the users to directly access the member values
    //which contain the ansi escape codes.
    namespace {
        //object EO_ATTRS of Attributes struct
        Attributes EO_ATTRS;

        //object EO_RESET of Reset struct
        Reset EO_RESET;

        //object EO_FG816 of FGColours816 struct
        FGColours816 EO_FG816;

        //object EO_BG816 of BGColours816 struct
        BGColours816 EO_BG816;

        //object EO_FG256 of FGColours256 struct
        FGColours256 EO_FG256;

        //object EO_BG256 of BGColours256 struct
        BGColours256 EO_BG256;
    }

    /* * * * * * * * * * * * * *
    *                          *
    *   ATTRIBUTES TEMPLATES   *
    *                          *
    * * * * * * * * * * * * * */

    //1: attr bold
    template<typename ATTRSBold>
    std::basic_ostream<ATTRSBold> & ATTRS_Bold(std::basic_ostream<ATTRSBold> &os) {
        os << obj_internal::ATTRS.ATTRS_Bold;

        return os;
    }

    //2: attr dim
    template<typename ATTRSDim>
    std::basic_ostream<ATTRSDim> & ATTRS_Dim(std::basic_ostream<ATTRSDim> &os) {
        os << obj_internal::ATTRS.ATTRS_Dim;

        return os;
    }

    //4: attr underline 
    template<typename ATTRSUnderline>
    std::basic_ostream<ATTRSUnderline> & ATTRS_Underline(std::basic_ostream<ATTRSUnderline> &os) {
        os << obj_internal::ATTRS.ATTRS_Underline;

        return os;
    }

    //7: attr reverse
    template<typename ATTRSReverse>
    std::basic_ostream<ATTRSReverse> & ATTRS_Reverse(std::basic_ostream<ATTRSReverse> &os) {
        os << obj_internal::ATTRS.ATTRS_Reverse;

        return os;
    }

    //c: attr clear
    template<typename ATTRSClear>
    std::basic_ostream<ATTRSClear> & ATTRS_Clear(std::basic_ostream<ATTRSClear> &os) {
        os << obj_internal::ATTRS.ATTRS_Clear;

        return os;
    }

    /* * * * * * * * * * * * * *
    *                          *
    *     RESET TEMPLATES      *
    *                          *
    * * * * * * * * * * * * * */

    //0: reset default
    template<typename RESETDefault>
    std::basic_ostream<RESETDefault> & RESET_Default(std::basic_ostream<RESETDefault> &os) {
        os << obj_internal::RESET.RESET_Default;

        return os;
    }

    //21: reset bold
    template<typename RESETBold>
    std::basic_ostream<RESETBold> & RESET_Bold(std::basic_ostream<RESETBold> &os) {
        os << obj_internal::RESET.RESET_Bold;

        return os;
    }

    //22: reset dim
    template<typename RESETDim>
    std::basic_ostream<RESETDim> & RESET_Dim(std::basic_ostream<RESETDim> &os) {
        os << obj_internal::RESET.RESET_Dim;

        return os;
    }

    //24: reset underline
    template<typename RESETUnderline>
    std::basic_ostream<RESETUnderline> & RESET_Underline(std::basic_ostream<RESETUnderline> &os) {
        os << obj_internal::RESET.RESET_Underline;

        return os;
    }

    //27: reset reverse
    template<typename RESETReverse>
    std::basic_ostream<RESETReverse> & RESET_Reverse(std::basic_ostream<RESETReverse> &os) {
        os << obj_internal::RESET.RESET_Reverse;

        return os;
    }

    /* * * * * * * * * * * * * *
    *                          *
    *   FOREGROUND COLOUR      *
    *   TEMPLATES (8 COLOURS)  *
    *                          *
    * * * * * * * * * * * * * */

    //39: fg default
    template<typename FGDefault>
    std::basic_ostream<FGDefault> & FG_Default(std::basic_ostream<FGDefault> &os) {
        os << obj_internal::FG816.FG_Default;

        return os;
    }

    //30: fg black
    template<typename FGBlack>
    std::basic_ostream<FGBlack> & FG_Black(std::basic_ostream<FGBlack> &os) {
        os << obj_internal::FG816.FG_Black;

        return os;
    }

    //31: fg red
    template<typename FGRed>
    std::basic_ostream<FGRed> & FG_Red(std::basic_ostream<FGRed> &os) {
        os << obj_internal::FG816.FG_Red;

        return os;
    }

    //32: fg green
    template<typename FGGreen>
    std::basic_ostream<FGGreen> & FG_Green(std::basic_ostream<FGGreen> &os) {
        os << obj_internal::FG816.FG_Green;

        return os;
    }

    //33: fg yellow
    template<typename FGYellow>
    std::basic_ostream<FGYellow> & FG_Yellow(std::basic_ostream<FGYellow> &os) {
        os << obj_internal::FG816.FG_Yellow;

        return os;
    }

    //34: fg blue
    template<typename FGBlue>
    std::basic_ostream<FGBlue> & FG_Blue(std::basic_ostream<FGBlue> &os) {
        os << obj_internal::FG816.FG_Blue;

        return os;
    }

    //35: fg magenta
    template<typename FGMagenta>
    std::basic_ostream<FGMagenta> & FG_Magenta(std::basic_ostream<FGMagenta> &os) {
        os << obj_internal::FG816.FG_Magenta;

        return os;
    }

    //36: fg cyan
    template<typename FGCyan>
    std::basic_ostream<FGCyan> & FG_Cyan(std::basic_ostream<FGCyan> &os) {
        os << obj_internal::FG816.FG_Cyan;

        return os;
    }

    //97: fg white
    template<typename FGWhite>
    std::basic_ostream<FGWhite> & FG_White(std::basic_ostream<FGWhite> &os) {
        os << obj_internal::FG816.FG_White;

        return os;
    }

    //37: fg light grey
    template<class FGLightGrey>
    std::basic_ostream<FGLightGrey> & FG_LightGrey(std::basic_ostream<FGLightGrey> &os) {
        os << obj_internal::FG816.FG_LightGrey;

        return os;
    }

    //90: fg dark grey
    template<typename FGDarkGrey>
    std::basic_ostream<FGDarkGrey> & FG_DarkGrey(std::basic_ostream<FGDarkGrey> &os) {
        os << obj_internal::FG816.FG_DarkGrey;

        return os;
    }

    //91: fg light red
    template<typename FGLightRed>
    std::basic_ostream<FGLightRed> & FG_LightRed(std::basic_ostream<FGLightRed> &os) {
        os << obj_internal::FG816.FG_LightRed;

        return os;
    }

    //92: fg light green
    template<typename FGLightGreen>
    std::basic_ostream<FGLightGreen> & FG_LightGreen(std::basic_ostream<FGLightGreen> &os) {
        os << obj_internal::FG816.FG_LightGreen;

        return os;
    }

    //93: fg light yellow
    template<typename FGLightYellow>
    std::basic_ostream<FGLightYellow> & FG_LightYellow(std::basic_ostream<FGLightYellow> &os) {
        os << obj_internal::FG816.FG_LightYellow;

        return os;
    }

    //94: fg light blue
    template<typename FGLightBlue>
    std::basic_ostream<FGLightBlue> & FG_LightBlue(std::basic_ostream<FGLightBlue> &os) {
        os << obj_internal::FG816.FG_LightBlue;

        return os;
    }

    //95: fg light magenta
    template<typename FGLightMagenta>
    std::basic_ostream<FGLightMagenta> & FG_LightMagenta(std::basic_ostream<FGLightMagenta> &os) {
        os << obj_internal::FG816.FG_LightMagenta;

        return os;
    }

    //96: fg light cyan
    template<typename FGLightCyan>
    std::basic_ostream<FGLightCyan> & FG_LightCyan(std::basic_ostream<FGLightCyan> &os) {
        os << obj_internal::FG816.FG_LightCyan;

        return os;
    }

    /* * * * * * * * * * * * * *
    *                          *
    *   FOREGROUND COLOUR      *
    *   TEMPLATES (16 COLOURS) *
    *                          *
    * * * * * * * * * * * * * */

    //30;1: fg bold black
    template<typename FGBoldBlack>
    std::basic_ostream<FGBoldBlack> & FG_BoldBlack(std::basic_ostream<FGBoldBlack> &os) {
        os << obj_internal::FG816.FG_BoldBlack;

        return os;
    }

    //31;1: fg bold red
    template<typename FGBoldRed>
    std::basic_ostream<FGBoldRed> & FG_BoldRed(std::basic_ostream<FGBoldRed> &os) {
        os << obj_internal::FG816.FG_BoldRed;

        return os;
    }

    //32;1: fg bold green
    template<typename FGBoldGreen>
    std::basic_ostream<FGBoldGreen> & FG_BoldGreen(std::basic_ostream<FGBoldGreen> &os) {
        os << obj_internal::FG816.FG_BoldGreen;

        return os;
    }

    //33;1: fg bold yellow
    template<typename FGBoldYellow>
    std::basic_ostream<FGBoldYellow> & FG_BoldYellow(std::basic_ostream<FGBoldYellow> &os) {
        os << obj_internal::FG816.FG_BoldYellow;
        
        return os;
    }

    //34;1: fg bold blue
    template<typename FGBoldBlue>
    std::basic_ostream<FGBoldBlue> & FG_BoldBlue(std::basic_ostream<FGBoldBlue> &os) {
        os << obj_internal::FG816.FG_BoldBlue;

        return os;
    }

    //35;1: fg bold magenta
    template<typename FGBoldMagenta>
    std::basic_ostream<FGBoldMagenta> & FG_BoldMagenta(std::basic_ostream<FGBoldMagenta> &os) {
        os << obj_internal::FG816.FG_BoldMagenta;

        return os;
    }

    //36;1: fg bold cyan
    template<typename FGBoldCyan>
    std::basic_ostream<FGBoldCyan> & FG_BoldCyan(std::basic_ostream<FGBoldCyan> &os) {
        os << obj_internal::FG816.FG_BoldCyan;

        return os;
    }

    //97;1: fg bold white
    template<typename FGBoldWhite>
    std::basic_ostream<FGBoldWhite> & FG_BoldWhite(std::basic_ostream<FGBoldWhite> &os) {
        os << obj_internal::FG816.FG_BoldWhite;

        return os;
    }

    //37;1: fg bold light grey
    template<typename FGBoldLightGrey>
    std::basic_ostream<FGBoldLightGrey> & FG_BoldLightGrey(std::basic_ostream<FGBoldLightGrey> &os) {
        os << obj_internal::FG816.FG_BoldLightGrey;
        
        return os;
    }

    //90;1: fg bold dark grey
    template<typename FGBoldDarkGrey>
    std::basic_ostream<FGBoldDarkGrey> & FG_BoldDarkGrey(std::basic_ostream<FGBoldDarkGrey> &os) {
        os << obj_internal::FG816.FG_BoldDarkGrey;

        return os;
    }

    //91;1 fg bold light red
    template<typename FGBoldLightRed>
    std::basic_ostream<FGBoldLightRed> & FG_BoldLightRed(std::basic_ostream<FGBoldLightRed> &os) {
        os << obj_internal::FG816.FG_BoldLightRed;

        return os;
    }

    //92;1: fg bold light green
    template<typename FGBoldLightGreen>
    std::basic_ostream<FGBoldLightGreen> & FG_BoldLightGreen(std::basic_ostream<FGBoldLightGreen> &os) {
        os << obj_internal::FG816.FG_BoldLightGreen;

        return os;
    }

    //93;1: fg bold light yellow
    template<typename FGBoldLightYellow>
    std::basic_ostream<FGBoldLightYellow> & FG_BoldLightYellow(std::basic_ostream<FGBoldLightYellow> &os) {
        os << obj_internal::FG816.FG_BoldLightYellow;

        return os;
    }

    //94;1: fg bold light blue
    template<typename FGBoldLightBlue>
    std::basic_ostream<FGBoldLightBlue> & FG_BoldLightBlue(std::basic_ostream<FGBoldLightBlue> &os) {
        os << obj_internal::FG816.FG_BoldLightBlue;

        return os;
    }

    //95;1: fg bold light magenta
    template<typename FGBoldLightMagenta>
    std::basic_ostream<FGBoldLightMagenta> & FG_BoldLightMagenta(std::basic_ostream<FGBoldLightMagenta> &os) {
        os << obj_internal::FG816.FG_BoldLightMagenta;

        return os;
    }

    //96;1: fg bold light cyan
    template<typename FGBoldLightCyan>
    std::basic_ostream<FGBoldLightCyan> & FG_BoldLightCyan(std::basic_ostream<FGBoldLightCyan> &os) {
        os << obj_internal::FG816.FG_BoldLightCyan;

        return os;
    }

    /* * * * * * * * * * * * * *
    *                          *
    *   BACKGROUND COLOUR      *
    *   TEMPLATES (8 COLOURS)  *
    *                          *
    * * * * * * * * * * * * * */

    //49: bg default
    template<typename BGDefault>
    std::basic_ostream<BGDefault> & BG_Default(std::basic_ostream<BGDefault> &os) {
        os << obj_internal::BG816.BG_Default;

        return os;
    }

    //40: bg black
    template<typename BGBlack>
    std::basic_ostream<BGBlack> & BG_Black(std::basic_ostream<BGBlack> &os) {
        os << obj_internal::BG816.BG_Black;

        return os;
    }

    //41: bg red
    template<typename BGRed>
    std::basic_ostream<BGRed> & BG_Red(std::basic_ostream<BGRed> &os) {
        os << obj_internal::BG816.BG_Red;

        return os;
    }

    //42: bg green
    template<typename BGGreen>
    std::basic_ostream<BGGreen> & BG_Green(std::basic_ostream<BGGreen> &os) {
        os << obj_internal::BG816.BG_Green;

        return os;
    }

    //43: bg yellow
    template<typename BGYellow>
    std::basic_ostream<BGYellow> & BG_Yellow(std::basic_ostream<BGYellow> &os) {
        os << obj_internal::BG816.BG_Yellow;

        return os;
    }

    //44: bg blue
    template<typename BGBlue>
    std::basic_ostream<BGBlue> & BG_Blue(std::basic_ostream<BGBlue> &os) {
        os << obj_internal::BG816.BG_Blue;

        return os;
    }

    //45: bg magenta
    template<typename BGMagenta>
    std::basic_ostream<BGMagenta> & BG_Magenta(std::basic_ostream<BGMagenta> &os) {
        os << obj_internal::BG816.BG_Magenta;

        return os;
    }

    //46: bg cyan
    template<typename BGCyan>
    std::basic_ostream<BGCyan> & BG_Cyan(std::basic_ostream<BGCyan> &os) {
        os << obj_internal::BG816.BG_Cyan;

        return os;
    }

    //107: bg white
    template<typename BGWhite>
    std::basic_ostream<BGWhite> & BG_White(std::basic_ostream<BGWhite> &os) {
        os << obj_internal::BG816.BG_White;

        return os;
    }

    //47: bg light grey
    template<typename BGLightGrey>
    std::basic_ostream<BGLightGrey> & BG_LightGrey(std::basic_ostream<BGLightGrey> &os) {
        os << obj_internal::BG816.BG_LightGrey;

        return os;
    }

    //100: bg dark grey
    template<typename BGDarkGrey>
    std::basic_ostream<BGDarkGrey> & BG_DarkGrey(std::basic_ostream<BGDarkGrey> &os) {
        os << obj_internal::BG816.BG_DarkGrey;

        return os;
    }

    //101: bg light red
    template<typename BGLightRed>
    std::basic_ostream<BGLightRed> & BG_LightRed(std::basic_ostream<BGLightRed> &os) {
        os << obj_internal::BG816.BG_LightRed;

        return os;
    }

    //102: bg light green
    template<typename BGLightGreen>
    std::basic_ostream<BGLightGreen> & BG_LightGreen(std::basic_ostream<BGLightGreen> &os) {
        os << obj_internal::BG816.BG_LightGreen;

        return os;
    }

    //103: bg light yellow
    template <typename BGLightYellow>
    std::basic_ostream<BGLightYellow> & BG_LightYellow(std::basic_ostream<BGLightYellow> &os) {
        os << obj_internal::BG816.BG_LightYellow;

        return os;
    }

    //104: bg light blue
    template<typename BGLightBlue>
    std::basic_ostream<BGLightBlue> & BG_LightBlue(std::basic_ostream<BGLightBlue> &os) {
        os << obj_internal::BG816.BG_LightBlue;

        return os;
    }

    //105: bg light magenta
    template<typename BGLightMagenta>
    std::basic_ostream<BGLightMagenta> & BG_LightMagenta(std::basic_ostream<BGLightMagenta> &os) {
        os << obj_internal::BG816.BG_LightMagenta;

        return os;
    }

    //106: bg light cyan
    template<typename BGLightCyan>
    std::basic_ostream<BGLightCyan> & BG_LightCyan(std::basic_ostream<BGLightCyan> &os) {
        os << obj_internal::BG816.BG_LightCyan;

        return os;
    }

    /* * * * * * * * * * * * * *
    *                          *
    *   BACKGROUND COLOUR      *
    *   TEMPLATES (16 COLOURS) *
    *                          *
    * * * * * * * * * * * * * */

    //40;1: bg bold black
    template<typename BGBoldBlack>
    std::basic_ostream<BGBoldBlack> & BG_BoldBlack(std::basic_ostream<BGBoldBlack> &os) {
        os << obj_internal::BG816.BG_BoldBlack;

        return os;
    }

    //41;1: bg bold red
    template<typename BGBoldRed>
    std::basic_ostream<BGBoldRed> & BG_BoldRed(std::basic_ostream<BGBoldRed> &os) {
        os << obj_internal::BG816.BG_BoldRed;

        return os;
    }

    //42;1: bg bold green
    template<typename BGBoldGreen>
    std::basic_ostream<BGBoldGreen> & BG_BoldGreen(std::basic_ostream<BGBoldGreen> &os) {
        os << obj_internal::BG816.BG_BoldGreen;

        return os;
    }

    //43;1: bg bold yellow
    template<typename BGBoldYellow>
    std::basic_ostream<BGBoldYellow> & BG_BoldYellow(std::basic_ostream<BGBoldYellow> &os) {
        os << obj_internal::BG816.BG_BoldYellow;

        return os;
    }

    //44;1: bg bold blue
    template<typename BGBoldBlue>
    std::basic_ostream<BGBoldBlue> & BG_BoldBlue(std::basic_ostream<BGBoldBlue> &os) {
        os << obj_internal::BG816.BG_BoldBlue;

        return os;
    }

    //45;1: bg bold magenta
    template<typename BGBoldMagenta>
    std::basic_ostream<BGBoldMagenta> & BG_BoldMagenta(std::basic_ostream<BGBoldMagenta> &os) {
        os << obj_internal::BG816.BG_BoldMagenta;

        return os;
    }
    
    //46;1: bg bold cyan
    template<typename BGBoldCyan>
    std::basic_ostream<BGBoldCyan> & BG_BoldCyan(std::basic_ostream<BGBoldCyan> &os) {
        os << obj_internal::BG816.BG_BoldCyan;

        return os;
    }

    //107;1: bg bold white
    template<typename BGBoldWhite>
    std::basic_ostream<BGBoldWhite> & BG_BoldWhite(std::basic_ostream<BGBoldWhite> &os) {
        os << obj_internal::BG816.BG_BoldWhite;

        return os;
    }

    //47;1: bg bold light grey
    template<typename BGBoldLightGrey>
    std::basic_ostream<BGBoldLightGrey> & BG_BoldLightGrey(std::basic_ostream<BGBoldLightGrey> &os) {
        os << obj_internal::BG816.BG_BoldLightGrey;

        return os;
    }

    //100;1: bg bold dark grey
    template<typename BGBoldDarkGrey>
    std::basic_ostream<BGBoldDarkGrey> & BG_BoldDarkGrey(std::basic_ostream<BGBoldDarkGrey> &os) {
        os << obj_internal::BG816.BG_BoldDarkGrey;

        return os;
    }

    //101;1: bg bold light red
    template<typename BGBoldLightRed>
    std::basic_ostream<BGBoldLightRed> & BG_BoldLightRed(std::basic_ostream<BGBoldLightRed> &os) {
        os << obj_internal::BG816.BG_BoldLightRed;

        return os;
    }
    
    //102;1: bg bold light green
    template<typename BGBoldLightGreen>
    std::basic_ostream<BGBoldLightGreen> & BG_BoldLightGreen(std::basic_ostream<BGBoldLightGreen> &os) {
        os << obj_internal::BG816.BG_BoldLightGreen;

        return os;
    }

    //103;1: bg bold light yellow
    template<typename BGBoldLightYellow>
    std::basic_ostream<BGBoldLightYellow> & BG_BoldLightYellow(std::basic_ostream<BGBoldLightYellow> &os) {
        os << obj_internal::BG816.BG_BoldLightYellow;

        return os;
    }

    //104;1: bg bold light blue
    template<typename BGLightBlue>
    std::basic_ostream<BGLightBlue> & BG_BoldLightBlue(std::basic_ostream<BGLightBlue> &os) {
        os << obj_internal::BG816.BG_BoldLightBlue;

        return os;
    }

    //105;1: bg bold light magenta
    template<typename BGBoldLightMagenta>
    std::basic_ostream<BGBoldLightMagenta> & BG_BoldLightMagenta(std::basic_ostream<BGBoldLightMagenta> &os) {
        os << obj_internal::BG816.BG_BoldLightMagenta;

        return os;
    }

    //106;1: bg bold light cyan
    template<typename BGBoldLightCyan>
    std::basic_ostream<BGBoldLightCyan> & BG_BoldLightCyan(std::basic_ostream<BGBoldLightCyan> &os) {
        os << obj_internal::BG816.BG_BoldLightCyan;

        return os;
    }

    /* * * * * * * * * * * * * *
    *                          *
    *  FOREGROUND COLOUR       *
    *  TEMPLATES (256 COLOURS) *
    *                          *
    * * * * * * * * * * * * * */

    //38;5;0
    template<typename FG256_0>
    std::basic_ostream<FG256_0> & FG256_0(std::basic_ostream<FG256_0> &os) {
        os << obj_internal::FG256.FG256_0;

        return os;
    }

    //38;5;1
    template<typename FG256_1>
    std::basic_ostream<FG256_1> & FG256_1(std::basic_ostream<FG256_1> &os) {
        os << obj_internal::FG256.FG256_1;

        return os;
    }

    //38;5;2
    template<typename FG256_2>
    std::basic_ostream<FG256_2> & FG256_2(std::basic_ostream<FG256_2> &os) {
        os << obj_internal::FG256.FG256_2;

        return os;
    }

    //38;5;3
    template<typename FG256_3>
    std::basic_ostream<FG256_3> & FG256_3(std::basic_ostream<FG256_3> &os) {
        os << obj_internal::FG256.FG256_3;

        return os;
    }

    //38;5;4
    template<typename FG256_4>
    std::basic_ostream<FG256_4> & FG256_4(std::basic_ostream<FG256_4> &os) {
        os << obj_internal::FG256.FG256_4;

        return os;
    }

    //38;5;5
    template<typename FG256_5>
    std::basic_ostream<FG256_5> & FG256_5(std::basic_ostream<FG256_5> &os) {
        os << obj_internal::FG256.FG256_5;

        return os;
    }

    //38;5;6
    template<typename FG256_6>
    std::basic_ostream<FG256_6> & FG256_6(std::basic_ostream<FG256_6> &os) {
        os << obj_internal::FG256.FG256_6;

        return os;
    }

    //38;5;7
    template<typename FG256_7>
    std::basic_ostream<FG256_7> & FG256_7(std::basic_ostream<FG256_7> &os) {
        os << obj_internal::FG256.FG256_7;

        return os;
    }

    //38;5;8
    template<typename FG256_8>
    std::basic_ostream<FG256_8> & FG256_8(std::basic_ostream<FG256_8> &os) {
        os << obj_internal::FG256.FG256_8;

        return os;
    }

    //38;5;9
    template<typename FG256_9>
    std::basic_ostream<FG256_9> & FG256_9(std::basic_ostream<FG256_9> &os) {
        os << obj_internal::FG256.FG256_9;

        return os;
    }

    //38;5;10
    template<typename FG256_10>
    std::basic_ostream<FG256_10> & FG256_10(std::basic_ostream<FG256_10> &os) {
        os << obj_internal::FG256.FG256_10;

        return os;
    }

    //38;5;11
    template<typename FG256_11>
    std::basic_ostream<FG256_11> & FG256_11(std::basic_ostream<FG256_11> &os) {
        os << obj_internal::FG256.FG256_11;

        return os;
    }

    //38;5;12
    template<typename FG256_12>
    std::basic_ostream<FG256_12> & FG256_12(std::basic_ostream<FG256_12> &os) {
        os << obj_internal::FG256.FG256_12;

        return os;
    }

    //38;5;13
    template<typename FG256_13>
    std::basic_ostream<FG256_13> & FG256_13(std::basic_ostream<FG256_13> &os) {
        os << obj_internal::FG256.FG256_13;

        return os;
    }

    //38;5;14
    template<typename FG256_14>
    std::basic_ostream<FG256_14> & FG256_14(std::basic_ostream<FG256_14> &os) {
        os << obj_internal::FG256.FG256_14;

        return os;
    }

    //38;5;15
    template<typename FG256_15>
    std::basic_ostream<FG256_15> & FG256_15(std::basic_ostream<FG256_15> &os) {
        os << obj_internal::FG256.FG256_15;

        return os;
    }

    //38;5;16
    template<typename FG256_16>
    std::basic_ostream<FG256_16> & FG256_16(std::basic_ostream<FG256_16> &os) {
        os << obj_internal::FG256.FG256_16;

        return os;
    }

    //38;5;17
    template<typename FG256_17>
    std::basic_ostream<FG256_17> & FG256_17(std::basic_ostream<FG256_17> &os) {
        os << obj_internal::FG256.FG256_17;

        return os;
    }

    //38;5;18
    template<typename FG256_18>
    std::basic_ostream<FG256_18> & FG256_18(std::basic_ostream<FG256_18> &os) {
        os << obj_internal::FG256.FG256_18;

        return os;
    }

    //38;5;19
    template<typename FG256_19>
    std::basic_ostream<FG256_19> & FG256_19(std::basic_ostream<FG256_19> &os) {
        os << obj_internal::FG256.FG256_19;

        return os;
    }

    //38;5;20 
    template<typename FG256_20>
    std::basic_ostream<FG256_20> & FG256_20(std::basic_ostream<FG256_20> &os) {
        os << obj_internal::FG256.FG256_20;

        return os;
    }

    //38;5;21
    template<typename FG256_21>
    std::basic_ostream<FG256_21> & FG256_21(std::basic_ostream<FG256_21> &os) {
        os << obj_internal::FG256.FG256_21;
        
        return os;
    }

    //38;5;22
    template<typename FG256_22>
    std::basic_ostream<FG256_22> & FG256_22(std::basic_ostream<FG256_22> &os) {
        os << obj_internal::FG256.FG256_22;

        return os;
    }

    //38;5;23
    template<typename FG256_23>
    std::basic_ostream<FG256_23> & FG256_23(std::basic_ostream<FG256_23> &os) {
        os << obj_internal::FG256.FG256_23;

        return os;
    }

    //38;5;24
    template<typename FG256_24>
    std::basic_ostream<FG256_24> & FG256_24(std::basic_ostream<FG256_24> &os) {
        os << obj_internal::FG256.FG256_24;

        return os;
    }

    //38;5;25
    template<typename FG256_25>
    std::basic_ostream<FG256_25> & FG256_25(std::basic_ostream<FG256_25> &os) {
        os << obj_internal::FG256.FG256_25;

        return os;
    }

    //38;5;26
    template<typename FG256_26>
    std::basic_ostream<FG256_26> & FG256_26(std::basic_ostream<FG256_26> &os) {
        os << obj_internal::FG256.FG256_26;

        return os;
    }

    //38;5;27
    template<typename FG256_27>
    std::basic_ostream<FG256_27> & FG256_27(std::basic_ostream<FG256_27> &os) {
        os << obj_internal::FG256.FG256_27;

        return os;
    }

    //38;5;28
    template<typename FG256_28>
    std::basic_ostream<FG256_28> & FG256_28(std::basic_ostream<FG256_28> &os) {
        os << obj_internal::FG256.FG256_28;

        return os;
    }

    //38;5;29
    template<typename FG256_29>
    std::basic_ostream<FG256_29> & FG256_29(std::basic_ostream<FG256_29> &os) {
        os << obj_internal::FG256.FG256_29;

        return os;
    }

    //38;5;30
    template<typename FG256_30>
    std::basic_ostream<FG256_30> & FG256_30(std::basic_ostream<FG256_30> &os) {
        os << obj_internal::FG256.FG256_30;

        return os;
    } 

    //38;5;31
    template<typename FG256_31>
    std::basic_ostream<FG256_31> & FG256_31(std::basic_ostream<FG256_31> &os) {
        os << obj_internal::FG256.FG256_31;

        return os;
    }
    
    //38;5;32
    template<typename FG256_32>
    std::basic_ostream<FG256_32> & FG256_32(std::basic_ostream<FG256_32> &os) {
        os << obj_internal::FG256.FG256_32;

        return os;
    }

    //38;5;33
    template<typename FG256_33>
    std::basic_ostream<FG256_33> & FG256_33(std::basic_ostream<FG256_33> &os) {
        os << obj_internal::FG256.FG256_33;

        return os;
    }

    //38;5;34
    template<typename FG256_34>
    std::basic_ostream<FG256_34> & FG256_34(std::basic_ostream<FG256_34> &os) {
        os << obj_internal::FG256.FG256_34;

        return os;
    }

    //38;5;35
    template<typename FG256_35>
    std::basic_ostream<FG256_35> & FG256_35(std::basic_ostream<FG256_35> &os) {
        os << obj_internal::FG256.FG256_35;

        return os;
    }

    //38;5;36
    template<typename FG256_36>
    std::basic_ostream<FG256_36> & FG256_36(std::basic_ostream<FG256_36> &os) {
        os << obj_internal::FG256.FG256_36;
        
        return os;
    }

    //38;5;37
    template<typename FG256_37>
    std::basic_ostream<FG256_37> & FG256_37(std::basic_ostream<FG256_37> &os) {
        os << obj_internal::FG256.FG256_37;

        return os;
    }

    //38;5;38
    template<typename FG256_38>
    std::basic_ostream<FG256_38> & FG256_38(std::basic_ostream<FG256_38> &os) {
        os << obj_internal::FG256.FG256_38;

        return os;
    }

    //38;5;39
    template<typename FG256_39>
    std::basic_ostream<FG256_39> & FG256_39(std::basic_ostream<FG256_39> &os) {
        os << obj_internal::FG256.FG256_39;

        return os;
    }

    //38;5;40
    template<typename FG256_40>
    std::basic_ostream<FG256_40> & FG256_40(std::basic_ostream<FG256_40> &os) {
        os << obj_internal::FG256.FG256_40;

        return os;
    }

    //38;5;41
    template<typename FG256_41>
    std::basic_ostream<FG256_41> & FG256_41(std::basic_ostream<FG256_41> &os) {
        os << obj_internal::FG256.FG256_41;

        return os;
    }

    //38;5;42
    template<typename FG256_42>
    std::basic_ostream<FG256_42> & FG256_42(std::basic_ostream<FG256_42> &os) {
        os << obj_internal::FG256.FG256_42;

        return os;
    }

    //38;5;43
    template<typename FG256_43>
    std::basic_ostream<FG256_43> & FG256_43(std::basic_ostream<FG256_43> &os) {
        os << obj_internal::FG256.FG256_43;

        return os;
    }

    //38;5;44
    template<typename FG256_44>
    std::basic_ostream<FG256_44> & FG256_44(std::basic_ostream<FG256_44> &os) {
        os << obj_internal::FG256.FG256_44;

        return os;
    }

    //38;5;45
    template<typename FG256_45>
    std::basic_ostream<FG256_45> & FG256_45(std::basic_ostream<FG256_45> &os) {
        os << obj_internal::FG256.FG256_45;

        return os;
    }

    //38;5;46
    template<typename FG256_46>
    std::basic_ostream<FG256_46> & FG256_46(std::basic_ostream<FG256_46> &os) {
        os << obj_internal::FG256.FG256_46;

        return os;
    }

    //38;5;47
    template<typename FG256_47>
    std::basic_ostream<FG256_47> & FG256_47(std::basic_ostream<FG256_47> &os) {
        os << obj_internal::FG256.FG256_47;

        return os;
    }

    //38;5;48
    template<typename FG256_48>
    std::basic_ostream<FG256_48> & FG256_48(std::basic_ostream<FG256_48> &os) {
        os << obj_internal::FG256.FG256_48;
        
        return os;
    }

    //38;5;49
    template<typename FG256_49>
    std::basic_ostream<FG256_49> & FG256_49(std::basic_ostream<FG256_49> &os) {
        os << obj_internal::FG256.FG256_49;
        
        return os;
    }

    //38;5;50
    template<typename FG256_50>
    std::basic_ostream<FG256_50> & FG256_50(std::basic_ostream<FG256_50> &os) {
        os << obj_internal::FG256.FG256_50;

        return os;
    }

    //38;5;51
    template<typename FG256_51>
    std::basic_ostream<FG256_51> & FG256_51(std::basic_ostream<FG256_51> &os) {
        os << obj_internal::FG256.FG256_51;

        return os;
    }

    //38;5;52
    template<typename FG256_52>
    std::basic_ostream<FG256_52> & FG256_52(std::basic_ostream<FG256_52> &os) {
        os << obj_internal::FG256.FG256_52;

        return os;
    }

    //38;5;53
    template<typename FG256_53>
    std::basic_ostream<FG256_53> & FG256_53(std::basic_ostream<FG256_53> &os) {
        os << obj_internal::FG256.FG256_53;

        return os;
    }

    //38;5;54
    template<typename FG256_54>
    std::basic_ostream<FG256_54> & FG256_54(std::basic_ostream<FG256_54> &os) {
        os << obj_internal::FG256.FG256_54;

        return os;
    }

    //38;5;55
    template<typename FG256_55>
    std::basic_ostream<FG256_55> & FG256_55(std::basic_ostream<FG256_55> &os) {
        os << obj_internal::FG256.FG256_55;

        return os;
    }

    //38;5;56
    template<typename FG256_56>
    std::basic_ostream<FG256_56> & FG256_56(std::basic_ostream<FG256_56> &os) {
        os << obj_internal::FG256.FG256_56;

        return os;
    }

    //38;5;57
    template<typename FG256_57>
    std::basic_ostream<FG256_57> & FG256_57(std::basic_ostream<FG256_57> &os) {
        os << obj_internal::FG256.FG256_57;

        return os;
    }

    //38;5;58 
    template<typename FG256_58>
    std::basic_ostream<FG256_58> & FG256_58(std::basic_ostream<FG256_58> &os) {
        os << obj_internal::FG256.FG256_58;

        return os;
    }

    //38;5;59
    template<typename FG256_59>
    std::basic_ostream<FG256_59> & FG256_59(std::basic_ostream<FG256_59> &os) {
        os << obj_internal::FG256.FG256_59;

        return os;
    }

    //38;5;60
    template<typename FG256_60>
    std::basic_ostream<FG256_60> & FG256_60(std::basic_ostream<FG256_60> &os) {
        os << obj_internal::FG256.FG256_60;

        return os;
    }

    //38;5;61
    template<typename FG256_61>
    std::basic_ostream<FG256_61> & FG256_61(std::basic_ostream<FG256_61> &os) {
        os << obj_internal::FG256.FG256_61;

        return os;
    }

    //38;5;62
    template<typename FG256_62>
    std::basic_ostream<FG256_62> & FG256_62(std::basic_ostream<FG256_62> &os) {
        os << obj_internal::FG256.FG256_62;

        return os;
    }

    //38;5;63
    template<typename FG256_63>
    std::basic_ostream<FG256_63> & FG256_63(std::basic_ostream<FG256_63> &os) {
        os << obj_internal::FG256.FG256_63;

        return os;
    }

    //38;5;64
    template<typename FG256_64>
    std::basic_ostream<FG256_64> & FG256_64(std::basic_ostream<FG256_64> &os) {
        os << obj_internal::FG256.FG256_64;

        return os;
    }

    //38;5;65
    template<typename FG256_65>
    std::basic_ostream<FG256_65> & FG256_65(std::basic_ostream<FG256_65> &os) {
        os << obj_internal::FG256.FG256_65;

        return os;
    }

    //38;5;66
    template<typename FG256_66>
    std::basic_ostream<FG256_66> & FG256_66(std::basic_ostream<FG256_66> &os) {
        os << obj_internal::FG256.FG256_66;

        return os;
    }

    //38;5;67
    template<typename FG256_67>
    std::basic_ostream<FG256_67> & FG256_67(std::basic_ostream<FG256_67> &os) {
        os << obj_internal::FG256.FG256_67;

        return os;
    }

    //38;5;68
    template<typename FG256_68>
    std::basic_ostream<FG256_68> & FG256_68(std::basic_ostream<FG256_68> &os) {
        os << obj_internal::FG256.FG256_68;

        return os;
    }

    //38;5;69
    template<typename FG256_69>
    std::basic_ostream<FG256_69> & FG256_69(std::basic_ostream<FG256_69> &os) {
        os << obj_internal::FG256.FG256_69;

        return os;
    }

    //38;5;70
    template<typename FG256_70>
    std::basic_ostream<FG256_70> & FG256_70(std::basic_ostream<FG256_70> &os) {
        os << obj_internal::FG256.FG256_70;

        return os;
    }

    //38;5;71
    template<typename FG256_71>
    std::basic_ostream<FG256_71> & FG256_71(std::basic_ostream<FG256_71> &os) {
        os << obj_internal::FG256.FG256_71;

        return os;
    }

    //38;5;72
    template<typename FG256_72>
    std::basic_ostream<FG256_72> & FG256_72(std::basic_ostream<FG256_72> &os) {
        os << obj_internal::FG256.FG256_72;

        return os;
    }

    //38;5;73
    template<typename FG256_73>
    std::basic_ostream<FG256_73> & FG256_73(std::basic_ostream<FG256_73> &os) {
        os << obj_internal::FG256.FG256_73;

        return os;
    }

    //38;6;74
    template<typename FG256_74>
    std::basic_ostream<FG256_74> & FG256_74(std::basic_ostream<FG256_74> &os) {
        os << obj_internal::FG256.FG256_74;

        return os;
    }

    //38;5;75
    template<typename FG256_75>
    std::basic_ostream<FG256_75> & FG256_75(std::basic_ostream<FG256_75> &os) {
        os << obj_internal::FG256.FG256_75;

        return os;
    }

    //38;5;76
    template<typename FG256_76>
    std::basic_ostream<FG256_76> & FG256_76(std::basic_ostream<FG256_76> &os) {
        os << obj_internal::FG256.FG256_76;

        return os;
    }

    //38;5;77
    template<typename FG256_77>
    std::basic_ostream<FG256_77> & FG256_77(std::basic_ostream<FG256_77> &os) {
        os << obj_internal::FG256.FG256_77;

        return os;
    }

    //38;5;78
    template<typename FG256_78>
    std::basic_ostream<FG256_78> & FG256_78(std::basic_ostream<FG256_78> &os) {
        os << obj_internal::FG256.FG256_78;

        return os;
    }

    //38;5;79
    template<typename FG256_79>
    std::basic_ostream<FG256_79> & FG256_79(std::basic_ostream<FG256_79> &os) {
        os << obj_internal::FG256.FG256_79;

        return os;
    }

    //38;5;80
    template<typename FG256_80>
    std::basic_ostream<FG256_80> & FG256_80(std::basic_ostream<FG256_80> &os) {
        os << obj_internal::FG256.FG256_80;

        return os;
    }

    //38;5;81
    template<typename FG256_81>
    std::basic_ostream<FG256_81> & FG256_81(std::basic_ostream<FG256_81> &os) {
        os << obj_internal::FG256.FG256_81;

        return os;
    }

    //38;5;82
    template<typename FG256_82>
    std::basic_ostream<FG256_82> & FG256_82(std::basic_ostream<FG256_82> &os) {
        os << obj_internal::FG256.FG256_82;

        return os;
    }

    //38;5;83
    template<typename FG256_83>
    std::basic_ostream<FG256_83> & FG256_83(std::basic_ostream<FG256_83> &os) {
        os << obj_internal::FG256.FG256_83;

        return os;
    }

    //38;5;84
    template<typename FG256_84>
    std::basic_ostream<FG256_84> & FG256_84(std::basic_ostream<FG256_84> &os) {
        os << obj_internal::FG256.FG256_84;

        return os;
    }

    //38;5;85
    template<typename FG256_85>
    std::basic_ostream<FG256_85> & FG256_85(std::basic_ostream<FG256_85> &os) {
        os << obj_internal::FG256.FG256_85;

        return os;
    }

    //38;5;86
    template<typename FG256_86>
    std::basic_ostream<FG256_86> & FG256_86(std::basic_ostream<FG256_86> &os) {
        os << obj_internal::FG256.FG256_86;

        return os;
    }

    //38;5;87
    template<typename FG256_87>
    std::basic_ostream<FG256_87> & FG256_87(std::basic_ostream<FG256_87> &os) {
        os << obj_internal::FG256.FG256_87;

        return os;
    }

    //38;5;88
    template<typename FG256_88>
    std::basic_ostream<FG256_88> & FG256_88(std::basic_ostream<FG256_88> &os) {
        os << obj_internal::FG256.FG256_88;

        return os;
    }

    //38;5;89
    template<typename FG256_89>
    std::basic_ostream<FG256_89> & FG256_89(std::basic_ostream<FG256_89> &os) {
        os << obj_internal::FG256.FG256_89;

        return os;
    }

    //38;5;90
    template<typename FG256_90>
    std::basic_ostream<FG256_90> & FG256_90(std::basic_ostream<FG256_90> &os) {
        os << obj_internal::FG256.FG256_90;

        return os;
    }

    //38;5;91
    template<typename FG256_91>
    std::basic_ostream<FG256_91> & FG256_91(std::basic_ostream<FG256_91> &os) {
        os << obj_internal::FG256.FG256_91;

        return os;
    }

    //38;5;92
    template<typename FG256_92>
    std::basic_ostream<FG256_92> & FG256_92(std::basic_ostream<FG256_92> &os) {
        os << obj_internal::FG256.FG256_92;

        return os;
    }

    //38;5;93
    template<typename FG256_93>
    std::basic_ostream<FG256_93> & FG256_93(std::basic_ostream<FG256_93> &os) {
        os << obj_internal::FG256.FG256_93;

        return os;
    }

    //38;5;94
    template<typename FG256_94>
    std::basic_ostream<FG256_94> & FG256_94(std::basic_ostream<FG256_94> &os) {
        os << obj_internal::FG256.FG256_94;

        return os;
    }

    //38;5;95
    template<typename FG256_95>
    std::basic_ostream<FG256_95> & FG256_95(std::basic_ostream<FG256_95> &os) {
        os << obj_internal::FG256.FG256_95;

        return os;
    }

    //38;5;96
    template<typename FG256_96>
    std::basic_ostream<FG256_96> & FG256_96(std::basic_ostream<FG256_96> &os) {
        os << obj_internal::FG256.FG256_96;

        return os;
    }

    //38;5;97
    template<typename FG256_97>
    std::basic_ostream<FG256_97> & FG256_97(std::basic_ostream<FG256_97> &os) {
        os << obj_internal::FG256.FG256_97;

        return os;
    }

    //38;5;98
    template<typename FG256_98>
    std::basic_ostream<FG256_98> & FG256_98(std::basic_ostream<FG256_98> &os) {
        os << obj_internal::FG256.FG256_98;

        return os;
    }

    //38;5;99
    template<typename FG256_99>
    std::basic_ostream<FG256_99> & FG256_99(std::basic_ostream<FG256_99> &os) {
        os << obj_internal::FG256.FG256_99;

        return os;
    }

    //38;5;100
    template<typename FG256_100>
    std::basic_ostream<FG256_100> & FG256_100(std::basic_ostream<FG256_100> &os) {
        os << obj_internal::FG256.FG256_100;

        return os;
    }

    //38;5;101
    template<typename FG256_101>
    std::basic_ostream<FG256_101> & FG256_101(std::basic_ostream<FG256_101> &os) {
        os << obj_internal::FG256.FG256_101;

        return os;
    }

    //38;5;102
    template<typename FG256_102>
    std::basic_ostream<FG256_102> & FG256_102(std::basic_ostream<FG256_102> &os) {
        os << obj_internal::FG256.FG256_102;

        return os;
    }

    //38;5;103
    template<typename FG256_103>
    std::basic_ostream<FG256_103> & FG256_103(std::basic_ostream<FG256_103> &os) {
        os << obj_internal::FG256.FG256_103;

        return os;
    }

    //38;5;104
    template<typename FG256_104>
    std::basic_ostream<FG256_104> & FG256_104(std::basic_ostream<FG256_104> &os) {
        os << obj_internal::FG256.FG256_104;

        return os;
    }

    //38;5;105
    template<typename FG256_105>
    std::basic_ostream<FG256_105> & FG256_105(std::basic_ostream<FG256_105> &os) {
        os << obj_internal::FG256.FG256_105;

        return os;
    }

    //38;5;106
    template<typename FG256_106>
    std::basic_ostream<FG256_106> & FG256_106(std::basic_ostream<FG256_106> &os) {
        os << obj_internal::FG256.FG256_106;

        return os;
    }

    //38;5;107
    template<typename FG256_107>
    std::basic_ostream<FG256_107> & FG256_107(std::basic_ostream<FG256_107> &os) {
        os << obj_internal::FG256.FG256_107;

        return os;
    }

    //38;5;108
    template<typename FG256_108>
    std::basic_ostream<FG256_108> & FG256_108(std::basic_ostream<FG256_108> &os) {
        os << obj_internal::FG256.FG256_108;

        return os;
    }

    //38;5;109
    template<typename FG256_109>
    std::basic_ostream<FG256_109> & FG256_109(std::basic_ostream<FG256_109> &os) {
        os << obj_internal::FG256.FG256_109;

        return os;
    }

    //38;5;110
    template<typename FG256_110>
    std::basic_ostream<FG256_110> & FG256_110(std::basic_ostream<FG256_110> &os) {
        os << obj_internal::FG256.FG256_110;

        return os;
    }

    //38;5;111
    template<typename FG256_111> 
    std::basic_ostream<FG256_111> & FG256_111(std::basic_ostream<FG256_111> &os) {
        os << obj_internal::FG256.FG256_111;

        return os;
    }

    //38;5;112
    template<typename FG256_112>
    std::basic_ostream<FG256_112> & FG256_112(std::basic_ostream<FG256_112> &os) {
        os << obj_internal::FG256.FG256_112;

        return os;
    }

    //38;5;113
    template<typename FG256_113>
    std::basic_ostream<FG256_113> & FG256_113(std::basic_ostream<FG256_113> &os) {
        os << obj_internal::FG256.FG256_113;

        return os;
    }

    //38;5;114
    template<typename FG256_114>
    std::basic_ostream<FG256_114> & FG256_114(std::basic_ostream<FG256_114> &os) {
        os << obj_internal::FG256.FG256_114;

        return os;
    }

    //38;5;115
    template<typename FG256_115>
    std::basic_ostream<FG256_115> & FG256_115(std::basic_ostream<FG256_115> &os) {
        os << obj_internal::FG256.FG256_115;

        return os;
    }

    //38;5;116
    template<typename FG256_116>
    std::basic_ostream<FG256_116> & FG256_116(std::basic_ostream<FG256_116> &os) {
        os << obj_internal::FG256.FG256_116;

        return os;
    }

    //38;5;117
    template<typename FG256_117>
    std::basic_ostream<FG256_117> & FG256_117(std::basic_ostream<FG256_117> &os) {
        os << obj_internal::FG256.FG256_117;
        
        return os;
    }

    //38;5;118
    template<typename FG256_118>
    std::basic_ostream<FG256_118> & FG256_118(std::basic_ostream<FG256_118> &os) {
        os << obj_internal::FG256.FG256_118;

        return os;
    }

    //38;5;119
    template<typename FG256_119>
    std::basic_ostream<FG256_119> & FG256_119(std::basic_ostream<FG256_119> &os) {
        os << obj_internal::FG256.FG256_119;
        
        return os;
    }

    //38;5;120
    template<typename FG256_120>
    std::basic_ostream<FG256_120> & FG256_120(std::basic_ostream<FG256_120> &os) {
        os << obj_internal::FG256.FG256_120;

        return os;
    }

    //38;5;121
    template<typename FG256_121>
    std::basic_ostream<FG256_121> & FG256_121(std::basic_ostream<FG256_121> &os) {
        os << obj_internal::FG256.FG256_121;

        return os;
    }

    //38;5;122
    template<typename FG256_122>
    std::basic_ostream<FG256_122> & FG256_122(std::basic_ostream<FG256_122> &os) {
        os << obj_internal::FG256.FG256_122;

        return os;
    }

    //38;5;123
    template<typename FG256_123>
    std::basic_ostream<FG256_123> & FG256_123(std::basic_ostream<FG256_123> &os) {
        os << obj_internal::FG256.FG256_123;

        return os;
    }

    //38;5;124
    template<typename FG256_124>
    std::basic_ostream<FG256_124> & FG256_124(std::basic_ostream<FG256_124> &os) {
        os << obj_internal::FG256.FG256_124;
        
        return os;
    }

    //38;5;125
    template<typename FG256_125>
    std::basic_ostream<FG256_125> & FG256_125(std::basic_ostream<FG256_125> &os) {
        os << obj_internal::FG256.FG256_125;

        return os;
    }

    //38;5;126
    template<typename FG256_126>
    std::basic_ostream<FG256_126> & FG256_126(std::basic_ostream<FG256_126> &os) {
        os << obj_internal::FG256.FG256_126;

        return os;
    }

    //38;5;127
    template<typename FG256_127>
    std::basic_ostream<FG256_127> & FG256_127(std::basic_ostream<FG256_127> &os) {
        os << obj_internal::FG256.FG256_127;

        return os;
    }

    //38;5;128
    template<typename FG256_128>
    std::basic_ostream<FG256_128> & FG256_128(std::basic_ostream<FG256_128> &os) {
        os << obj_internal::FG256.FG256_128;

        return os;
    }

    //38;5;129
    template<typename FG256_129>
    std::basic_ostream<FG256_129> & FG256_129(std::basic_ostream<FG256_129> &os) {
        os << obj_internal::FG256.FG256_129;

        return os;
    }

    //38;5;130
    template<typename FG256_130>
    std::basic_ostream<FG256_130> & FG256_130(std::basic_ostream<FG256_130> &os) {
        os << obj_internal::FG256.FG256_130;

        return os;
    }

    //38;5;131
    template<typename FG256_131>
    std::basic_ostream<FG256_131> & FG256_131(std::basic_ostream<FG256_131> &os) {
        os << obj_internal::FG256.FG256_131;

        return os;
    }

    //38;5;132
    template<typename FG256_132>
    std::basic_ostream<FG256_132> & FG256_132(std::basic_ostream<FG256_132> &os) {
        os << obj_internal::FG256.FG256_132;

        return os;
    }

    //38;5;133
    template<typename FG256_133>
    std::basic_ostream<FG256_133> & FG256_133(std::basic_ostream<FG256_133> &os) {
        os << obj_internal::FG256.FG256_133;

        return os;
    }

    //38;5;134
    template<typename FG256_134>
    std::basic_ostream<FG256_134> & FG256_134(std::basic_ostream<FG256_134> &os) {
        os << obj_internal::FG256.FG256_134;

        return os;
    }

    //38;5;135
    template<typename FG256_135>
    std::basic_ostream<FG256_135> & FG256_135(std::basic_ostream<FG256_135> &os) {
        os << obj_internal::FG256.FG256_135;
        
        return os;
    }

    //38;5;136
    template<typename FG256_136>
    std::basic_ostream<FG256_136> & FG256_136(std::basic_ostream<FG256_136> &os) {
        os << obj_internal::FG256.FG256_136;

        return os;
    }

    //38;5;137
    template<typename FG256_137>
    std::basic_ostream<FG256_137> & FG256_137(std::basic_ostream<FG256_137> &os) {
        os << obj_internal::FG256.FG256_137;

        return os;
    }

    //38;5;138
    template<typename FG256_138>
    std::basic_ostream<FG256_138> & FG256_138(std::basic_ostream<FG256_138> &os) {
        os << obj_internal::FG256.FG256_138;

        return os;
    }

    //38;5;139
    template<typename FG256_139>
    std::basic_ostream<FG256_139> & FG256_139(std::basic_ostream<FG256_139> &os) {
        os << obj_internal::FG256.FG256_139;

        return os;
    }

    //38;5;140
    template<typename FG256_140>
    std::basic_ostream<FG256_140> & FG256_140(std::basic_ostream<FG256_140> &os) {
        os << obj_internal::FG256.FG256_140;

        return os;
    }

    //38;5;141
    template<typename FG256_141>
    std::basic_ostream<FG256_141> & FG256_141(std::basic_ostream<FG256_141> &os) {
        os << obj_internal::FG256.FG256_141;

        return os;
    }

    //38;5;142
    template<typename FG256_142>
    std::basic_ostream<FG256_142> & FG256_142(std::basic_ostream<FG256_142> &os) {
        os << obj_internal::FG256.FG256_142;

        return os;
    }

    //38;5;143
    template<typename FG256_143>
    std::basic_ostream<FG256_143> & FG256_143(std::basic_ostream<FG256_143> &os) {
        os << obj_internal::FG256.FG256_143;

        return os;
    }

    //38;5;144
    template<typename FG256_144>
    std::basic_ostream<FG256_144> & FG256_144(std::basic_ostream<FG256_144> &os) {
        os << obj_internal::FG256.FG256_144;

        return os;
    }

    //38;5;145
    template<typename FG256_145>
    std::basic_ostream<FG256_145> & FG256_145(std::basic_ostream<FG256_145> &os) {
        os << obj_internal::FG256.FG256_145;

        return os;
    }

    //38;5;146
    template<typename FG256_146> 
    std::basic_ostream<FG256_146> & FG256_146(std::basic_ostream<FG256_146> &os) {
        os << obj_internal::FG256.FG256_146;

        return os;
    }

    //38;5;147
    template<typename FG256_147>
    std::basic_ostream<FG256_147> & FG256_147(std::basic_ostream<FG256_147> &os) {
        os << obj_internal::FG256.FG256_147;

        return os;
    }

    //38;5;148
    template<typename FG256_148>
    std::basic_ostream<FG256_148> & FG256_148(std::basic_ostream<FG256_148> &os) {
        os << obj_internal::FG256.FG256_148;

        return os;
    }

    //38;5;149
    template<typename FG256_149>
    std::basic_ostream<FG256_149> & FG256_149(std::basic_ostream<FG256_149> &os) {
        os << obj_internal::FG256.FG256_149;

        return os;
    }

    //38;5;150
    template<typename FG256_150>
    std::basic_ostream<FG256_150> & FG256_150(std::basic_ostream<FG256_150> &os) {
        os << obj_internal::FG256.FG256_150;

        return os;
    }

    //38;5;151
    template<typename FG256_151>
    std::basic_ostream<FG256_151> & FG256_151(std::basic_ostream<FG256_151> &os) {
        os << obj_internal::FG256.FG256_151;

        return os;
    }

    //38;5;152
    template<typename FG256_152>
    std::basic_ostream<FG256_152> & FG256_152(std::basic_ostream<FG256_152> &os) {
        os << obj_internal::FG256.FG256_152;

        return os;
    }

    //38;5;153
    template<typename FG256_153>
    std::basic_ostream<FG256_153> & FG256_153(std::basic_ostream<FG256_153> &os) {
        os << obj_internal::FG256.FG256_153;

        return os;
    }   

    //38;5;154
    template<typename FG256_154>
    std::basic_ostream<FG256_154> & FG256_154(std::basic_ostream<FG256_154> &os) {
        os << obj_internal::FG256.FG256_154;

        return os;
    }

    //38;5;155
    template<typename FG256_155>
    std::basic_ostream<FG256_155> & FG256_155(std::basic_ostream<FG256_155> &os) {
        os << obj_internal::FG256.FG256_155;

        return os;
    }

    //38;5;156
    template<typename FG256_156>
    std::basic_ostream<FG256_156> & FG256_156(std::basic_ostream<FG256_156> &os) {
        os << obj_internal::FG256.FG256_156;

        return os;
    }

    //38;5;157
    template<typename FG256_157>
    std::basic_ostream<FG256_157> & FG256_157(std::basic_ostream<FG256_157> &os) {
        os << obj_internal::FG256.FG256_157;

        return os;
    }

    //38;5;158
    template<typename FG256_158>
    std::basic_ostream<FG256_158> & FG256_158(std::basic_ostream<FG256_158> &os) {
        os << obj_internal::FG256.FG256_158;

        return os;
    }

    //38;5;159
    template<typename FG256_159>
    std::basic_ostream<FG256_159> & FG256_159(std::basic_ostream<FG256_159> &os) {
        os << obj_internal::FG256.FG256_159;

        return os;
    }

    //38;5;160
    template<typename FG256_160>
    std::basic_ostream<FG256_160> & FG256_160(std::basic_ostream<FG256_160> &os) {
        os << obj_internal::FG256.FG256_160;
        
        return os;
    }

    //38;5;161
    template<typename FG256_161>
    std::basic_ostream<FG256_161> & FG256_161(std::basic_ostream<FG256_161> &os) {
        os << obj_internal::FG256.FG256_161;

        return os;
    }

    //38;5;162
    template<typename FG256_162>
    std::basic_ostream<FG256_162> & FG256_162(std::basic_ostream<FG256_162> &os) {
        os << obj_internal::FG256.FG256_162;

        return os;
    }

    //38;5;163
    template<typename FG256_163>
    std::basic_ostream<FG256_163> & FG256_163(std::basic_ostream<FG256_163> &os) {
        os << obj_internal::FG256.FG256_163;

        return os;
    }

    //38;5;164
    template<typename FG256_164>
    std::basic_ostream<FG256_164> & FG256_164(std::basic_ostream<FG256_164> &os) {
        os << obj_internal::FG256.FG256_164;

        return os;
    }

    //38;5;165
    template<typename FG256_165>
    std::basic_ostream<FG256_165> & FG256_165(std::basic_ostream<FG256_165> &os) {
        os << obj_internal::FG256.FG256_165;
        
        return os;
    }

    //38;5;166
    template<typename FG256_166>
    std::basic_ostream<FG256_166> & FG256_166(std::basic_ostream<FG256_166> &os) {
        os << obj_internal::FG256.FG256_166;

        return os;
    }
    
    //38;5;167
    template<typename FG256_167>
    std::basic_ostream<FG256_167> & FG256_167(std::basic_ostream<FG256_167> &os) {
        os << obj_internal::FG256.FG256_167;

        return os;
    }

    //38;5;168
    template<typename FG256_168>
    std::basic_ostream<FG256_168> & FG256_168(std::basic_ostream<FG256_168> &os) {
        os << obj_internal::FG256.FG256_168;

        return os;
    }

    //38;5;169
    template<typename FG256_169>
    std::basic_ostream<FG256_169> & FG256_169(std::basic_ostream<FG256_169> &os) {
        os << obj_internal::FG256.FG256_169;

        return os;
    }

    //38;5;170
    template<typename FG256_170>
    std::basic_ostream<FG256_170> & FG256_170(std::basic_ostream<FG256_170> &os) {
        os << obj_internal::FG256.FG256_170;

        return os;
    }

    //38;5;171
    template<typename FG256_171>
    std::basic_ostream<FG256_171> & FG256_171(std::basic_ostream<FG256_171> &os) {
        os << obj_internal::FG256.FG256_171;

        return os;
    }

    //38;5;172
    template<typename FG256_172>
    std::basic_ostream<FG256_172> & FG256_172(std::basic_ostream<FG256_172> &os) {
        os << obj_internal::FG256.FG256_172;

        return os;
    }

    //38;5;173
    template<typename FG256_173>
    std::basic_ostream<FG256_173> & FG256_173(std::basic_ostream<FG256_173> &os) {
        os << obj_internal::FG256.FG256_173;

        return os;
    }

    //38;5;174
    template<typename FG256_174>
    std::basic_ostream<FG256_174> & FG256_174(std::basic_ostream<FG256_174> &os) {
        os << obj_internal::FG256.FG256_174;

        return os;
    }

    //38;5;175
    template<typename FG256_175>
    std::basic_ostream<FG256_175> & FG256_175(std::basic_ostream<FG256_175> &os) {
        os << obj_internal::FG256.FG256_175;

        return os;
    } 

    //38;5;176
    template<typename FG256_176>
    std::basic_ostream<FG256_176> & FG256_176(std::basic_ostream<FG256_176> &os) {
        os << obj_internal::FG256.FG256_176;

        return os;
    }

    //38;5;177
    template<typename FG256_177>
    std::basic_ostream<FG256_177> & FG256_177(std::basic_ostream<FG256_177> &os) {
        os << obj_internal::FG256.FG256_177;

        return os;
    }

    //38;5;178
    template<typename FG256_178>
    std::basic_ostream<FG256_178> & FG256_178(std::basic_ostream<FG256_178> &os) {
        os << obj_internal::FG256.FG256_178;

        return os;
    }

    //38;5;179
    template<typename FG256_179>
    std::basic_ostream<FG256_179> & FG256_179(std::basic_ostream<FG256_179> &os) {
        os << obj_internal::FG256.FG256_179;

        return os;
    }

    //38;5;180
    template<typename FG256_180>
    std::basic_ostream<FG256_180> & FG256_180(std::basic_ostream<FG256_180> &os) {
        os << obj_internal::FG256.FG256_180;

        return os;
    }

    //38;5;181
    template<typename FG256_181>
    std::basic_ostream<FG256_181> & FG256_181(std::basic_ostream<FG256_181> &os) {
        os << obj_internal::FG256.FG256_181;

        return os;
    }

    //38;5;182
    template<typename FG256_182>
    std::basic_ostream<FG256_182> & FG256_182(std::basic_ostream<FG256_182> &os) {
        os << obj_internal::FG256.FG256_182;

        return os;
    }

    //38;5;183
    template<typename FG256_183>
    std::basic_ostream<FG256_183> & FG256_183(std::basic_ostream<FG256_183> &os) {
        os << obj_internal::FG256.FG256_183;

        return os;
    }

    //38;5;184
    template<typename FG256_184>
    std::basic_ostream<FG256_184> & FG256_184(std::basic_ostream<FG256_184> &os) {
        os << obj_internal::FG256.FG256_184;

        return os;
    }

    //38;5;185
    template<typename FG256_185>
    std::basic_ostream<FG256_185> & FG256_185(std::basic_ostream<FG256_185> &os) {
        os << obj_internal::FG256.FG256_185;

        return os;
    }

    //38;5;186
    template<typename FG256_186>
    std::basic_ostream<FG256_186> & FG256_186(std::basic_ostream<FG256_186> &os) {
        os << obj_internal::FG256.FG256_186;

        return os;
    }

    //38;5;187
    template<typename FG256_187>
    std::basic_ostream<FG256_187> & FG256_187(std::basic_ostream<FG256_187> &os) {
        os << obj_internal::FG256.FG256_187;

        return os;
    }

    //38;5;188
    template<typename FG256_188>
    std::basic_ostream<FG256_188> & FG256_188(std::basic_ostream<FG256_188> &os) {
        os << obj_internal::FG256.FG256_188;

        return os;
    }

    //38;5;189
    template<typename FG256_189>
    std::basic_ostream<FG256_189> & FG256_189(std::basic_ostream<FG256_189> &os) {
        os << obj_internal::FG256.FG256_189;

        return os;
    }

    //38;5;190
    template<typename FG256_190>
    std::basic_ostream<FG256_190> & FG256_190(std::basic_ostream<FG256_190> &os) {
        os << obj_internal::FG256.FG256_190;

        return os;
    }

    //38;5;191
    template<typename FG256_191> 
    std::basic_ostream<FG256_191> & FG256_191(std::basic_ostream<FG256_191> &os) {
        os << obj_internal::FG256.FG256_191;

        return os;
    }

    //38;5;192
    template<typename FG256_192>
    std::basic_ostream<FG256_192> & FG256_192(std::basic_ostream<FG256_192> &os) {
        os << obj_internal::FG256.FG256_192;

        return os;
    }

    //38;5;193
    template<typename FG256_193>
    std::basic_ostream<FG256_193> & FG256_193(std::basic_ostream<FG256_193> &os) {
        os << obj_internal::FG256.FG256_193;

        return os;
    }

    //38;5;194
    template<typename FG256_194>
    std::basic_ostream<FG256_194> & FG256_194(std::basic_ostream<FG256_194> &os) {
        os << obj_internal::FG256.FG256_194;

        return os;
    }

    //38;5;195
    template<typename FG256_195>
    std::basic_ostream<FG256_195> & FG256_195(std::basic_ostream<FG256_195> &os) {
        os << obj_internal::FG256.FG256_195;

        return os;
    }

    //38;5;196
    template<typename FG256_196> 
    std::basic_ostream<FG256_196> & FG256_196(std::basic_ostream<FG256_196> &os) {
        os << obj_internal::FG256.FG256_196;

        return os;
    }

    //38;5;197
    template<typename FG256_197>
    std::basic_ostream<FG256_197> & FG256_197(std::basic_ostream<FG256_197> &os) {
        os << obj_internal::FG256.FG256_197;

        return os;
    }

    //38;5;198
    template<typename FG256_198>
    std::basic_ostream<FG256_198> & FG256_198(std::basic_ostream<FG256_198> &os) {
        os << obj_internal::FG256.FG256_198;

        return os;
    }

    //38;5;199
    template<typename FG256_199>
    std::basic_ostream<FG256_199> & FG256_199(std::basic_ostream<FG256_199> &os) {
        os << obj_internal::FG256.FG256_199;

        return os;
    }

    //38;5;200
    template<typename FG256_200>
    std::basic_ostream<FG256_200> & FG256_200(std::basic_ostream<FG256_200> &os) {
        os << obj_internal::FG256.FG256_200;

        return os;
    }

    //38;5;201
    template<typename FG256_201>
    std::basic_ostream<FG256_201> & FG256_201(std::basic_ostream<FG256_201> &os) {
        os << obj_internal::FG256.FG256_201;

        return os;
    }

    //38;5;202
    template<typename FG256_202>
    std::basic_ostream<FG256_202> & FG256_202(std::basic_ostream<FG256_202> &os) {
        os << obj_internal::FG256.FG256_202;

        return os;
    }

    //38;5;203
    template<typename FG256_203>
    std::basic_ostream<FG256_203> & FG256_203(std::basic_ostream<FG256_203> &os) {
        os << obj_internal::FG256.FG256_203;

        return os;
    }

    //38;5;204
    template<typename FG256_204>
    std::basic_ostream<FG256_204> & FG256_204(std::basic_ostream<FG256_204> &os) {
        os << obj_internal::FG256.FG256_204;

        return os;
    }

    //38;5;205
    template<typename FG256_205>
    std::basic_ostream<FG256_205> & FG256_205(std::basic_ostream<FG256_205> &os) {
        os << obj_internal::FG256.FG256_205;

        return os;
    }

    //38;5;206
    template<typename FG256_206>
    std::basic_ostream<FG256_206> & FG256_206(std::basic_ostream<FG256_206> &os) {
        os << obj_internal::FG256.FG256_206;

        return os;
    }

    //38;5;207
    template<typename FG256_207>
    std::basic_ostream<FG256_207> & FG256_207(std::basic_ostream<FG256_207> &os) {
        os << obj_internal::FG256.FG256_207;

        return os;
    }

    //38;5;208
    template<typename FG256_208>
    std::basic_ostream<FG256_208> & FG256_208(std::basic_ostream<FG256_208> &os) {
        os << obj_internal::FG256.FG256_208;

        return os;
    }

    //38;5;209
    template<typename FG256_209>
    std::basic_ostream<FG256_209> & FG256_209(std::basic_ostream<FG256_209> &os) {
        os << obj_internal::FG256.FG256_209;

        return os;
    }

    //38;5;210
    template<typename FG256_210>
    std::basic_ostream<FG256_210> & FG256_210(std::basic_ostream<FG256_210> &os) {
        os << obj_internal::FG256.FG256_210;

        return os;
    }

    //38;5;211
    template<typename FG256_211>
    std::basic_ostream<FG256_211> & FG256_211(std::basic_ostream<FG256_211> &os) {
        os << obj_internal::FG256.FG256_211;

        return os;
    }

    //38;5;212
    template<typename FG256_212>
    std::basic_ostream<FG256_212> & FG256_212(std::basic_ostream<FG256_212> &os) {
        os << obj_internal::FG256.FG256_212;

        return os;
    }

    //38;5;213
    template<typename FG256_213>
    std::basic_ostream<FG256_213> & FG256_213(std::basic_ostream<FG256_213> &os) {
        os << obj_internal::FG256.FG256_213;

        return os;
    }

    //38;5;214
    template<typename FG256_214>
    std::basic_ostream<FG256_214> & FG256_214(std::basic_ostream<FG256_214> &os) {
        os << obj_internal::FG256.FG256_214;

        return os;
    }

    //38;5;215
    template<typename FG256_215>
    std::basic_ostream<FG256_215> & FG256_215(std::basic_ostream<FG256_215> &os) {
        os << obj_internal::FG256.FG256_215;

        return os;
    }

    //38;5;216
    template<typename FG256_216>
    std::basic_ostream<FG256_216> & FG256_216(std::basic_ostream<FG256_216> &os) {
        os << obj_internal::FG256.FG256_216;

        return os;
    }

    //38;5;217
    template<typename FG256_217> 
    std::basic_ostream<FG256_217> & FG256_217(std::basic_ostream<FG256_217> &os) {
        os << obj_internal::FG256.FG256_217;

        return os;
    }

    //38;5;218
    template<typename FG256_218>
    std::basic_ostream<FG256_218> & FG256_218(std::basic_ostream<FG256_218> &os) {
        os << obj_internal::FG256.FG256_218;

        return os;
    }

    //38;5;219
    template<typename FG256_219>
    std::basic_ostream<FG256_219> & FG256_219(std::basic_ostream<FG256_219> &os) {
        os << obj_internal::FG256.FG256_219;

        return os;
    }

    //38;5;220
    template<typename FG256_220>
    std::basic_ostream<FG256_220> & FG256_220(std::basic_ostream<FG256_220> &os) {
        os << obj_internal::FG256.FG256_220;

        return os;
    }

    //38;5;221
    template<typename FG256_221>
    std::basic_ostream<FG256_221> & FG256_221(std::basic_ostream<FG256_221> &os) {
        os << obj_internal::FG256.FG256_221;

        return os;
    }

    //38;5;222
    template<typename FG256_222>
    std::basic_ostream<FG256_222> & FG256_222(std::basic_ostream<FG256_222> &os) {
        os << obj_internal::FG256.FG256_222;

        return os;
    }

    //38;5;223
    template<typename FG256_223>
    std::basic_ostream<FG256_223> & FG256_223(std::basic_ostream<FG256_223> &os) {
        os << obj_internal::FG256.FG256_223;

        return os;
    }

    //38;5;224
    template<typename FG256_224>
    std::basic_ostream<FG256_224> & FG256_224(std::basic_ostream<FG256_224> &os) {
        os << obj_internal::FG256.FG256_224;

        return os;
    }

    //38;5;225
    template<typename FG256_225>
    std::basic_ostream<FG256_225> & FG256_225(std::basic_ostream<FG256_225> &os) {
        os << obj_internal::FG256.FG256_225;

        return os;
    }

    //38;5;226
    template<typename FG256_226>
    std::basic_ostream<FG256_226> & FG256_226(std::basic_ostream<FG256_226> &os) {
        os << obj_internal::FG256.FG256_226;

        return os;
    }

    //38;5;227
    template<typename FG256_227>
    std::basic_ostream<FG256_227> & FG256_227(std::basic_ostream<FG256_227> &os) {
        os << obj_internal::FG256.FG256_227;

        return os;
    }

    //38;5;228
    template<typename FG256_228>
    std::basic_ostream<FG256_228> & FG256_228(std::basic_ostream<FG256_228> &os) {
        os << obj_internal::FG256.FG256_228;

        return os;
    }

    //38;5;229
    template<typename FG256_229>
    std::basic_ostream<FG256_229> & FG256_229(std::basic_ostream<FG256_229> &os) {
        os << obj_internal::FG256.FG256_229;

        return os;
    }

    //38;5;230
    template<typename FG256_230>
    std::basic_ostream<FG256_230> & FG256_230(std::basic_ostream<FG256_230> &os) {
        os << obj_internal::FG256.FG256_230;

        return os;
    }

    //38;5;231
    template<typename FG256_231> 
    std::basic_ostream<FG256_231> & FG256_231(std::basic_ostream<FG256_231> &os) {
        os << obj_internal::FG256.FG256_231;

        return os;
    }

    //38;5;232
    template<typename FG256_232>
    std::basic_ostream<FG256_232> & FG256_232(std::basic_ostream<FG256_232> &os) {
        os << obj_internal::FG256.FG256_232;

        return os;
    }

    //38;5;233
    template<typename FG256_233>
    std::basic_ostream<FG256_233> & FG256_233(std::basic_ostream<FG256_233> &os) {
        os << obj_internal::FG256.FG256_233;

        return os;
    }

    //38;5;234
    template<typename FG256_234> 
    std::basic_ostream<FG256_234> & FG256_234(std::basic_ostream<FG256_234> &os) {
        os << obj_internal::FG256.FG256_234;

        return os;
    }

    //38;5;235
    template<typename FG256_235>
    std::basic_ostream<FG256_235> & FG256_235(std::basic_ostream<FG256_235> &os) {
        os << obj_internal::FG256.FG256_235;

        return os;
    }

    //38;5;236
    template<typename FG256_236>
    std::basic_ostream<FG256_236> & FG256_236(std::basic_ostream<FG256_236> &os) {
        os << obj_internal::FG256.FG256_236;

        return os;
    }

    //38;5;237
    template<typename FG256_237>
    std::basic_ostream<FG256_237> & FG256_237(std::basic_ostream<FG256_237> &os) {
        os << obj_internal::FG256.FG256_237;

        return os;
    }

    //38;5;238
    template<typename FG256_238>
    std::basic_ostream<FG256_238> & FG256_238(std::basic_ostream<FG256_238> &os) {
        os << obj_internal::FG256.FG256_238;

        return os;
    }

    //38;5;239
    template<typename FG256_239>
    std::basic_ostream<FG256_239> & FG256_239(std::basic_ostream<FG256_239> &os) {
        os << obj_internal::FG256.FG256_239;

        return os;
    }

    //38;5;240
    template<typename FG256_240>
    std::basic_ostream<FG256_240> & FG256_240(std::basic_ostream<FG256_240> &os) {
        os << obj_internal::FG256.FG256_240;

        return os;
    }

    //38;5;241
    template<typename FG256_241>
    std::basic_ostream<FG256_241> & FG256_241(std::basic_ostream<FG256_241> &os) {
        os << obj_internal::FG256.FG256_241;

        return os;
    }

    //38;5;242
    template<typename FG256_242>
    std::basic_ostream<FG256_242> & FG256_242(std::basic_ostream<FG256_242> &os) {
        os << obj_internal::FG256.FG256_242;

        return os;
    }

    //38;5;243
    template<typename FG256_243>
    std::basic_ostream<FG256_243> & FG256_243(std::basic_ostream<FG256_243> &os) {
        os << obj_internal::FG256.FG256_243;

        return os;
    }

    //38;5;244
    template<typename FG256_244>
    std::basic_ostream<FG256_244> & FG256_244(std::basic_ostream<FG256_244> &os) {
        os << obj_internal::FG256.FG256_244;

        return os;
    }

    //38;5;245
    template<typename FG256_245>
    std::basic_ostream<FG256_245> & FG256_245(std::basic_ostream<FG256_245> &os) {
        os << obj_internal::FG256.FG256_245;

        return os;
    }

    //38;5;246
    template<typename FG256_246>
    std::basic_ostream<FG256_246> & FG256_246(std::basic_ostream<FG256_246> &os) {
        os << obj_internal::FG256.FG256_246;

        return os;
    }

    //38;5;247
    template<typename FG256_247>
    std::basic_ostream<FG256_247> & FG256_247(std::basic_ostream<FG256_247> &os) {
        os << obj_internal::FG256.FG256_247;

        return os;
    }

    //38;5;248
    template<typename FG256_248>
    std::basic_ostream<FG256_248> & FG256_248(std::basic_ostream<FG256_248> &os) {
        os << obj_internal::FG256.FG256_248;

        return os;
    }

    //38;5;249
    template<typename FG256_249>
    std::basic_ostream<FG256_249> & FG256_249(std::basic_ostream<FG256_249> &os) {
        os << obj_internal::FG256.FG256_249;

        return os;
    }

    //38;5;250
    template<typename FG256_250>
    std::basic_ostream<FG256_250> & FG256_250(std::basic_ostream<FG256_250> &os) {
        os << obj_internal::FG256.FG256_250;

        return os;
    }

    //38;5;251
    template<typename FG256_251> 
    std::basic_ostream<FG256_251> & FG256_251(std::basic_ostream<FG256_251> &os) {
        os << obj_internal::FG256.FG256_251;

        return os;
    }

    //38;5;252
    template<typename FG256_252>
    std::basic_ostream<FG256_252> & FG256_252(std::basic_ostream<FG256_252> &os) {
        os << obj_internal::FG256.FG256_252;

        return os;
    }

    //38;5;253
    template<typename FG256_253>
    std::basic_ostream<FG256_253> & FG256_253(std::basic_ostream<FG256_253> &os) {
        os << obj_internal::FG256.FG256_253;

        return os;
    }

    //38;5;254
    template<typename FG256_254>
    std::basic_ostream<FG256_254> & FG256_254(std::basic_ostream<FG256_254> &os) {
        os << obj_internal::FG256.FG256_254;

        return os;
    }
    
    //38;5;255
    template<typename FG256_255>
    std::basic_ostream<FG256_255> & FG256_255(std::basic_ostream<FG256_255> &os) {
        os << obj_internal::FG256.FG256_255;

        return os;
    }
    
    //38;5;256
    template<typename FG256_256>
    std::basic_ostream<FG256_256> & FG256_256(std::basic_ostream<FG256_256> &os) {
        os << obj_internal::FG256.FG256_256;

        return os;
    }

    /* * * * * * * * * * * * * *
    *                          *
    *  BACKGROUND COLOUR       *
    *  TEMPLATES (256 COLOURS) *
    *                          *
    * * * * * * * * * * * * * */

    //48;5;0
    template<typename BG256_0>
    std::basic_ostream<BG256_0> & BG256_0(std::basic_ostream<BG256_0> &os) {
        os << obj_internal::BG256.BG256_0;

        return os;
    }

    //48;5;1
    template<typename BG256_1>
    std::basic_ostream<BG256_1> & BG256_1(std::basic_ostream<BG256_1> &os) {
        os << obj_internal::BG256.BG256_1;

        return os;
    }

    //48;5;2
    template<typename BG256_2>
    std::basic_ostream<BG256_2> & BG256_2(std::basic_ostream<BG256_2> &os) {
        os << obj_internal::BG256.BG256_2;

        return os;
    }

    //48;5;3
    template<typename BG256_3>
    std::basic_ostream<BG256_3> & BG256_3(std::basic_ostream<BG256_3> &os) {
        os << obj_internal::BG256.BG256_3;

        return os;
    }

    //48;5;4
    template<typename BG256_4>
    std::basic_ostream<BG256_4> & BG256_4(std::basic_ostream<BG256_4> &os) {
        os << obj_internal::BG256.BG256_4;

        return os;
    }
    
    //48;5;5
    template<typename BG256_5>
    std::basic_ostream<BG256_5> & BG256_5(std::basic_ostream<BG256_5> &os) {
        os << obj_internal::BG256.BG256_5;

        return os;
    }

    //48;5;6
    template<typename BG256_6>
    std::basic_ostream<BG256_6> & BG256_6(std::basic_ostream<BG256_6> &os) {
        os << obj_internal::BG256.BG256_6;

        return os;
    }

    //48;5;7
    template<typename BG256_7>
    std::basic_ostream<BG256_7> & BG256_7(std::basic_ostream<BG256_7> &os) {
        os << obj_internal::BG256.BG256_7;

        return os;
    }

    //48;5;8
    template<typename BG256_8>
    std::basic_ostream<BG256_8> & BG256_8(std::basic_ostream<BG256_8> &os) {
        os << obj_internal::BG256.BG256_8;

        return os;
    }

    //48;5;9
    template<typename BG256_9>
    std::basic_ostream<BG256_9> & BG256_9(std::basic_ostream<BG256_9> &os) {
        os << obj_internal::BG256.BG256_9;

        return os;
    }

    //48;5;10
    template<typename BG256_10>
    std::basic_ostream<BG256_10> & BG256_10(std::basic_ostream<BG256_10> &os) {
        os << obj_internal::BG256.BG256_10;

        return os;
    }

    //48;5;11
    template<typename BG256_11>
    std::basic_ostream<BG256_11> & BG256_11(std::basic_ostream<BG256_11> &os) {
        os << obj_internal::BG256.BG256_11;

        return os;
    }

    //48;5;12
    template<typename BG256_12>
    std::basic_ostream<BG256_12> & BG256_12(std::basic_ostream<BG256_12> &os) {
        os << obj_internal::BG256.BG256_12;

        return os;
    }

    //48;5;13
    template<typename BG256_13>
    std::basic_ostream<BG256_13> & BG256_13(std::basic_ostream<BG256_13> &os) {
        os << obj_internal::BG256.BG256_13;

        return os;
    }

    //48;5;14
    template<typename BG256_14>
    std::basic_ostream<BG256_14> & BG256_14(std::basic_ostream<BG256_14> &os) {
        os << obj_internal::BG256.BG256_14;

        return os;
    }

    //48;5;15
    template<typename BG256_15>
    std::basic_ostream<BG256_15> & BG256_15(std::basic_ostream<BG256_15> &os) {
        os << obj_internal::BG256.BG256_15;

        return os;
    }

    //48;5;16
    template<typename BG256_16>
    std::basic_ostream<BG256_16> & BG256_16(std::basic_ostream<BG256_16> &os) {
        os << obj_internal::BG256.BG256_16;

        return os;
    }

    //48;5;17
    template<typename BG256_17>
    std::basic_ostream<BG256_17> & BG256_17(std::basic_ostream<BG256_17> &os) {
        os << obj_internal::BG256.BG256_17;

        return os;
    }

    //48;5;18
    template<typename BG256_18>
    std::basic_ostream<BG256_18> & BG256_18(std::basic_ostream<BG256_18> &os) {
        os << obj_internal::BG256.BG256_18;

        return os;
    }

    //48;5;19
    template<typename BG256_19>
    std::basic_ostream<BG256_19> & BG256_19(std::basic_ostream<BG256_19> &os) {
        os << obj_internal::BG256.BG256_19;

        return os;
    }

    //48;5;20
    template<typename BG256_20>
    std::basic_ostream<BG256_20> & BG256_20(std::basic_ostream<BG256_20> &os) {
        os << obj_internal::BG256.BG256_20;

        return os;
    }

    //48;5;21
    template<typename BG256_21>
    std::basic_ostream<BG256_21> & BG256_21(std::basic_ostream<BG256_21> &os) {
        os << obj_internal::BG256.BG256_21;

        return os;
    }

    //48;5;22
    template<typename BG256_22>
    std::basic_ostream<BG256_22> & BG256_22(std::basic_ostream<BG256_22> &os) {
        os << obj_internal::BG256.BG256_22;

        return os;
    }

    //48;5;23
    template<typename BG256_23> 
    std::basic_ostream<BG256_23> & BG256_23(std::basic_ostream<BG256_23> &os) {
        os << obj_internal::BG256.BG256_23;

        return os;
    }

    //48;5;24
    template<typename BG256_24>
    std::basic_ostream<BG256_24> & BG256_24(std::basic_ostream<BG256_24> &os) {
        os << obj_internal::BG256.BG256_24;

        return os;
    }

    //48;5;25
    template<typename BG256_25>
    std::basic_ostream<BG256_25> & BG256_25(std::basic_ostream<BG256_25> &os) {
        os << obj_internal::BG256.BG256_25;

        return os;
    }

    //48;5;26
    template<typename BG256_26>
    std::basic_ostream<BG256_26> & BG256_26(std::basic_ostream<BG256_26> &os) {
        os << obj_internal::BG256.BG256_26;

        return os;
    }

    //48;5;27
    template<typename BG256_27>
    std::basic_ostream<BG256_27> & BG256_27(std::basic_ostream<BG256_27> &os) {
        os << obj_internal::BG256.BG256_27;

        return os;
    }

    //48;5;28
    template<typename BG256_28>
    std::basic_ostream<BG256_28> & BG256_28(std::basic_ostream<BG256_28> &os) {
        os << obj_internal::BG256.BG256_28;

        return os;
    }

    //48;5;29
    template<typename BG256_29>
    std::basic_ostream<BG256_29> & BG256_29(std::basic_ostream<BG256_29> &os) {
        os << obj_internal::BG256.BG256_29;
        
        return os;
    }

    //48;5;30
    template<typename BG256_30>
    std::basic_ostream<BG256_30> & BG256_30(std::basic_ostream<BG256_30> &os) {
        os << obj_internal::BG256.BG256_30;

        return os;
    }

    //48;5;31
    template<typename BG256_31>
    std::basic_ostream<BG256_31> & BG256_31(std::basic_ostream<BG256_31> &os) {
        os << obj_internal::BG256.BG256_31;

        return os;
    }

    //48;5;32
    template<typename BG256_32>
    std::basic_ostream<BG256_32> & BG256_32(std::basic_ostream<BG256_32> &os) {
        os << obj_internal::BG256.BG256_32;

        return os;
    }
    
    //48;5;33
    template<typename BG256_33>
    std::basic_ostream<BG256_33> & BG256_33(std::basic_ostream<BG256_33> &os) {
        os << obj_internal::BG256.BG256_33;
        
        return os;
    }

    //48;5;34
    template<typename BG256_34>
    std::basic_ostream<BG256_34> & BG256_34(std::basic_ostream<BG256_34> &os) {
        os << obj_internal::BG256.BG256_34;

        return os;
    }

    //48;5;35
    template<typename BG256_35> 
    std::basic_ostream<BG256_35> & BG256_35(std::basic_ostream<BG256_35> &os) {
        os << obj_internal::BG256.BG256_35;

        return os;
    }

    //48;5;36
    template<typename BG256_36>
    std::basic_ostream<BG256_36> & BG256_36(std::basic_ostream<BG256_36> &os) {
        os << obj_internal::BG256.BG256_36;

        return os;
    }

    //48;5;37
    template<typename BG256_37>
    std::basic_ostream<BG256_37> & BG256_37(std::basic_ostream<BG256_37> &os) {
        os << obj_internal::BG256.BG256_37;
        
        return os;
    }

    //48;5;38
    template<typename BG256_38>
    std::basic_ostream<BG256_38> & BG256_38(std::basic_ostream<BG256_38> &os) {
        os << obj_internal::BG256.BG256_38;

        return os;
    }

    //48;5;39
    template<typename BG256_39>
    std::basic_ostream<BG256_39> & BG256_39(std::basic_ostream<BG256_39> &os) {
        os << obj_internal::BG256.BG256_39;

        return os;
    }

    //48;5;40
    template<typename BG256_40>
    std::basic_ostream<BG256_40> & BG256_40(std::basic_ostream<BG256_40> &os) {
        os << obj_internal::BG256.BG256_40;

        return os;
    }

    //48;5;41
    template<typename BG256_41>
    std::basic_ostream<BG256_41> & BG256_41(std::basic_ostream<BG256_41> &os) {
        os << obj_internal::BG256.BG256_41;

        return os;
    }

    //48;5;42
    template<typename BG256_42>
    std::basic_ostream<BG256_42> & BG256_42(std::basic_ostream<BG256_42> &os) {
        os << obj_internal::BG256.BG256_42;

        return os;
    }

    //48;5;43
    template<typename BG256_43>
    std::basic_ostream<BG256_43> & BG256_43(std::basic_ostream<BG256_43> &os) {
        os << obj_internal::BG256.BG256_43;

        return os;
    }

    //48;5;44
    template<typename BG256_44>
    std::basic_ostream<BG256_44> & BG256_44(std::basic_ostream<BG256_44> &os) {
        os << obj_internal::BG256.BG256_44;

        return os;
    }

    //48;5;45
    template<typename BG256_45>
    std::basic_ostream<BG256_45> & BG256_45(std::basic_ostream<BG256_45> &os) {
        os << obj_internal::BG256.BG256_45;

        return os;
    }

    //48;5;46
    template<typename BG256_46>
    std::basic_ostream<BG256_46> & BG256_46(std::basic_ostream<BG256_46> &os) {
        os << obj_internal::BG256.BG256_46;

        return os;
    }

    //48;5;47
    template<typename BG256_47>
    std::basic_ostream<BG256_47> & BG256_47(std::basic_ostream<BG256_47> &os) {
        os << obj_internal::BG256.BG256_47;

        return os;
    }

    //48;5;48
    template<typename BG256_48>
    std::basic_ostream<BG256_48> & BG256_48(std::basic_ostream<BG256_48> &os) {
        os << obj_internal::BG256.BG256_48;

        return os;
    }

    //48;5;49
    template<typename BG256_49>
    std::basic_ostream<BG256_49> & BG256_49(std::basic_ostream<BG256_49> &os) {
        os << obj_internal::BG256.BG256_49;

        return os;
    }

    //48;5;50
    template<typename BG256_50>
    std::basic_ostream<BG256_50> & BG256_50(std::basic_ostream<BG256_50> &os) {
        os << obj_internal::BG256.BG256_50;

        return os;
    }

    //48;5;51
    template<typename BG256_51>
    std::basic_ostream<BG256_51> & BG256_51(std::basic_ostream<BG256_51> &os) {
        os << obj_internal::BG256.BG256_51;

        return os;
    }

    //48;5;52
    template<typename BG256_52> 
    std::basic_ostream<BG256_52> & BG256_52(std::basic_ostream<BG256_52> &os) {
        os << obj_internal::BG256.BG256_52;

        return os;
    }

    //48;5;53
    template<typename BG256_53>
    std::basic_ostream<BG256_53> & BG256_53(std::basic_ostream<BG256_53> &os) {
        os << obj_internal::BG256.BG256_53;

        return os;
    }

    //48;5;54
    template<typename BG256_54>
    std::basic_ostream<BG256_54> & BG256_54(std::basic_ostream<BG256_54> &os) {
        os << obj_internal::BG256.BG256_54;

        return os;
    }

    //48;5;55
    template<typename BG256_55>
    std::basic_ostream<BG256_55> & BG256_55(std::basic_ostream<BG256_55> &os) {
        os << obj_internal::BG256.BG256_55;

        return os;
    }

    //48;5;56
    template<typename BG256_56>
    std::basic_ostream<BG256_56> & BG256_56(std::basic_ostream<BG256_56> &os) {
        os << obj_internal::BG256.BG256_56;

        return os;
    }

    //48;5;57
    template<typename BG256_57>
    std::basic_ostream<BG256_57> & BG256_57(std::basic_ostream<BG256_57> &os) {
        os << obj_internal::BG256.BG256_57;

        return os;
    }

    //48;5;58
    template<typename BG256_58>
    std::basic_ostream<BG256_58> & BG256_58(std::basic_ostream<BG256_58> &os) {
        os << obj_internal::BG256.BG256_58;

        return os;
    }

    //48;5;59
    template<typename BG256_59>
    std::basic_ostream<BG256_59> & BG256_59(std::basic_ostream<BG256_59> &os) {
        os << obj_internal::BG256.BG256_59;

        return os;
    }

    //48;5;60
    template<typename BG256_60>
    std::basic_ostream<BG256_60> & BG256_60(std::basic_ostream<BG256_60> &os) {
        os << obj_internal::BG256.BG256_60;

        return os;
    }

    //48;5;61
    template<typename BG256_61>
    std::basic_ostream<BG256_61> & BG256_61(std::basic_ostream<BG256_61> &os) {
        os << obj_internal::BG256.BG256_61;

        return os;
    }

    //48;5;62
    template<typename BG256_62>
    std::basic_ostream<BG256_62> & BG256_62(std::basic_ostream<BG256_62> &os) {
        os << obj_internal::BG256.BG256_62;

        return os;
    }

    //48;5;63
    template<typename BG256_63> 
    std::basic_ostream<BG256_63> & BG256_63(std::basic_ostream<BG256_63> &os) {
        os << obj_internal::BG256.BG256_63;

        return os;
    }

    //48;5;64
    template<typename BG256_64>
    std::basic_ostream<BG256_64> & BG256_64(std::basic_ostream<BG256_64> &os) {
        os << obj_internal::BG256.BG256_64;

        return os;
    }

    //48;5;65
    template<typename BG256_65>
    std::basic_ostream<BG256_65> & BG256_65(std::basic_ostream<BG256_65> &os) {
        os << obj_internal::BG256.BG256_65;

        return os;
    }

    //48;5;66
    template<typename BG256_66>
    std::basic_ostream<BG256_66> & BG256_66(std::basic_ostream<BG256_66> &os) {
        os << obj_internal::BG256.BG256_66;

        return os;
    }

    //48;5;67
    template<typename BG256_67>
    std::basic_ostream<BG256_67> & BG256_67(std::basic_ostream<BG256_67> &os) {
        os << obj_internal::BG256.BG256_67;

        return os;
    }

    //48;5;68
    template<typename BG256_68>
    std::basic_ostream<BG256_68> & BG256_68(std::basic_ostream<BG256_68> &os) {
        os << obj_internal::BG256.BG256_68;

        return os;
    }

    //48;5;69
    template<typename BG256_69>
    std::basic_ostream<BG256_69> & BG256_69(std::basic_ostream<BG256_69> &os) {
        os << obj_internal::BG256.BG256_69;

        return os;
    }

    //48;5;70
    template<typename BG256_70> 
    std::basic_ostream<BG256_70> & BG256_70(std::basic_ostream<BG256_70> &os) {
        os << obj_internal::BG256.BG256_70;

        return os;
    }

    //48;5;71
    template<typename BG256_71>
    std::basic_ostream<BG256_71> & BG256_71(std::basic_ostream<BG256_71> &os) {
        os << obj_internal::BG256.BG256_71;

        return os;
    }

    //48;5;72
    template<typename BG256_72> 
    std::basic_ostream<BG256_72> & BG256_72(std::basic_ostream<BG256_72> &os) {
        os << obj_internal::BG256.BG256_72;

        return os;
    }

    //48;5;73
    template<typename BG256_73>
    std::basic_ostream<BG256_73> & BG256_73(std::basic_ostream<BG256_73> &os) {
        os << obj_internal::BG256.BG256_73;

        return os;
    }

    //48;5;74
    template<typename BG256_74>
    std::basic_ostream<BG256_74> & BG256_74(std::basic_ostream<BG256_74> &os) {
        os << obj_internal::BG256.BG256_74;

        return os;
    }

    //48;5;75
    template<typename BG256_75>
    std::basic_ostream<BG256_75> & BG256_75(std::basic_ostream<BG256_75> &os) {
        os << obj_internal::BG256.BG256_75;

        return os;
    }

    //48;5;76
    template<typename BG256_76> 
    std::basic_ostream<BG256_76> & BG256_76(std::basic_ostream<BG256_76> &os) {
        os << obj_internal::BG256.BG256_76;

        return os;
    }

    //48;5;77
    template<typename BG256_77>
    std::basic_ostream<BG256_77> & BG256_77(std::basic_ostream<BG256_77> &os) {
        os << obj_internal::BG256.BG256_77;

        return os;
    }

    //48;5;78
    template<typename BG256_78>
    std::basic_ostream<BG256_78> & BG256_78(std::basic_ostream<BG256_78> &os) {
        os << obj_internal::BG256.BG256_78;

        return os;
    }

    //48;5;79
    template<typename BG256_79>
    std::basic_ostream<BG256_79> & BG256_79(std::basic_ostream<BG256_79> &os) {
        os << obj_internal::BG256.BG256_79;

        return os;
    }

    //48;5;80
    template<typename BG256_80> 
    std::basic_ostream<BG256_80> & BG256_80(std::basic_ostream<BG256_80> &os) {
        os << obj_internal::BG256.BG256_80;

        return os;
    }

    //48;5;81
    template<typename BG256_81>
    std::basic_ostream<BG256_81> & BG256_81(std::basic_ostream<BG256_81> &os) {
        os << obj_internal::BG256.BG256_81;

        return os;
    }

    //48;5;82
    template<typename BG256_82>
    std::basic_ostream<BG256_82> & BG256_82(std::basic_ostream<BG256_82> &os) {
        os << obj_internal::BG256.BG256_82;
        
        return os;
    }

    //48;5;83
    template<typename BG256_83>
    std::basic_ostream<BG256_83> & BG256_83(std::basic_ostream<BG256_83> &os) {
        os << obj_internal::BG256.BG256_83;

        return os;
    }

    //48;5;84
    template<typename BG256_84>
    std::basic_ostream<BG256_84> & BG256_84(std::basic_ostream<BG256_84> &os) {
        os << obj_internal::BG256.BG256_84;

        return os;
    }

    //48;5;85
    template<typename BG256_85>
    std::basic_ostream<BG256_85> & BG256_85(std::basic_ostream<BG256_85> &os) {
        os << obj_internal::BG256.BG256_85;

        return os;
    }

    //48;5;86
    template<typename BG256_86>
    std::basic_ostream<BG256_86> & BG256_86(std::basic_ostream<BG256_86> &os) {
        os << obj_internal::BG256.BG256_86;

        return os;
    }

    //48;5;87
    template<typename BG256_87>
    std::basic_ostream<BG256_87> & BG256_87(std::basic_ostream<BG256_87> &os) {
        os << obj_internal::BG256.BG256_87;

        return os;
    }
    
    //48;5;88
    template<typename BG256_88>
    std::basic_ostream<BG256_88> & BG256_88(std::basic_ostream<BG256_88> &os) {
        os << obj_internal::BG256.BG256_88;

        return os;
    }

    //48;5;89
    template<typename BG256_89>
    std::basic_ostream<BG256_89> & BG256_89(std::basic_ostream<BG256_89> &os) {
        os << obj_internal::BG256.BG256_89;

        return os;
    }

    //48;5;90
    template<typename BG256_90>
    std::basic_ostream<BG256_90> & BG256_90(std::basic_ostream<BG256_90> &os) {
        os << obj_internal::BG256.BG256_90;

        return os;
    }

    //48;5;91
    template<typename BG256_91>
    std::basic_ostream<BG256_91> & BG256_91(std::basic_ostream<BG256_91> &os) {
        os << obj_internal::BG256.BG256_91;

        return os;
    }
    
    //48;5;92
    template<typename BG256_92>
    std::basic_ostream<BG256_92> & BG256_92(std::basic_ostream<BG256_92> &os) {
        os << obj_internal::BG256.BG256_92;

        return os;
    }

    //48;5;93
    template<typename BG256_93> 
    std::basic_ostream<BG256_93> & BG256_93(std::basic_ostream<BG256_93> &os) {
        os << obj_internal::BG256.BG256_93;

        return os;
    }

    //48;5;94
    template<typename BG256_94> 
    std::basic_ostream<BG256_94> & BG256_94(std::basic_ostream<BG256_94> &os) {
        os << obj_internal::BG256.BG256_94;

        return os;
    }

    //48;5;95
    template<typename BG256_95>
    std::basic_ostream<BG256_95> & BG256_95(std::basic_ostream<BG256_95> &os) {
        os << obj_internal::BG256.BG256_95;

        return os;
    }

    //48;5;96
    template<typename BG256_96>
    std::basic_ostream<BG256_96> & BG256_96(std::basic_ostream<BG256_96> &os) {
        os << obj_internal::BG256.BG256_96;

        return os;
    }

    //48;5;97
    template<typename BG256_97>
    std::basic_ostream<BG256_97> & BG256_97(std::basic_ostream<BG256_97> &os) {
        os << obj_internal::BG256.BG256_97;

        return os;
    }

    //48;5;98
    template<typename BG256_98>
    std::basic_ostream<BG256_98> & BG256_98(std::basic_ostream<BG256_98> &os) {
        os << obj_internal::BG256.BG256_98;

        return os;
    }

    //48;5;99 
    template<typename BG256_99>
    std::basic_ostream<BG256_99> & BG256_99(std::basic_ostream<BG256_99> &os) {
        os << obj_internal::BG256.BG256_99;

        return os;
    }

    //48;5;100
    template<typename BG256_100>
    std::basic_ostream<BG256_100> & BG256_100(std::basic_ostream<BG256_100> &os) {
        os << obj_internal::BG256.BG256_100;

        return os;
    }

    //48;5;101
    template<typename BG256_101>
    std::basic_ostream<BG256_101> & BG256_101(std::basic_ostream<BG256_101> &os) {
        os << obj_internal::BG256.BG256_101;
        
        return os;
    }

    //48;5;102
    template<typename BG256_102> 
    std::basic_ostream<BG256_102> & BG256_102(std::basic_ostream<BG256_102> &os) {
        os << obj_internal::BG256.BG256_102;

        return os;
    }

    //48;5;103
    template<typename BG256_103>
    std::basic_ostream<BG256_103> & BG256_103(std::basic_ostream<BG256_103> &os) {
        os << obj_internal::BG256.BG256_103;

        return os;
    }

    //48;5;104
    template<typename BG256_104>
    std::basic_ostream<BG256_104> & BG256_104(std::basic_ostream<BG256_104> &os) {
        os << obj_internal::BG256.BG256_104;

        return os;
    }

    //48;5;105
    template<typename BG256_105>
    std::basic_ostream<BG256_105> & BG256_105(std::basic_ostream<BG256_105> &os) {
        os << obj_internal::BG256.BG256_105;

        return os;
    }

    //48;5;106
    template<typename BG256_106>
    std::basic_ostream<BG256_106> & BG256_106(std::basic_ostream<BG256_106> &os) {
        os << obj_internal::BG256.BG256_106;

        return os;
    }

    //48;5;107
    template<typename BG256_107>
    std::basic_ostream<BG256_107> & BG256_107(std::basic_ostream<BG256_107> &os) {
        os << obj_internal::BG256.BG256_107;

        return os;
    }

    //48;5;108
    template<typename BG256_108>
    std::basic_ostream<BG256_108> & BG256_108(std::basic_ostream<BG256_108> &os) {
        os << obj_internal::BG256.BG256_108;

        return os;
    }

    //48;5;109
    template<typename BG256_109> 
    std::basic_ostream<BG256_109> & BG256_109(std::basic_ostream<BG256_109> &os) {
        os << obj_internal::BG256.BG256_109;

        return os;
    }

    //48;5;110
    template<typename BG256_110>
    std::basic_ostream<BG256_110> & BG256_110(std::basic_ostream<BG256_110> &os) {
        os << obj_internal::BG256.BG256_110;

        return os;
    }

    //48;5;111
    template<typename BG256_111>
    std::basic_ostream<BG256_111> & BG256_111(std::basic_ostream<BG256_111> &os) {
        os << obj_internal::BG256.BG256_111;

        return os;
    }

    //48;5;112
    template<typename BG256_112>
    std::basic_ostream<BG256_112> & BG256_112(std::basic_ostream<BG256_112> &os) {
        os << obj_internal::BG256.BG256_112;
        
        return os;
    }

    //48;5;113
    template<typename BG256_113>
    std::basic_ostream<BG256_113> & BG256_113(std::basic_ostream<BG256_113> &os) {
        os << obj_internal::BG256.BG256_113;
        
        return os;
    }

    //48;5;114
    template<typename BG256_114>
    std::basic_ostream<BG256_114> & BG256_114(std::basic_ostream<BG256_114> &os) {
        os << obj_internal::BG256.BG256_114;

        return os;
    }

    //48;5;115
    template<typename BG256_115>
    std::basic_ostream<BG256_115> & BG256_115(std::basic_ostream<BG256_115> &os) {
        os << obj_internal::BG256.BG256_115;

        return os;
    }

    //48;5;116
    template<typename BG256_116>
    std::basic_ostream<BG256_116> & BG256_116(std::basic_ostream<BG256_116> &os) {
        os << obj_internal::BG256.BG256_116;

        return os;
    }

    //48;5;117
    template<typename BG256_117>
    std::basic_ostream<BG256_117> & BG256_117(std::basic_ostream<BG256_117> &os) {
        os << obj_internal::BG256.BG256_117;

        return os;
    }

    //48;5;118
    template<typename BG256_118>
    std::basic_ostream<BG256_118> & BG256_118(std::basic_ostream<BG256_118> &os) {
        os << obj_internal::BG256.BG256_118;

        return os;
    }

    //48;5;119
    template<typename BG256_119>
    std::basic_ostream<BG256_119> & BG256_119(std::basic_ostream<BG256_119> &os) {
        os << obj_internal::BG256.BG256_119;

        return os;
    }

    //48;5;120
    template<typename BG256_120>
    std::basic_ostream<BG256_120> & BG256_120(std::basic_ostream<BG256_120> &os) {
        os << obj_internal::BG256.BG256_120;

        return os;
    }

    //48;5;121
    template<typename BG256_121>
    std::basic_ostream<BG256_121> & BG256_121(std::basic_ostream<BG256_121> &os) {
        os << obj_internal::BG256.BG256_121;

        return os;
    }

    //48;5;122
    template<typename BG256_122>
    std::basic_ostream<BG256_122> & BG256_122(std::basic_ostream<BG256_122> &os) {
        os << obj_internal::BG256.BG256_122;

        return os;
    }

    //48;5;123
    template<typename BG256_123>
    std::basic_ostream<BG256_123> & BG256_123(std::basic_ostream<BG256_123> &os) {
        os << obj_internal::BG256.BG256_123;

        return os;
    }

    //48;5;124
    template<typename BG256_124>
    std::basic_ostream<BG256_124> & BG256_124(std::basic_ostream<BG256_124> &os) {
        os << obj_internal::BG256.BG256_124;

        return os;
    }

    //48;5;125
    template<typename BG256_125>
    std::basic_ostream<BG256_125> & BG256_125(std::basic_ostream<BG256_125> &os) {
        os << obj_internal::BG256.BG256_125;

        return os;
    }

    //48;5;126
    template<typename BG256_126>
    std::basic_ostream<BG256_126> & BG256_126(std::basic_ostream<BG256_126> &os) {
        os << obj_internal::BG256.BG256_126;

        return os;
    }

    //48;5;127
    template<typename BG256_127>
    std::basic_ostream<BG256_127> & BG256_127(std::basic_ostream<BG256_127> &os) {
        os << obj_internal::BG256.BG256_127;

        return os;
    }

    //48;5;128
    template<typename BG256_128>
    std::basic_ostream<BG256_128> & BG256_128(std::basic_ostream<BG256_128> &os) {
        os << obj_internal::BG256.BG256_128;

        return os;
    }

    //48;5;129
    template<typename BG256_129>
    std::basic_ostream<BG256_129> & BG256_129(std::basic_ostream<BG256_129> &os) {
        os << obj_internal::BG256.BG256_129;

        return os;
    }

    //48;5;130
    template<typename BG256_130>
    std::basic_ostream<BG256_130> & BG256_130(std::basic_ostream<BG256_130> &os) {
        os << obj_internal::BG256.BG256_130;

        return os;
    }

    //48;5;131
    template<typename BG256_131> 
    std::basic_ostream<BG256_131> & BG256_131(std::basic_ostream<BG256_131> &os) {
        os << obj_internal::BG256.BG256_131;

        return os;
    }

    //48;5;132
    template<typename BG256_132> 
    std::basic_ostream<BG256_132> & BG256_132(std::basic_ostream<BG256_132> &os) {
        os << obj_internal::BG256.BG256_132;

        return os;
    }

    //48;5;133
    template<typename BG256_133>
    std::basic_ostream<BG256_133> & BG256_133(std::basic_ostream<BG256_133> &os) {
        os << obj_internal::BG256.BG256_133;

        return os;
    }
    
    //48;5;134
    template<typename BG256_134>
    std::basic_ostream<BG256_134> & BG256_134(std::basic_ostream<BG256_134> &os) {
        os << obj_internal::BG256.BG256_134;

        return os;
    }

    //48;5;135
    template<typename BG256_135> 
    std::basic_ostream<BG256_135> & BG256_135(std::basic_ostream<BG256_135> &os) {
        os << obj_internal::BG256.BG256_135;

        return os;
    }

    //48;5;136
    template<typename BG256_136> 
    std::basic_ostream<BG256_136> & BG256_136(std::basic_ostream<BG256_136> &os) {
        os << obj_internal::BG256.BG256_136;

        return os;
    }

    //48;5;137
    template<typename BG256_137>
    std::basic_ostream<BG256_137> & BG256_137(std::basic_ostream<BG256_137> &os) {
        os << obj_internal::BG256.BG256_137;

        return os;
    }

    //48;5;138
    template<typename BG256_138>
    std::basic_ostream<BG256_138> & BG256_138(std::basic_ostream<BG256_138> &os) {
        os << obj_internal::BG256.BG256_138;

        return os;
    }

    //48;5;139
    template<typename BG256_139> 
    std::basic_ostream<BG256_139> & BG256_139(std::basic_ostream<BG256_139> &os) {
        os << obj_internal::BG256.BG256_139;

        return os;
    }

    //48;5;140
    template<typename BG256_140>
    std::basic_ostream<BG256_140> & BG256_140(std::basic_ostream<BG256_140> &os) {
        os << obj_internal::BG256.BG256_140;

        return os;
    }

    //48;5;141
    template<typename BG256_141>
    std::basic_ostream<BG256_141> & BG256_141(std::basic_ostream<BG256_141> &os) {
        os << obj_internal::BG256.BG256_141;

        return os;
    }

    //48;5;142
    template<typename BG256_142>
    std::basic_ostream<BG256_142> & BG256_142(std::basic_ostream<BG256_142> &os) {
        os << obj_internal::BG256.BG256_142;

        return os;
    }

    //48;5;143
    template<typename BG256_143>
    std::basic_ostream<BG256_143> & BG256_143(std::basic_ostream<BG256_143> &os) {
        os << obj_internal::BG256.BG256_143;

        return os;
    }

    //48;5;144
    template<typename BG256_144> 
    std::basic_ostream<BG256_144> & BG256_144(std::basic_ostream<BG256_144> &os) {
        os << obj_internal::BG256.BG256_144;

        return os;
    }

    //48;5;145
    template<typename BG256_145>
    std::basic_ostream<BG256_145> & BG256_145(std::basic_ostream<BG256_145> &os) {
        os << obj_internal::BG256.BG256_145;

        return os;
    }

    //48;5;146
    template<typename BG256_146>
    std::basic_ostream<BG256_146> & BG256_146(std::basic_ostream<BG256_146> &os) {
        os << obj_internal::BG256.BG256_146;

        return os;
    }

    //48;5;147
    template<typename BG256_147>
    std::basic_ostream<BG256_147> & BG256_147(std::basic_ostream<BG256_147> &os) {
        os << obj_internal::BG256.BG256_147;

        return os;  
    }

    //48;5;148
    template<typename BG256_148>
    std::basic_ostream<BG256_148> & BG256_148(std::basic_ostream<BG256_148> &os) {
        os << obj_internal::BG256.BG256_148;

        return os;
    }

    //48;5;149
    template<typename BG256_149>
    std::basic_ostream<BG256_149> & BG256_149(std::basic_ostream<BG256_149> &os) {
        os << obj_internal::BG256.BG256_149;

        return os;
    }

    //48;5;150
    template<typename BG256_150>
    std::basic_ostream<BG256_150> & BG256_150(std::basic_ostream<BG256_150> &os) {
        os << obj_internal::BG256.BG256_150;

        return os;
    }

    //48;5;151
    template<typename BG256_151>
    std::basic_ostream<BG256_151> & BG256_151(std::basic_ostream<BG256_151> &os) {
        os << obj_internal::BG256.BG256_151;

        return os;
    }

    //48;5;152
    template<typename BG256_152>
    std::basic_ostream<BG256_152> & BG256_152(std::basic_ostream<BG256_152> &os) {
        os << obj_internal::BG256.BG256_152;

        return os;
    }

    //48;5;153
    template<typename BG256_153> 
    std::basic_ostream<BG256_153> & BG256_153(std::basic_ostream<BG256_153> &os) {
        os << obj_internal::BG256.BG256_153;

        return os;
    }

    //48;5;154
    template<typename BG256_154>
    std::basic_ostream<BG256_154> & BG256_154(std::basic_ostream<BG256_154> &os) {
        os << obj_internal::BG256.BG256_154;

        return os;
    }

    //48;5;155
    template<typename BG256_155>
    std::basic_ostream<BG256_155> & BG256_155(std::basic_ostream<BG256_155> &os) {
        os << obj_internal::BG256.BG256_155;

        return os;
    }

    //48;5;156
    template<typename BG256_156>
    std::basic_ostream<BG256_156> & BG256_156(std::basic_ostream<BG256_156> &os) {
        os << obj_internal::BG256.BG256_156;

        return os;
    }

    //48;5;157
    template<typename BG256_157>
    std::basic_ostream<BG256_157> & BG256_157(std::basic_ostream<BG256_157> &os) {
        os << obj_internal::BG256.BG256_157;

        return os;
    }
    
    //48;5;158
    template<typename BG256_158>
    std::basic_ostream<BG256_158> & BG256_158(std::basic_ostream<BG256_158> &os) {
        os << obj_internal::BG256.BG256_158;

        return os;
    }

    //48;5;159
    template<typename BG256_159>
    std::basic_ostream<BG256_159> & BG256_159(std::basic_ostream<BG256_159> &os) {
        os << obj_internal::BG256.BG256_159;

        return os;
    }

    //48;5;160
    template<typename BG256_160>
    std::basic_ostream<BG256_160> & BG256_160(std::basic_ostream<BG256_160> &os) {
        os << obj_internal::BG256.BG256_160;

        return os;
    }

    //48;5;161
    template<typename BG256_161> 
    std::basic_ostream<BG256_161> & BG256_161(std::basic_ostream<BG256_161> &os) {
        os << obj_internal::BG256.BG256_161;

        return os;
    }

    //48;5;162
    template<typename BG256_162>
    std::basic_ostream<BG256_162> & BG256_162(std::basic_ostream<BG256_162> &os) {
        os << obj_internal::BG256.BG256_162;

        return os;
    }

    //48;5;163
    template<typename BG256_163>
    std::basic_ostream<BG256_163> & BG256_163(std::basic_ostream<BG256_163> &os) {
        os << obj_internal::BG256.BG256_163;

        return os;
    }

    //48;5;164
    template<typename BG256_164>
    std::basic_ostream<BG256_164> & BG256_164(std::basic_ostream<BG256_164> &os) {
        os << obj_internal::BG256.BG256_164;

        return os;
    }

    //48;5;165
    template<typename BG256_165>
    std::basic_ostream<BG256_165> & BG256_165(std::basic_ostream<BG256_165> &os) {
        os << obj_internal::BG256.BG256_165;

        return os;
    }

    //48;5;166
    template<typename BG256_166>
    std::basic_ostream<BG256_166> & BG256_166(std::basic_ostream<BG256_166> &os) {
        os << obj_internal::BG256.BG256_166;

        return os;
    }

    //48;5;167
    template<typename BG256_167>
    std::basic_ostream<BG256_167> & BG256_167(std::basic_ostream<BG256_167> &os) {
        os << obj_internal::BG256.BG256_167;

        return os;
    }

    //48;5;168
    template<typename BG256_168>
    std::basic_ostream<BG256_168> & BG256_168(std::basic_ostream<BG256_168> &os) {
        os << obj_internal::BG256.BG256_168;

        return os;
    }

    //48;5;169
    template<typename BG256_169>
    std::basic_ostream<BG256_169> & BG256_169(std::basic_ostream<BG256_169> &os) {
        os << obj_internal::BG256.BG256_169;

        return os;
    }

    //48;5;170
    template<typename BG256_170>
    std::basic_ostream<BG256_170> & BG256_170(std::basic_ostream<BG256_170> &os) {
        os << obj_internal::BG256.BG256_170;

        return os;
    }

    //48;5;171
    template<typename BG256_171>
    std::basic_ostream<BG256_171> & BG256_171(std::basic_ostream<BG256_171> &os) {
        os << obj_internal::BG256.BG256_171;

        return os;
    }

    //48;5;172
    template<typename BG256_172>
    std::basic_ostream<BG256_172> & BG256_172(std::basic_ostream<BG256_172> &os) {
        os << obj_internal::BG256.BG256_172;

        return os;
    }

    //48;5;173
    template<typename BG256_173>
    std::basic_ostream<BG256_173> & BG256_173(std::basic_ostream<BG256_173> &os) {
        os << obj_internal::BG256.BG256_173;

        return os;
    }

    //48;5;174
    template<typename BG256_174>
    std::basic_ostream<BG256_174> & BG256_174(std::basic_ostream<BG256_174> &os) {
        os << obj_internal::BG256.BG256_174;

        return os;
    }

    //48;5;175
    template<typename BG256_175>
    std::basic_ostream<BG256_175> & BG256_175(std::basic_ostream<BG256_175> &os) {
        os << obj_internal::BG256.BG256_175;

        return os;
    }

    //48;5;176
    template<typename BG256_176>
    std::basic_ostream<BG256_176> & BG256_176(std::basic_ostream<BG256_176> &os) {
        os << obj_internal::BG256.BG256_176;

        return os;
    }

    //48;5;177
    template<typename BG256_177>
    std::basic_ostream<BG256_177> & BG256_177(std::basic_ostream<BG256_177> &os) {
        os << obj_internal::BG256.BG256_177;

        return os;
    }

    //48;5;178
    template<typename BG256_178>
    std::basic_ostream<BG256_178> & BG256_178(std::basic_ostream<BG256_178> &os) {
        os << obj_internal::BG256.BG256_178;

        return os;
    }

    //48;5;179
    template<typename BG256_179>
    std::basic_ostream<BG256_179> & BG256_179(std::basic_ostream<BG256_179> &os) {
        os << obj_internal::BG256.BG256_179;

        return os;
    }

    //48;5;180
    template<typename BG256_180>
    std::basic_ostream<BG256_180> & BG256_180(std::basic_ostream<BG256_180> &os) {
        os << obj_internal::BG256.BG256_180;
        
        return os;
    }

    //48;5;181
    template<typename BG256_181>
    std::basic_ostream<BG256_181> & BG256_181(std::basic_ostream<BG256_181> &os) {
        os << obj_internal::BG256.BG256_181;

        return os;
    }

    //48;5;182
    template<typename BG256_182>
    std::basic_ostream<BG256_182> & BG256_182(std::basic_ostream<BG256_182> &os) {
        os << obj_internal::BG256.BG256_182;

        return os;
    }

    //48;5;183
    template<typename BG256_183>
    std::basic_ostream<BG256_183> & BG256_183(std::basic_ostream<BG256_183> &os) {
        os << obj_internal::BG256.BG256_183;

        return os;
    }

    //48;5;184
    template<typename BG256_184>
    std::basic_ostream<BG256_184> & BG256_184(std::basic_ostream<BG256_184> &os) {
        os << obj_internal::BG256.BG256_184;

        return os;
    }

    //48;5;185
    template<typename BG256_185>
    std::basic_ostream<BG256_185> & BG256_185(std::basic_ostream<BG256_185> &os) {
        os << obj_internal::BG256.BG256_185;
        
        return os;
    }
    
    //48;5;186
    template<typename BG256_186>
    std::basic_ostream<BG256_186> & BG256_186(std::basic_ostream<BG256_186> &os) {
        os << obj_internal::BG256.BG256_186;

        return os;
    }

    //48;5;187 
    template<typename BG256_187>
    std::basic_ostream<BG256_187> & BG256_187(std::basic_ostream<BG256_187> &os) {
        os << obj_internal::BG256.BG256_187;

        return os;
    }

    //48;5;188
    template<typename BG256_188> 
    std::basic_ostream<BG256_188> & BG256_188(std::basic_ostream<BG256_188> &os) {
        os << obj_internal::BG256.BG256_188;

        return os;
    }

    //48;5;189
    template<typename BG256_189> 
    std::basic_ostream<BG256_189> & BG256_189(std::basic_ostream<BG256_189> &os) {
        os << obj_internal::BG256.BG256_189;

        return os; 
    }

    //48;5;190
    template<typename BG256_190>
    std::basic_ostream<BG256_190> & BG256_190(std::basic_ostream<BG256_190> &os) {
        os << obj_internal::BG256.BG256_190;

        return os;
    }

    //48;5;191
    template<typename BG256_191>
    std::basic_ostream<BG256_191> & BG256_191(std::basic_ostream<BG256_191> &os) {
        os << obj_internal::BG256.BG256_191;

        return os;
    }

    //48;5;192
    template<typename BG256_192>
    std::basic_ostream<BG256_192> & BG256_192(std::basic_ostream<BG256_192> &os) {
        os << obj_internal::BG256.BG256_192;

        return os;
    }

    //48;5;193
    template<typename BG256_193>
    std::basic_ostream<BG256_193> & BG256_193(std::basic_ostream<BG256_193> &os) {
        os << obj_internal::BG256.BG256_193;

        return os;
    }

    //48;5;194
    template<typename BG256_194>
    std::basic_ostream<BG256_194> & BG256_194(std::basic_ostream<BG256_194> &os) {
        os << obj_internal::BG256.BG256_194;

        return os;
    }

    //48;5;195
    template<typename BG256_195>
    std::basic_ostream<BG256_195> & BG256_195(std::basic_ostream<BG256_195> &os) {
        os << obj_internal::BG256.BG256_195;

        return os;
    }

    //48;5;196
    template<typename BG256_196>
    std::basic_ostream<BG256_196> & BG256_196(std::basic_ostream<BG256_196> &os) {
        os << obj_internal::BG256.BG256_196;
        
        return os;
    }

    //48;5;197
    template<typename BG256_197>
    std::basic_ostream<BG256_197> & BG256_197(std::basic_ostream<BG256_197> &os) {
        os << obj_internal::BG256.BG256_197;

        return os;
    }

    //48;5;198
    template<typename BG256_198>
    std::basic_ostream<BG256_198> & BG256_198(std::basic_ostream<BG256_198> &os) {
        os << obj_internal::BG256.BG256_198;

        return os;
    }

    //48;5;199
    template<typename BG256_199> 
    std::basic_ostream<BG256_199> & BG256_199(std::basic_ostream<BG256_199> &os) {
        os << obj_internal::BG256.BG256_199;

        return os;
    }

    //48;5;200
    template<typename BG256_200>
    std::basic_ostream<BG256_200> & BG256_200(std::basic_ostream<BG256_200> &os) {
        os << obj_internal::BG256.BG256_200;

        return os;
    }
    
    //48;5;201
    template<typename BG256_201>
    std::basic_ostream<BG256_201> & BG256_201(std::basic_ostream<BG256_201> &os) {
        os << obj_internal::BG256.BG256_201;

        return os;
    }

    //48;5;202
    template<typename BG256_202> 
    std::basic_ostream<BG256_202> & BG256_202(std::basic_ostream<BG256_202> &os) {
        os << obj_internal::BG256.BG256_202;

        return os;
    }

    //48;5;203
    template<typename BG256_203> 
    std::basic_ostream<BG256_203> & BG256_203(std::basic_ostream<BG256_203> &os) {
        os << obj_internal::BG256.BG256_203;

        return os;
    }

    //48;5;204
    template<typename BG256_204> 
    std::basic_ostream<BG256_204> & BG256_204(std::basic_ostream<BG256_204> &os) {
        os << obj_internal::BG256.BG256_204;

        return os;
    }

    //48;5;205
    template<typename BG256_205>
    std::basic_ostream<BG256_205> & BG256_205(std::basic_ostream<BG256_205> &os) {
        os << obj_internal::BG256.BG256_205;

        return os;
    }

    //48;5;206
    template<typename BG256_206>
    std::basic_ostream<BG256_206> & BG256_206(std::basic_ostream<BG256_206> &os) {
        os << obj_internal::BG256.BG256_206;

        return os;
    }

    //48;5;207
    template<typename BG256_207>
    std::basic_ostream<BG256_207> & BG256_207(std::basic_ostream<BG256_207> &os) {
        os << obj_internal::BG256.BG256_207;

        return os;
    }

    //48;5;208
    template<typename BG256_208>
    std::basic_ostream<BG256_208> & BG256_208(std::basic_ostream<BG256_208> &os) {
        os << obj_internal::BG256.BG256_208;

        return os;
    }

    //48;5;209
    template<typename BG256_209>
    std::basic_ostream<BG256_209> & BG256_209(std::basic_ostream<BG256_209> &os) {
        os << obj_internal::BG256.BG256_209;

        return os;
    }

    //48;5;210
    template<typename BG256_210>
    std::basic_ostream<BG256_210> & BG256_210(std::basic_ostream<BG256_210> &os) {
        os << obj_internal::BG256.BG256_210;

        return os;
    }

    //48;5;211
    template<typename BG256_211>
    std::basic_ostream<BG256_211> & BG256_211(std::basic_ostream<BG256_211> &os) {
        os << obj_internal::BG256.BG256_211;

        return os;
    }

    //48;5;212
    template<typename BG256_212>
    std::basic_ostream<BG256_212> & BG256_212(std::basic_ostream<BG256_212> &os) {
        os << obj_internal::BG256.BG256_212;

        return os;
    }

    //48;5;213
    template<typename BG256_213> 
    std::basic_ostream<BG256_213> & BG256_213(std::basic_ostream<BG256_213> &os) {
        os << obj_internal::BG256.BG256_213;

        return os;
    }

    //48;5;214
    template<typename BG256_214>
    std::basic_ostream<BG256_214> & BG256_214(std::basic_ostream<BG256_214> &os) {
        os << obj_internal::BG256.BG256_214;

        return os;
    }

    //48;5;215
    template<typename BG256_215>
    std::basic_ostream<BG256_215> & BG256_215(std::basic_ostream<BG256_215> &os) {
        os << obj_internal::BG256.BG256_215;

        return os;
    }

    //48;5;216
    template<typename BG256_216>
    std::basic_ostream<BG256_216> & BG256_216(std::basic_ostream<BG256_216> &os) {
        os << obj_internal::BG256.BG256_216;

        return os;
    }

    //48;5;217
    template<typename BG256_217>
    std::basic_ostream<BG256_217> & BG256_217(std::basic_ostream<BG256_217> &os) {
        os << obj_internal::BG256.BG256_217;

        return os;
    }

    //48;5;218
    template<typename BG256_218>
    std::basic_ostream<BG256_218> & BG256_218(std::basic_ostream<BG256_218> &os) {
        os << obj_internal::BG256.BG256_218;

        return os;
    }

    //48;5;219
    template<typename BG256_219>
    std::basic_ostream<BG256_219> & BG256_219(std::basic_ostream<BG256_219> &os) {
        os << obj_internal::BG256.BG256_219;

        return os;
    }

    //48;5;220
    template<typename BG256_220>
    std::basic_ostream<BG256_220> & BG256_220(std::basic_ostream<BG256_220> &os) {
        os << obj_internal::BG256.BG256_220;

        return os;
    }

    //48;5;221
    template<typename BG256_221>
    std::basic_ostream<BG256_221> & BG256_221(std::basic_ostream<BG256_221> &os) {
        os << obj_internal::BG256.BG256_221;

        return os;
    }

    //48;5;222
    template<typename BG256_222>
    std::basic_ostream<BG256_222> & BG256_222(std::basic_ostream<BG256_222> &os) {
        os << obj_internal::BG256.BG256_222;

        return os;
    }

    //48;5;223
    template<typename BG256_223>
    std::basic_ostream<BG256_223> & BG256_223(std::basic_ostream<BG256_223> &os) {
        os << obj_internal::BG256.BG256_223;

        return os;
    }

    //48;5;224
    template<typename BG256_224>
    std::basic_ostream<BG256_224> & BG256_224(std::basic_ostream<BG256_224> &os) {
        os << obj_internal::BG256.BG256_224;

        return os;
    }

    //48;5;225
    template<typename BG256_225>
    std::basic_ostream<BG256_225> & BG256_225(std::basic_ostream<BG256_225> &os) {
        os << obj_internal::BG256.BG256_225;

        return os;
    }

    //48;5;226
    template<typename BG256_226>
    std::basic_ostream<BG256_226> & BG256_226(std::basic_ostream<BG256_226> &os) {
        os << obj_internal::BG256.BG256_226;

        return os;
    }

    //48;5;227
    template<typename BG256_227>
    std::basic_ostream<BG256_227> & BG256_227(std::basic_ostream<BG256_227> &os) {
        os << obj_internal::BG256.BG256_227;

        return os;
    }

    //48;5;228
    template<typename BG256_228>
    std::basic_ostream<BG256_228> & BG256_228(std::basic_ostream<BG256_228> &os) {
        os << obj_internal::BG256.BG256_228;

        return os;
    }
    
    //48;5;229
    template<typename BG256_229>
    std::basic_ostream<BG256_229> & BG256_229(std::basic_ostream<BG256_229> &os) {
        os << obj_internal::BG256.BG256_229;

        return os;
    }

    //48;5;230
    template<typename BG256_230>
    std::basic_ostream<BG256_230> & BG256_230(std::basic_ostream<BG256_230> &os) {
        os << obj_internal::BG256.BG256_230;

        return os;
    }

    //48;5;231
    template<typename BG256_231>
    std::basic_ostream<BG256_231> & BG256_231(std::basic_ostream<BG256_231> &os) {
        os << obj_internal::BG256.BG256_231;

        return os;
    }

    //48;5;232
    template<typename BG256_232>
    std::basic_ostream<BG256_232> & BG256_232(std::basic_ostream<BG256_232> &os) {
        os << obj_internal::BG256.BG256_232;

        return os;
    }

    //48;5;233
    template<typename BG256_233>
    std::basic_ostream<BG256_233> & BG256_233(std::basic_ostream<BG256_233> &os) {
        os << obj_internal::BG256.BG256_233;

        return os;
    }

    //48;5;234
    template<typename BG256_234>
    std::basic_ostream<BG256_234> & BG256_234(std::basic_ostream<BG256_234> &os) {
        os << obj_internal::BG256.BG256_234;

        return os;
    }

    //48;5;235
    template<typename BG256_235> 
    std::basic_ostream<BG256_235> & BG256_235(std::basic_ostream<BG256_235> &os) {
        os << obj_internal::BG256.BG256_235;

        return os;
    }

    //48;5;236
    template<typename BG256_236>
    std::basic_ostream<BG256_236> & BG256_236(std::basic_ostream<BG256_236> &os) {
        os << obj_internal::BG256.BG256_236;

        return os;
    }

    //48;5;237
    template<typename BG256_237>
    std::basic_ostream<BG256_237> & BG256_237(std::basic_ostream<BG256_237> &os) {
        os << obj_internal::BG256.BG256_237;

        return os;
    }

    //48;5;238
    template<typename BG256_238>
    std::basic_ostream<BG256_238> & BG256_238(std::basic_ostream<BG256_238> &os) {
        os << obj_internal::BG256.BG256_238;

        return os;
    }

    //48;5;239
    template<typename BG256_239>
    std::basic_ostream<BG256_239> & BG256_239(std::basic_ostream<BG256_239> &os) {
        os << obj_internal::BG256.BG256_239;

        return os;
    }

    //48;5;240
    template<typename BG256_240>
    std::basic_ostream<BG256_240> & BG256_240(std::basic_ostream<BG256_240> &os) {
        os << obj_internal::BG256.BG256_240;

        return os;
    }

    //48;5;241
    template<typename BG256_241>
    std::basic_ostream<BG256_241> & BG256_241(std::basic_ostream<BG256_241> &os) {
        os << obj_internal::BG256.BG256_241;

        return os;
    }

    //48;5;242
    template<typename BG256_242>
    std::basic_ostream<BG256_242> & BG256_242(std::basic_ostream<BG256_242> &os) {
        os << obj_internal::BG256.BG256_242;

        return os;
    }

    //48;5;243
    template<typename BG256_243>
    std::basic_ostream<BG256_243> & BG256_243(std::basic_ostream<BG256_243> &os) {
        os << obj_internal::BG256.BG256_243;

        return os;
    }

    //48;5;244
    template<typename BG256_244>
    std::basic_ostream<BG256_244> & BG256_244(std::basic_ostream<BG256_244> &os) {
        os << obj_internal::BG256.BG256_244;

        return os;
    }

    //48;5;245
    template<typename BG256_245>
    std::basic_ostream<BG256_245> & BG256_245(std::basic_ostream<BG256_245> &os) {
        os << obj_internal::BG256.BG256_245;

        return os;
    }

    //48;5;246
    template<typename BG256_246>
    std::basic_ostream<BG256_246> & BG256_246(std::basic_ostream<BG256_246> &os) {
        os << obj_internal::BG256.BG256_246;

        return os;
    }

    //48;5;247
    template<typename BG256_247>
    std::basic_ostream<BG256_247> & BG256_247(std::basic_ostream<BG256_247> &os) {
        os << obj_internal::BG256.BG256_247;

        return os;
    }

    //48;5;248
    template<typename BG256_248>
    std::basic_ostream<BG256_248> & BG256_248(std::basic_ostream<BG256_248> &os) {
        os << obj_internal::BG256.BG256_248;

        return os;
    }

    //48;5;249
    template<typename BG256_249>
    std::basic_ostream<BG256_249> & BG256_249(std::basic_ostream<BG256_249> &os) {
        os << obj_internal::BG256.BG256_249;

        return os;
    }

    //48;5;250
    template<typename BG256_250>
    std::basic_ostream<BG256_250> & BG256_250(std::basic_ostream<BG256_250> &os) {
        os << obj_internal::BG256.BG256_250;

        return os;
    }

    //48;5;251
    template<typename BG256_251>
    std::basic_ostream<BG256_251> & BG256_251(std::basic_ostream<BG256_251> &os) {
        os << obj_internal::BG256.BG256_251;

        return os;
    }

    //48;5;252
    template<typename BG256_252>
    std::basic_ostream<BG256_252> & BG256_252(std::basic_ostream<BG256_252> &os) {
        os << obj_internal::BG256.BG256_252;

        return os;
    }

    //48;5;253
    template<typename BG256_253>
    std::basic_ostream<BG256_253> & BG256_253(std::basic_ostream<BG256_253> &os) {
        os << obj_internal::BG256.BG256_253;

        return os;
    }

    //48;5;254
    template<typename BG256_254>
    std::basic_ostream<BG256_254> & BG256_254(std::basic_ostream<BG256_254> &os) {
        os << obj_internal::BG256.BG256_254; 

        return os;
    }

    //48;5;255
    template<typename BG256_255>
    std::basic_ostream<BG256_255> & BG256_255(std::basic_ostream<BG256_255> &os) {
        os << obj_internal::BG256.BG256_255;

        return os;
    }

    //48;5;256
    template<typename BG256_256>
    std::basic_ostream<BG256_256> & BG256_256(std::basic_ostream<BG256_256> &os) {
        os << obj_internal::BG256.BG256_256;

        return os;
    }
}
#endif