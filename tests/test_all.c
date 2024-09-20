#include "test_all.h"

int main() {
	test_main_ast();
	test_main_bytecode();
	test_main_lexer();
	test_main_memory();
	test_main_parser();
	test_main_routine();
	test_main_value();

	return 0;
}
