//#include <iostream>

#include "Automaton.hpp"

int main(int argc, const char * argv[]) {
	Automaton_A automaton;
	automaton.init();
	
//	std::cout << "SIGNAL_A" << std::endl;
	automaton.step(SIGNAL_A);
//	std::cout << "SIGNAL_A" << std::endl;
	automaton.step(SIGNAL_A);
//	std::cout << "SIGNAL_B" << std::endl;
	automaton.step(SIGNAL_B);
//	std::cout << "SIGNAL_B" << std::endl;
	automaton.step(SIGNAL_B);
//	std::cout << "SIGNAL_B" << std::endl;
	automaton.step(SIGNAL_B);
//	std::cout << "SIGNAL_B" << std::endl;
	automaton.step(SIGNAL_B);
//	std::cout << "SIGNAL_B" << std::endl;
	automaton.step(SIGNAL_B);
//	std::cout << "SIGNAL_B" << std::endl;
	automaton.step(SIGNAL_B);
}
