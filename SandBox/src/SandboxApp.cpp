
#include <Hazel.h>

class Sandox : public Hazel::Application {

public:
	Sandox(){}
	~Sandox(){}
};

Hazel::Application* Hazel::CreateApplication() {
	// TODO : Eventos
	return new Sandox();
}