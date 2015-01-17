#ifndef MODULE_HPP
# define MODULE_HPP

#include "IMonitorModule.hpp"
#include <cstdlib>

class Module
{
	private:
		IMonitorModule		*module;
		Module(Module const&);
		Module				&operator=(Module const&);
	protected:
	public:
		Module(void);
		~Module(void);
};

#endif