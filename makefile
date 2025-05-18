CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Wpedantic -g

.PHONY: all ejercicio2 clean

all: ejercicio2

ejercicio2:
	cd Ejercicio2 && \
	$(CXX) $(CXXFLAGS) examples/main.cpp src/Punto.cpp src/Circulo.cpp src/Elipse.cpp src/Rectangulo.cpp -o ejercicio2 && ./ejercicio2

clean:
	rm -f Ejercicio2/ejercicio2