#include "Transition.hpp"

Transition::Transition(State& in, State& out, Signal guard)
: incoming(in), outgoing(out), guard(guard) { }

bool Transition::isAccept(Signal signal) {
	return (guard == signal);
}

void Transition::activate() {
	if (incoming.hasToken()) {
		incoming.removeToken();
		outgoing.placeToken();
	}
}
