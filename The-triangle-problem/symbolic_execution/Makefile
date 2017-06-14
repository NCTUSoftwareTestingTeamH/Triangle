all: TRIANGLE symbolicExecution.cpp
	clang++ -emit-llvm -c -g -o symbolicExecution.o symbolicExecution.cpp
	llvm-link -o symbolicExecutionTriangle.bc symbolicExecution.o triangle.o
TRIANGLE: ../triangle.h ../triangle.cpp
	clang++ -emit-llvm -c -g -o triangle.o ../triangle.cpp
