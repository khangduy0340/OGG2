# makefile
# Pokemon
# created: 3/15/22

all: game
    
game: 
	 g++ -o game Pokemon.cpp Charizard.cpp Geninja.cpp Function.cpp main.cpp
    

clean:
	rm game