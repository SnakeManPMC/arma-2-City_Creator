#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
	: QWidget(parent), ui(new Ui::WidgetClass)
{
	ui->setupUi(this);

	connect( ui->Create, SIGNAL( clicked() ), this, SLOT( Create() ) );
}

Widget::~Widget()
{
	delete ui;
}

void Widget::Create()
{
	int objectspacing = ui->ObjectSpacing->value();
	int citysizex = ui->CitySizeX->value();
	int citysizez = ui->CitySizeZ->value();
	int xcoord = ui->XCoord->value();
	int zcoord = ui->ZCoord->value();
	int rotation = 0;
	int height = 0;
	int pos_x = xcoord;
	int pos_z = zcoord;
	int building_size = ui->BuildingSize->value();

/*
ui->textEdit->clear();
ui->textEdit->append("objectspacing: " + QString::number(objectspacing));
ui->textEdit->append("citysizex: " + QString::number(citysizex));
ui->textEdit->append("citysizez: " + QString::number(citysizez));
ui->textEdit->append("xcoord: " + QString::number(xcoord));
ui->textEdit->append("zcoord: " + QString::number(zcoord));
ui->textEdit->append("rotation: " + QString::number(rotation));
ui->textEdit->append("height: " + QString::number(height));
ui->textEdit->append("pos_x: " + QString::number(pos_x));
ui->textEdit->append("pos_z: " + QString::number(pos_z));
ui->textEdit->append("building_size: " + QString::number(building_size));
*/
	QString house1 = "ca\\buildings\\dum_istan2";
	QString house2 = "ca\\buildings\\dum_olez_istan2_maly2";
	QString house3 = "ca\\buildings\\dum_istan2b";
	QString object1 = "ca\\misc\\kontejner";
	QString object2 = "ca\\misc\\kontejner_plasty";
	QString object3 = "ca\\misc\\kontejner_papir";
	QString object4 = "ca\\buildings\\misc\\plot_istan3";
	QString object5 = "ca\\buildings\\misc\\plot_istan3_sloupek";
	QString object6 = "ca\\buildings\\misc\\plot_rust_vrat_l";
	QString object7 = "ca\\buildings\\misc\\plot_istan3_short";
	
	pos_z++;
	while (pos_z != zcoord)
	{
		// building 1, dumbsters & fence.
		ui->textEdit->append('"' + house1 + '"' + ";" + QString::number(pos_x) + ";" + QString::number(pos_z) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object1 + '"' + ";" + QString::number(pos_x+8.11) + ";" + QString::number(pos_z-1.1) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object2 + '"' + ";" + QString::number(pos_x+8.11) + ";" + QString::number(pos_z-3.4) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object3 + '"' + ";" + QString::number(pos_x-8.02) + ";" + QString::number(pos_z-4) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object4 + '"' + ";" + QString::number(pos_x-9.96) + ";" + QString::number(pos_z-5.5) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object5 + '"' + ";" + QString::number(pos_x-12.66) + ";" + QString::number(pos_z-5.5) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object4 + '"' + ";" + QString::number(pos_x-12.67) + ";" + QString::number(pos_z-2.8) + ";" + QString::number(height) + ";" + QString::number(90) + ";");
		ui->textEdit->append('"' + object5 + '"' + ";" + QString::number(pos_x-12.69) + ";" + QString::number(pos_z-0.1) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object4 + '"' + ";" + QString::number(pos_x-12.69) + ";" + QString::number(pos_z+2.5) + ";" + QString::number(height) + ";" + QString::number(90) + ";");
		ui->textEdit->append('"' + object5 + '"' + ";" + QString::number(pos_x-12.69) + ";" + QString::number(pos_z+5.2) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");

		pos_x = (pos_x + building_size + objectspacing);
		if (pos_x >= (xcoord + citysizex))
		{
			pos_z = (pos_z + building_size + objectspacing);
			pos_x = xcoord;
		}

		if (pos_z >= (zcoord + citysizez))
		{
			pos_z = zcoord;
		}

		// building 2, dumbster + big fence
		ui->textEdit->append('"' + house2 + '"' + ";" + QString::number(pos_x) + ";" + QString::number(pos_z) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object1 + '"' + ";" + QString::number(pos_x+2.4) + ";" + QString::number(pos_z-4.6) + ";" + QString::number(height) + ";" + QString::number(90) + ";");
		ui->textEdit->append('"' + object4 + '"' + ";" + QString::number(pos_x-4) + ";" + QString::number(pos_z+6.7) + ";" + QString::number(height) + ";" + QString::number(90) + ";");
		ui->textEdit->append('"' + object5 + '"' + ";" + QString::number(pos_x-4) + ";" + QString::number(pos_z+9.4) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object4 + '"' + ";" + QString::number(pos_x-1.3) + ";" + QString::number(pos_z+9.4) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object5 + '"' + ";" + QString::number(pos_x+1.4) + ";" + QString::number(pos_z+9.4) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object4 + '"' + ";" + QString::number(pos_x+3.9) + ";" + QString::number(pos_z+6.7) + ";" + QString::number(height) + ";" + QString::number(90) + ";");
		ui->textEdit->append('"' + object5 + '"' + ";" + QString::number(pos_x+3.9) + ";" + QString::number(pos_z+9.4) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");

		pos_x = (pos_x + building_size + objectspacing);
		if (pos_x >= (xcoord + citysizex))
		{
			pos_z = (pos_z + building_size + objectspacing);
			pos_x = xcoord;
		}

		if (pos_z >= (zcoord + citysizez))
		{
			pos_z = zcoord;
		}

		// building 3, opteryx style
		ui->textEdit->append('"' + house3 + '"' + ";" + QString::number(pos_x) + ";" + QString::number(pos_z) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object4 + '"' + ";" + QString::number(pos_x-6.8) + ";" + QString::number(pos_z+5.3) + ";" + QString::number(height) + ";" + QString::number(90) + ";");
		ui->textEdit->append('"' + object5 + '"' + ";" + QString::number(pos_x-6.8) + ";" + QString::number(pos_z+8) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object4 + '"' + ";" + QString::number(pos_x-4.1) + ";" + QString::number(pos_z+8) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object5 + '"' + ";" + QString::number(pos_x-1.4) + ";" + QString::number(pos_z+8) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object6 + '"' + ";" + QString::number(pos_x-0.3) + ";" + QString::number(pos_z+8.5) + ";" + QString::number(height) + ";" + QString::number(68.8) + ";");
		ui->textEdit->append('"' + object5 + '"' + ";" + QString::number(pos_x+1.8) + ";" + QString::number(pos_z+8) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object4 + '"' + ";" + QString::number(pos_x+4.5) + ";" + QString::number(pos_z+8) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object5 + '"' + ";" + QString::number(pos_x+7.2) + ";" + QString::number(pos_z+8) + ";" + QString::number(height) + ";" + QString::number(rotation) + ";");
		ui->textEdit->append('"' + object4 + '"' + ";" + QString::number(pos_x+7.2) + ";" + QString::number(pos_z+5.3) + ";" + QString::number(height) + ";" + QString::number(90) + ";");
		ui->textEdit->append('"' + object7 + '"' + ";" + QString::number(pos_x+7.2) + ";" + QString::number(pos_z+1.5) + ";" + QString::number(height) + ";" + QString::number(90) + ";");

		pos_x = (pos_x + building_size + objectspacing);
		if (pos_x >= (xcoord + citysizex))
		{
			pos_z = (pos_z + building_size + objectspacing);
			pos_x = xcoord;
		}

		if (pos_z >= (zcoord + citysizez))
		{
			pos_z = zcoord;
		}
	}
//	ui->textEdit->append("All done, thank you.");
}
