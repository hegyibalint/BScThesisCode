#include "State.hpp"

State::State(bool acceptorState) : tokens(0), acceptorState(acceptorState)
{ }

bool State::isAcceptor() {
	return acceptorState;
}

bool State::hasToken() {
	return tokens != 0;
}

void State::placeToken() {
	++tokens;
}

void State::removeToken() {
	--tokens;
}