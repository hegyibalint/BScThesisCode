#pragma once

#include "State.hpp"
#include "Signal.hpp"

class Transition {
	State& incoming;
	State& outgoing;
	Signal guard;
	
public:
	Transition(State& in, State& out, Signal guard);
	bool isAccept(Signal signal);
	void activate();
};
