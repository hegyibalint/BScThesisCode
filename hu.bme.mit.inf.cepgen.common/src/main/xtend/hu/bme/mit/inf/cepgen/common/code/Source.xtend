package hu.bme.mit.inf.cepgen.common.code

import java.util.List

class Source {
	String[] lines;
	
	new(String rawSource) {
		lines = rawSource.split("/n");
	}
	
}