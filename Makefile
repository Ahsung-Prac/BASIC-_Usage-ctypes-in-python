libctypes:
	g++ -c -fPIC ctypes.cpp
	g++ -shared -o libctypes.so ctypes.o
