#include <minunit.h>

#include "varia_cam_lib.h"
#include <stdio.h>
#include <stdlib.h>

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_case) {
    int x=45;
    int y=68;
    passsar cambio;
    cambio=intercambio(x,y);
    x=cambio.valor1;
    y=cambio.valor2;

    mu_assert_double_eq(68, x);
    mu_assert_double_eq(45, y);
}

MU_TEST(test_case2) {
    int x=48;
    int y=89;
    passsar cambio;
    cambio=intercambio(x,y);
    x=cambio.valor1;
    y=cambio.valor2;

    mu_assert_double_eq(89, x);
    mu_assert_double_eq(48, y);
}
MU_TEST(test_case3) {
    int x=79;
    int y=100;
    passsar cambio;
    cambio=intercambio(x,y);
    x=cambio.valor1;
    y=cambio.valor2;

    mu_assert_double_eq(100, x);
    mu_assert_double_eq(79, y);
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_case);
    MU_RUN_TEST(test_case2);
    MU_RUN_TEST(test_case3);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}


