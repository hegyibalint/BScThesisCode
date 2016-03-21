#pragma once

#include <stdint.h>

class State {
	bool active;
	bool acceptorState;
	
public:
	State(bool acceptorState = false);
	
	bool isAcceptor();
	bool hasToken();

	void setActive();
	void
};