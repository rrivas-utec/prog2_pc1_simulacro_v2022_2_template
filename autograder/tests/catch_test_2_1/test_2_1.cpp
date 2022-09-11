//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P2.h"
using namespace std;

static void pregunta_2_1() {
    const int sz = 6;
    char filamento[sz] = {'U', 'A', 'A', 'G', 'G', 'G'};
    char complemento[sz] = {};
    complemento_invertido(filamento, complemento, sz);
    for (auto& item: complemento)
        cout << item << " ";
    cout << endl;
}

static void pregunta_2_2() {
    const int sz = 14;
    char filamento[sz] = {'A', 'C', 'G', 'G', 'U', 'G', 'G', 'G', 'U', 'U', 'U', 'U', 'A', 'C'};
    char complemento[sz] = {};
    complemento_invertido(filamento, complemento, sz);
    for (auto& item: complemento)
        cout << item << " ";
    cout << endl;
}

static void pregunta_2_3() {
    const int sz = 14;
    char filamento[sz] = {'G', 'U', 'A', 'A', 'A', 'A', 'C', 'C', 'C', 'A', 'C', 'C', 'U', 'G'};
    char complemento[sz] = {};
    complemento_invertido(filamento, complemento, sz);
    for (auto& item: complemento)
        cout << item << " ";
    cout << endl;
}

static void pregunta_2_4() {
    const int sz = 26;
    char filamento[sz] = {'A', 'A', 'A', 'A', 'A', 'A', 'C', 'C', 'C', 'C', 'C', 'G', 'A',
                          'C', 'U', 'A', 'A', 'A', 'A', 'U', 'U', 'U', 'U', 'U', 'U', 'U'};
    char complemento[sz] = {};
    complemento_invertido(filamento, complemento, sz);
    for (auto& item: complemento)
        cout << item << " ";
    cout << endl;
}

TEST_CASE("Pregunta #2.1") {
    execute_test("test_2_1.in", pregunta_2_1);
}
TEST_CASE("Pregunta #2.2") {
    execute_test("test_2_2.in", pregunta_2_2);
}
TEST_CASE("Pregunta #2.3") {
    execute_test("test_2_3.in", pregunta_2_3);
}
TEST_CASE("Pregunta #2.4") {
    execute_test("test_2_4.in", pregunta_2_4);
}