#include "empleado.h"
#include "paga.h"
#include "string.h"

using namespace std;

class Fijo : public Empleado
{
public:
    Fijo();
    float getSueldoPeso();
    float getSueldoDolar();
    ~Fijo();
};
