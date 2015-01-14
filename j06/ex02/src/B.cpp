#include "B.hpp"

/******************************************************************************/
/* Constructors                                                               */
/******************************************************************************/

B::B()
{

}

B::B(B const &model)
{
	*this = model;
}

B::~B()
{

}

/******************************************************************************/
/* Getters Setters                                                            */
/******************************************************************************/

/******************************************************************************/
/* Other Functions                                                            */
/******************************************************************************/

std::string	B::toString() const
{
	std::stringstream ss;
	ss << "B";
	return ss.str();
}

B& B::operator=(B const &)
{
	return *this;
}

std::ostream &operator<<(std::ostream &o, B const &i)
{
	o << i.toString();
	return o;
}
