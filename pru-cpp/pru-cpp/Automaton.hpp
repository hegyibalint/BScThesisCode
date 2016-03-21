#pragma once

#include <stdint.h>

#include "Signal.hpp"
#include "State.hpp"
#include "Transition.hpp"

class Automaton {
	State& initialState;
	State& trapState;
	
	State* states;
	uint32_t stateCount;

	Transition* transitions;
	uint32_t transitionCount;
	
public:
	Automaton(State* states, uint32_t stateCount,
			  Transition* transitions, uint32_t transitionCount,
			  State& initial, State& trap);
	void init();
	void step(Signal signal);
};

class Automaton_A : public Automaton {
	static State states[];
	static Transition transitions[];
	
public:
	Automaton_A() : Automaton(states, 4, transitions, 3, states[0], states[3]) { }
};
