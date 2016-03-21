#include "Automaton.hpp"

Automaton::Automaton(State* states, uint32_t stateCount,
		  Transition* transitions, uint32_t transitionCount,
		  State& initial, State& trap) :
states(states),
stateCount(stateCount),
transitions(transitions),
transitionCount(transitionCount),
initialState(initial),
trapState(trap)
{
	initialState.placeToken();
	//std::cout << "Automaton created" << std::endl;
}

void Automaton::init() {
	initialState.placeToken();
}

void Automaton::step(Signal signal) {
	for (int i = 0; i < transitionCount; ++i) {
		Transition t = transitions[i];
		if (t.isAccept(signal)) {
			t.activate();
		}
	}
}

State Automaton_A::states[4] = {
	State(false),
	State(false),
	State(true),
	State(false)
};

Transition Automaton_A::transitions[60] = {
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
	Transition(Automaton_A::states[0], Automaton_A::states[1], SIGNAL_A),
	Transition(Automaton_A::states[1], Automaton_A::states[2], SIGNAL_B),
	Transition(Automaton_A::states[2], Automaton_A::states[1], SIGNAL_B),
};
