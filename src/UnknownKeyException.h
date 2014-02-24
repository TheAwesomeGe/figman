#ifndef UNKNOWNKEYEXCEPTION_H_
#define UNKNOWNKEYEXCEPTION_H_

namespace figman {

/**
 * An exception stating attempted access to the value of an unknown key.
 *
 * @author Eugenio Ribeiro
 */
class UnknownKeyException {
public:
	/**
	 * Creates a new exception.
	 */
	UnknownKeyException() = default;

	/**
	 * Destroys the exception.
	 */
	~UnknownKeyException() = default;
};

}
#endif
