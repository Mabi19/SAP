LIB=-static
CXX=g++
test.exe: ArgList.o functions.o main.o
	$(CXX) $^ -o $@ $(LIB)

sap.a: ArgList.o functions.o
	ar ru $@ $^
	ranlib $@

ArgList.o: ArgList.cpp
	$(CXX) $^ -o $@ -c

functions.o: functions.cpp
	$(CXX) $^ -o $@ -c

main.o: main.cpp
	$(CXX) $^ -o $@ -c

