//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <iomanip>
#include "P3.h"
using namespace std;

static void pregunta_3(){
    double t1, g1;
    double t2, g2;
    cin >> t1 >> g1 >> t2 >> g2;
    cout << setprecision(2) << fixed;
    cout << calcular_distancia(t1, g1, t2, g2);
}

TEST_CASE("Pregunta #3") {
    execute_test("test_3_1.in", pregunta_3);
}