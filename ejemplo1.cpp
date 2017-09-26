#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{
	setupUi(this);
	show();
	connect(button, SIGNAL(clicked()), this, SLOT(doButton()) );
	time = new QTimer();
	time->start(1000);
	connect(time, SIGNAL(timeout()),this,SLOT(doLCDnumber()));
	num=0;
}

ejemplo1::~ejemplo1()
{}

void ejemplo1::doButton()
{
	
if(time->isActive())
{
  time->stop();
  button->setText("Start");
}else{
time->start();
button->setText("Stop");
}
}
void ejemplo1::doLCDnumber()
{
  num++;
  lcdNumber->display(num);
}



