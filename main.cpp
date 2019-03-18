#include "LAB_12_14.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CatRepository r;
	r.readFromFile();
	CatController c{ r };
	LAB_12_14 w( c );
	w.show();
	return a.exec();
}
