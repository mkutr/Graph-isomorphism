#include <iostream>
#include "Header.h"

int main(int argc, char* argv[])
{
	Graph graph1(argv [1]), graph2(argv[2]) ;
	graph1.show();
	graph2.show();
	graph1.check_isomorphism(graph2);
	graph1.show_isomorphism();

}
