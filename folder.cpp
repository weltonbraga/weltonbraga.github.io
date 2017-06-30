#include <sys/stat.h>
#include <iostream>

int main(){
	int resp = mkdir("12345");
	if (resp == 0 ){
		std::cout << "Pasta criada, com sucesso\n";
	} else if (resp == -1) {
		std::cout << "Erro: pasta ja existe!\n";
	} else {
		std::cout << "Erro desconhecido.\n";
	}
	int a = system("%python%\\python hello.py");
	
	std::cout << a << "\n";
return 0;
}
