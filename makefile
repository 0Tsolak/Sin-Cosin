cpp_sincos:sin_cos.o sin.o cos.o
	g++ sin_cos.o sin.o cos.o -o cpp_sincos

sin_cos.o:sin_cos.cpp
	g++ -c sin_cos.cpp -o sin_cos.o

sin.o:sin.cpp
	g++ -c sin.cpp -o sin.o

cos.o:cos.cpp
	g++ -c cos.cpp -o cos.o

clean:
	rm cos.o sin.o sin_cos.o cpp_sincos
