package hu.bme.mit.inf.cepgen.common

import EventAutomatonModel.ComplexEventProcessor
import org.eclipse.viatra.query.runtime.api.ViatraQueryEngine
import org.eclipse.viatra.query.runtime.emf.EMFScope

abstract class AbstractGenerator implements IGenerator {
	
	protected abstract def void validate(ComplexEventProcessor cep, ViatraQueryEngine qe)
	
	protected abstract def GenerationResult generate(ComplexEventProcessor cep, ViatraQueryEngine qe)
	
	override generate(ComplexEventProcessor cep) {
		val qe = ViatraQueryEngine.on(new EMFScope(cep));
		return generate(cep, qe);
	}
	
}