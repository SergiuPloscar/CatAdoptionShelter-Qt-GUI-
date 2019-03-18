#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LAB_12_14.h"
#include "CatController.h"
#include "CSVAdopt.h"
#include "HTMLAdoptions.h"
class LAB_12_14 : public QMainWindow
{
	Q_OBJECT

public:
	LAB_12_14(CatController &c,QWidget *parent = Q_NULLPTR);
	
private:
	Ui::LAB_12_14Class ui;
	CatController &ctrl;
	int current;
	int current2;
	void connect();
	void showCats();
	void showAdoptions();
	void oneCat(int pos);
	void oneFilterCat(int pos);
private slots:
	void goToTab2() { ui.MyTabWidget->setCurrentIndex(1); };
	void goToTab3() { ui.MyTabWidget->setCurrentIndex(2); };
	void goToTab1() { ui.MyTabWidget->setCurrentIndex(0); };
	void addCat()
	{
		QString name = ui.NameLine->text();
		std::string Name = name.toStdString();
		QString breed = ui.BreedLine->text();
		std::string Breed = breed.toStdString();
		QString link = ui.LinkLine->text();
		std::string Link = link.toStdString();
		int Age = ui.AgeBox->value();
		double Weight = ui.WeightBox->value();
		int res;
		try
		{
			res = this->ctrl.addCatC(Breed, Name, Age, Link, Weight);
		}
		catch (CatException& e)
		{
			string error;
			for (auto d : e.getErrors())
			{
				error += d;
				error += " ";
			}
			QString Error = QString::fromStdString(error);
			ui.ErrorLabel->setText(Error);
		}
		showCats();
	}
	void deleteCat()
	{
		this->ctrl.deleteCatC(ui.AdminListWidget->currentRow());
		showCats();
	}
	void updateCat()
	{
		QString name = ui.NameLine->text();
		std::string Name = name.toStdString();
		QString breed = ui.BreedLine->text();
		std::string Breed = breed.toStdString();
		QString link = ui.LinkLine->text();
		std::string Link = link.toStdString();
		int Age = ui.AgeBox->value();
		double Weight = ui.WeightBox->value();
		int res;
		try
		{
			res = this->ctrl.updateCatC(ui.AdminListWidget->currentRow(),Breed, Name, Age, Link, Weight);
		}
		catch (CatException& e)
		{
			string error;
			for (auto d : e.getErrors())
			{
				error += d;
				error += " ";
			}
			QString Error = QString::fromStdString(error);
			ui.ErrorLabel->setText(Error);
		}
		showCats();
	}
	void shortform()
	{
		showCats();
	}
	void adopt()
	{	

		
			this->ctrl.addCatCA(this->ctrl.getRepo().getCatList()[this->current]);
			showAdoptions();
			this->current++;
			if (this->current == this->ctrl.getRepo().getCatList().size())
			this->current = 0;
			oneCat(this->current);
	}
	void next()
	{
		this->current++;
		if (this->current == this->ctrl.getRepo().getCatList().size())
		{
			this->current = 0;
			oneCat(this->current);
		}
		else
		{
			oneCat(this->current);
		}
	}
	void adoptF()
	{
		std::vector<Cat> V;
		QString breed = ui.FilterBreed->text();
		std::string Breed = breed.toStdString();
		int Age = ui.WeightFilter->value();
		if (Breed == "")
		{
			for (auto c : this->ctrl.getRepo().getCatList())
				if (c.getAge()<Age)
					V.push_back(c);
		}
		else
			this->ctrl.filterCats(Breed, Age, V);
		if (V.size() != 0)
		{
			this->ctrl.addCatCA(V[this->current2]);
			showAdoptions();
			this->current2++;
			if (this->current2 == V.size())
				this->current2 = 0;
			oneFilterCat(this->current2);
		}
	}
	void nextF()
	{
		this->current2++;
		std::vector<Cat> V;
		QString breed = ui.FilterBreed->text();
		std::string Breed = breed.toStdString();
		int Age = ui.WeightFilter->value();
		if (Breed == "")
		{
			for (auto c : this->ctrl.getRepo().getCatList())
				if (c.getAge()<Age)
					V.push_back(c);
		}
		else
			this->ctrl.filterCats(Breed, Age, V);
		if (V.size() != 0)
		{
			if (this->current2 == V.size())
			{
				this->current2 = 0;
				oneFilterCat(this->current2);
			}
			else
			{
				oneFilterCat(this->current2);
			}
		}
	}
	void filter()
	{
		this->current2 = 0;
		oneFilterCat(this->current2);
	}
	void CSV()
	{
		FileRepository* file1 = new CSVAdoptionList();
		this->ctrl.setFile(file1);
		this->ctrl.getFile()->writetoFile(this->ctrl.getRepo().getAdoptions());
		this->ctrl.getFile()->displayAdoptionList();
	}
	void HTML()
	{
		FileRepository*file = new HTMLAdoptionList;
		this->ctrl.setFile(file);
		this->ctrl.getFile()->writetoFile(this->ctrl.getRepo().getAdoptions());
		this->ctrl.getFile()->displayAdoptionList();
	}
};
