package hu.bme.mit.inf.cepgen.common

import EventAutomatonModel.ComplexEventProcessor
import org.eclipse.viatra.query.runtime.api.ViatraQueryEngine

/** 
 * The basic interface for code generation, 
 * every supported code generator implement this interface.
 * @author Bálint Hegyi 
 */
interface IGenerator {
	
	/** 
	 * Generates the given instance model into executable code
	 * @return A GenerationResult object handling the artifacts
	 */
	def GenerationResult generate(ComplexEventProcessor cep)

}
