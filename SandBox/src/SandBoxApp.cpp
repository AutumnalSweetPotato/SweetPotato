#include <SweetPotato.h>

class SandBox : public SweetPotato::Application
{
public:
	SandBox(){}
	~SandBox(){}
};

SweetPotato::Application*  SweetPotato::CreateApplication()
{
	return new SandBox();
}