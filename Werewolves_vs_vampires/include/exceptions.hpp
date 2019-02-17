/**
 * Errors handling through exceptions.
 */
#ifndef EXCEPTIONS_HPP
#include <exception>
#include <string>

class SDLException : public std::exception {
protected:
	std::string message;
public:
	SDLException(const char * msg);
	virtual const char * what() const throw();
};

class FileSystemError : public std::runtime_error {
protected:
	std::string path;
public:
	FileSystemError(const char *, const char *);
	virtual const char * what() const throw();
};
#endif