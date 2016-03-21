package hu.bme.mit.inf.cepgen.pru

import EventAutomatonModel.ComplexEventProcessor
import hu.bme.mit.inf.cepgen.common.AbstractGenerator
import hu.bme.mit.inf.cepgen.common.GenerationResult
import hu.bme.mit.inf.cepgen.common.exception.FeatureNotSupported
import hu.bme.mit.inf.cepgen.query.Queries
import org.eclipse.viatra.query.runtime.api.ViatraQueryEngine

class PRUGenerator extends AbstractGenerator {

	override validate(ComplexEventProcessor cep, ViatraQueryEngine qe) {
		if (Queries.instance.getEpsilonTransition(qe).countMatches > 0) {
			throw new FeatureNotSupported("Epsilon transition are not supported")
		}
	}

	override generate(ComplexEventProcessor cep, ViatraQueryEngine qe) {
		validate(cep, qe);
		
		
		
		return new GenerationResult
	}

}
