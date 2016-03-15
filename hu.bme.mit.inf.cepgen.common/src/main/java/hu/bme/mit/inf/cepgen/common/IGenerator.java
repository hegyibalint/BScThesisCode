package hu.bme.mit.inf.cepgen.common;

import java.util.HashMap;

/**
 * The basic interface for code generation, 
 * every supported code generator must implement this.
 * 
 * @author Bálint Hegyi 
 * 
 */
public interface IGenerator {
	
	/**
	 * Generates the given instance model into executable code
	 * 
	 * @return The hash map of result files
	 */
	HashMap<GenerationResultType, String> generate();
	void saveGenerationResult(HashMap<GenerationResultType, String> result, String rootPath);
}
