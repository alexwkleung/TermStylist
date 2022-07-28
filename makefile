CXX = g++
CPPFLAGS = -std=c++17 -Wall -Wextra -g 

VAR_DEMO = demo/demo.cpp
OUT_DEMO = demo/demo.o

VAR_TEST = test/test_termstylist.cpp
OUT_TEST = test/test.o

# demo 
.PHONY: demo
demo:
	clear
	${CXX} ${CPPFLAGS} ${VAR_DEMO} -o ${OUT_DEMO} && ./${OUT_DEMO}

# test
.PHONY: test
test:
	clear
	${CXX} ${CPPFLAGS} ${VAR_TEST} -o ${OUT_TEST} && ./${OUT_TEST}

# clean
.PHONY: clean
clean:
	rm ${OUT_DEMO} || rm ${OUT_TEST} || rm ${OUT_DEMO} && rm ${OUT_TEST}