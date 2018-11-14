#include <iostream>
#include<cstdlib>
#include"Class.h"
int main() {
	Notebook Acer;
	{
		Acer.set ("Acer", 2.7, 2048);
		Acer.set (67.3, 256);
		Acer.set("black", 1096);
		Acer.getPrivate();
		Acer.getProtected();
		Acer.getPublic();
	}
	Notebook Dell;
	{
		Dell.set ("Dell", 3.2, 4096);
		Dell.set (53.6, 512);
		Dell.set("red", 1500);
		Dell.getPrivate();
		Dell.getProtected();
		Dell.getPublic();

	}
	Notebook Asus;
	{
		Asus.set ("Asus", 3.6, 6144);
		Asus.set (89.1, 1024);
		Asus.set("orange", 4096);
		Asus.getPrivate();
		Asus.getProtected();
		Asus.getPublic();

	}

	system("pause");
	return 0;
}
