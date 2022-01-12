

all: Matrix MatrixImple
	g++ Matrix.cpp MatrixImple.cpp -o out

Matrix:
	g++ -c Matrix.cpp

MatrixImple:
	g++ -c MatrixImple.cpp

clean:
	rm *.o out
