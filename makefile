main: Persona.o Maestro.o Poder.o Ofensivo.o Defensivos.o Curativos.o Invocacion.o Elemento.o Air.o Fire.o Water.o Earth.o non.o main.o
	g++ Persona.o Maestro.o Poder.o Ofensivo.o Defensivos.o Curativos.o Invocacion.o Elemento.o Air.o Fire.o Water.o Earth.o non.o main.o -o run

Persona.o: Persona.cpp Maestro.cpp
	g++ -c Persona.cpp Maestro.cpp

Poder.o: Poder.cpp Ofensivo.cpp Defensivos.cpp  Curativos.cpp Invocacion.cpp
	g++ -c Poder.cpp Ofensivo.cpp Defensivos.cpp Curativos.cpp Invocacion.cpp

Elemento.o: Elemento.cpp Air.cpp Fire.cpp Water.cpp Earth.cpp non.cpp
	g++ -c Elemento.cpp Air.cpp Fire.cpp Water.cpp Earth.cpp non.cpp

main.o: main.cpp
	g++ -c main.cpp