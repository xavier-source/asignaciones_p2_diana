#include <minunit.h>

#include "Libreria.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_Nombre) {
    mu_assert_double_eq(ValorEsperado, Resultado);
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_Nombre);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}


