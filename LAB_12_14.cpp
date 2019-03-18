#include "LAB_12_14.h"
#include <sstream>
#include <iomanip>

LAB_12_14::LAB_12_14(CatController&c,QWidget *parent)
	:ctrl(c), QMainWindow(parent)
{
	ui.setupUi(this);
	this->current = 0;
	this->current2 = 0;
	this->showCats();
	this->oneCat(this->current);
	this->connect();
	
}

void LAB_12_14::connect()
{
	QObject::connect(ui.SendToAdminTab, SIGNAL(released()), this, SLOT(goToTab2()));
	QObject::connect(ui.SendToUserTab, SIGNAL(released()), this, SLOT(goToTab3()));
	QObject::connect(ui.backButton, SIGNAL(released()), this, SLOT(goToTab1()));
	QObject::connect(ui.RemoveButton, SIGNAL(released()), this, SLOT(deleteCat()));
	QObject::connect(ui.AddButton, SIGNAL(released()), this, SLOT(addCat()));
	QObject::connect(ui.UpdateButton, SIGNAL(released()), this, SLOT(updateCat()));
	QObject::connect(ui.MyComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(shortform()));
	QObject::connect(ui.backButton2, SIGNAL(released()), this, SLOT(goToTab1()));
	QObject::connect(ui.AdoptButton, SIGNAL(released()), this, SLOT(adopt()));
	QObject::connect(ui.NextButton, SIGNAL(released()), this, SLOT(next()));
	QObject::connect(ui.AdoptButton_2, SIGNAL(released()), this, SLOT(adoptF()));
	QObject::connect(ui.FilterButton, SIGNAL(released()), this, SLOT(filter()));
	QObject::connect(ui.NextButton_2, SIGNAL(released()), this, SLOT(nextF()));
	QObject::connect(ui.CSVButton, SIGNAL(released()), this, SLOT(CSV()));
	QObject::connect(ui.HTMLButton, SIGNAL(released()), this, SLOT(HTML()));
	
}

void LAB_12_14::showCats()
{
	if (ui.AdminListWidget->count() > 0)
		ui.AdminListWidget->clear();
	for (auto c : ctrl.getRepo().getCatList())
	{
		std::string n = c.getName();
		std::string b = c.getBreed();
		std::string a = std::to_string(c.getAge());
		std::ostringstream w;
		w <<setprecision(6)<< c.getWeight();
		std::string we = w.str();
		if( ui.MyComboBox->currentText() == "Detailed" )
		ui.AdminListWidget->addItem(QString::fromStdString(n + " - " + b + ", " + a + ", " + we));
		else
		ui.AdminListWidget->addItem(QString::fromStdString(n));

	}
}
void LAB_12_14::showAdoptions()
{
	if (ui.AdoptionListWidget->count() > 0)
		ui.AdoptionListWidget->clear();
	for (auto c : ctrl.getRepo().getAdoptions() )
	{
		std::string n = c.getName();
		std::string b = c.getBreed();
		std::string a = std::to_string(c.getAge());
		std::ostringstream w;
		w << setprecision(4) << c.getWeight();
		std::string we = w.str();
		ui.AdoptionListWidget->addItem(QString::fromStdString(n + " - " + b + ", " + a + ", " + we));
	

	}
}

void LAB_12_14::oneCat(int pos)
{
	std::string C;
	C += this->ctrl.getRepo().getCatList()[pos].getName();
	C += " - ";
	C += this->ctrl.getRepo().getCatList()[pos].getBreed();
	C += ", ";
	C += std::to_string(this->ctrl.getRepo().getCatList()[pos].getAge());
	C += ", ";
	std::ostringstream w;
	w << setprecision(6) << this->ctrl.getRepo().getCatList()[pos].getWeight();
	std::string we = w.str();
	C += we;
	QString c = QString::fromStdString(C);
	ui.AdoptionLabel->setText(c);
}
void LAB_12_14::oneFilterCat(int pos)
{
	std::string C;
	std::vector<Cat> V;
	QString breed = ui.FilterBreed->text();
	std::string Breed = breed.toStdString();
	int Age = ui.WeightFilter->value();
	if (Breed == "")
	{
		for (auto c : this->ctrl.getRepo().getCatList())
			if(c.getAge()<Age)
			V.push_back(c);
	}
	else
	this->ctrl.filterCats(Breed, Age,V);
	if (V.size() != 0)
	{
		C += V[this->current2].getName();
		C += " - ";
		C += V[this->current2].getBreed();
		C += ", ";
		C += std::to_string(V[this->current2].getAge());
		C += ", ";
		std::ostringstream w;
		w << setprecision(6) << V[this->current2].getWeight();
		std::string we = w.str();
		C += we;
		QString c = QString::fromStdString(C);
		ui.FilterLabel->setText(c);
	}
}
