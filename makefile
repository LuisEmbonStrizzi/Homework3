CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Wpedantic -g

.PHONY: all ejercicio1 ejercicio2 ejercicio3 clean

all: ejercicio1 ejercicio2 ejercicio3

ejercicio1:
	cd Ejercicio1 && \
	$(CXX) $(CXXFLAGS) examples/main.cpp src/Presion.cpp src/Posicion.cpp src/SaveFlightData.cpp src/MedicionBase.cpp -o ejercicio1 && ./ejercicio1

ejercicio2:
	cd Ejercicio2 && \
	$(CXX) $(CXXFLAGS) examples/main.cpp src/Punto.cpp src/Circulo.cpp src/Elipse.cpp src/Rectangulo.cpp -o ejercicio2 && ./ejercicio2

ejercicio3:
	cd Ejercicio3 && \
	$(CXX) $(CXXFLAGS) examples/main.cpp src/JsonBuilder.cpp -o ejercicio3 && ./ejercicio3
clean:
	rm -f Ejercicio1/ejercicio1 Ejercicio2/ejercicio2 Ejercicio3/ejercicio3