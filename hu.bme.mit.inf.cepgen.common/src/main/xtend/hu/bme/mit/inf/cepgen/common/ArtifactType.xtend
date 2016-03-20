package hu.bme.mit.inf.cepgen.common

/** 
 * @author Bálint Hegyi
 * Describes the type of the generated artifacts
 */
public enum ArtifactType {
	/** 
	 * A header file, for example a *.h, or *.hpp file
	 */
	HEADER_FILE,
	/** 
	 * A source file, for example a *.c, or *.cpp file
	 */
	IMPLEMENTATION_FILE
}
