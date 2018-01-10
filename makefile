CXX = g++
SRCS = Dice.cpp Creature.cpp ReptilePeople.cpp Medusa.cpp Gollum.cpp BlueMen.cpp HarryPotter.cpp Main.cpp
HEADERS = Dice.hpp Creature.hpp ReptilePeople.hpp Medusa.hpp Gollum.hpp BlueMen.hpp HarryPotter.hpp 

main: ${SRCS} ${HEADERS}
	${CXX} ${SRCS} -o main

clean:
	rm main

