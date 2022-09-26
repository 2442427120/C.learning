#include "port.h"

int main(void)
{
	Port port1("ABC", "sweet", 200);
	cout << port1 << endl;;

	VintagePort vp1("DEF", 100, "duck", "bbq", 300);
	cout << vp1 << endl;

	Port port2(vp1);
	cout << port2 << endl;

	Port* p_port;
	p_port = &vp1;
	p_port->Show();
	cout << endl;

	p_port = &port1;
	p_port->Show();

	return 0;
}