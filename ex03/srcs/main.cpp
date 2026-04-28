#include <iostream>
#include "../includes/Point.hpp"

// Le prototype de ta fonction bsp
bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	// On crée un triangle rectangle : A(0,0), B(10,0), C(0,10)
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(0.0f, 10.0f);

	// On crée nos points de test
	Point p1_inside(2.0f, 2.0f);    // Strictement à l'intérieur
	Point p2_outside(10.0f, 10.0f); // Clairement à l'extérieur
	Point p3_edge(5.0f, 0.0f);      // Pile sur la ligne entre A et B
	Point p4_vertex(0.0f, 0.0f);    // Pile sur le sommet A

	std::cout << "--- TEST DE L'ALGORITHME BSP ---" << std::endl;
	std::cout << "Triangle : A(0,0) | B(10,0) | C(0,10)\n" << std::endl;

	// Test 1 : À l'intérieur
	std::cout << "Test 1 - Point(2, 2) [Interieur] : ";
	if (bsp(a, b, c, p1_inside))
		std::cout << "✅ Dedans (True)" << std::endl;
	else
		std::cout << "❌ Dehors (False)" << std::endl;

	// Test 2 : À l'extérieur
	std::cout << "Test 2 - Point(10, 10) [Exterieur] : ";
	if (bsp(a, b, c, p2_outside))
		std::cout << "❌ Dedans (True)" << std::endl;
	else
		std::cout << "✅ Dehors (False)" << std::endl;

	// Test 3 : Sur l'arête (Doit renvoyer False selon le sujet)
	std::cout << "Test 3 - Point(5, 0) [Sur l'arete] : ";
	if (bsp(a, b, c, p3_edge))
		std::cout << "❌ Dedans (True)" << std::endl;
	else
		std::cout << "✅ Dehors (False)" << std::endl;

	// Test 4 : Sur le sommet (Doit renvoyer False selon le sujet)
	std::cout << "Test 4 - Point(0, 0) [Sur le sommet] : ";
	if (bsp(a, b, c, p4_vertex))
		std::cout << "❌ Dedans (True)" << std::endl;
	else
		std::cout << "✅ Dehors (False)" << std::endl;

	return 0;
}